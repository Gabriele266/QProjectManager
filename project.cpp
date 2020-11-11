#include "project.h"

Project::Project()
{
    masterVersion = nullptr;
    path = "";
    name = "";
    infoFile = "";
    versions_num = 0;
    clearAll();
}

Project::Project(QString p, QString n, ProjectType tp, bool file){
    path = p;
    name = n;
    home_path = path + "\\" + name;
    type = tp;
    infoFile = file;
    masterVersion = nullptr;
    versions_num = 0;
}

void Project::setName(QString nm){
    name = nm;
}

void Project::setPath(QString pt){
    path = pt;
}

void Project::setType(ProjectType ty){
    type = ty;
}

void Project::save(){
    // salva
    // scrivo il file di progetto
    createProjectFile();
}

QString Project::getHomePath(){
    home_path = path + "\\" + name;
    home_path = home_path.replace('/', '\\');
    return home_path;
}

int Project::getVersionCount(){
    return versions_num;
}

Version* Project::getMasterVersion(){
    return masterVersion;
}

bool Project::hasMaster(){
    if(masterVersion != nullptr){
        return true;
    }
    return false;
}

QString Project::getFilePath(){
    return getHomePath() + '\\' + name + ".prjm";
}

bool Project::existsVersion(QString numericId){
    for(int x = 0; x < versions_num; x++){
        if(subVersions [x] != nullptr && subVersions[x]->getNumericId() == numericId){
            return true;
        }
    }
    return false;
}

void Project::clearAll(bool fromDisk){
    // cancello le versioni
    for(int count = 0; count < 100; count++){
        // controllo se la versione era stata creata
        if(count < versions_num){
            // cancello la versione dalla ram e dal disco
            subVersions[count]->deleteFromDisk();
            delete subVersions[count];
        }
        // imposto nullptr
        subVersions[count] = nullptr;
    }
}

bool Project::existsVersion(unsigned int index){
    // controllo se esiste
    if(index >= 0 && index < versions_num && subVersions[index] != nullptr){
        return true;
    }
    return false;
}

Version* Project::getLastVersion(){
    return subVersions[versions_num - 1];
}

bool Project::create(){
    // controllo i prerequisiti
    if(name != "" && path != ""){
        // creo la cartella del progetto
        bool r1, r2;
        r1 = createProjectFolder();
        r2 = createProjectFile();
        if(r1 && r2){
            QMessageBox *msg = new QMessageBox();
            msg->setText("Creazione progetto sul disco avvenuta con successo. ");
            msg->setIcon(QMessageBox::Information);
            msg->exec();
            return true;
        }
        else{
            return false;
        }
    }
    else{
        return false;
    }
}

Project* Project::loadFromDisk(QString file_path){
    // Carico il progetto
    // Creo il documento dom
    QDomDocument document;
    // Creo il file per leggere le informazioni
    QFile read(file_path);
    // Progetto creato
    Project *project = new Project();
    // Controllo se riesco ad aprirlo
    if(read.open(QIODevice::ReadOnly)){
        // Carico il contenuto dentro il documento
        if(document.setContent(&read)){
            // Avvio il caricamento
            // Leggo il nodo root
            QDomElement root = document.firstChildElement("project");
            // Lista con gli elementi figli
            QDomNodeList childs = root.childNodes();

            qInfo() << "Root child elements: " << childs.count() << endl;

            // Controllo il numero di nodi
            if(childs.count() >= 2){
                // Prendo il primo nodo e lo converto in elemento
                QDomElement informations_elem = childs.at(0).toElement();

                // Estraggo l'attributo name
                project->setName(informations_elem.attribute("name"));

                // Estraggo l'attributo description
                project->setDescription(informations_elem.attribute("description"));

                // Estraggo la data di creazione
                project->setCreationTime(QDateTime::fromString(informations_elem.attribute("creationDate")));

                // Calcolo il percorso home del progetto
                QFileInfo info(read);
                QDir comp = info.path();
                comp.cdUp();
                project->setPath(comp.path());

                // Carico le informazioni della versione master
                if(childs.count() > 2){
                    // Converto in elemento
                    QDomElement master_elem = childs.at(2).toElement();
                    QDomText text = master_elem.firstChild().toText();
                    Version *master = new Version();
                    // Estraggo le informazioni necessarie
                    master->setNumericId(master_elem.attribute("id"));
                    master->setMaster(true);
                    master->setCreationPath(text.nodeValue());
                    master->setProjectName(project->getName());
                    // Aggiungo la versione al progetto
                    project->setMasterVersion(master);
                }
            }
            else{
                QMessageBox::critical(nullptr, "Errore", "Errore: il caricamento del progetto dal file selezionato \nnon è possibile perchè il contenuto è insufficente ad un corretto caricamento.\n"
                                                         "File da cui caricare:  " + file_path);
            }

        }
        // Chiudo il file
        read.close();

    }
    else{
        // Mostro l'errore
        QMessageBox::critical(nullptr, "Errore", read.errorString());
    }
    return project;
}

bool Project::createProjectFolder(){
    QString comm = "MKDIR " + path + "\\" + name;
    int res = system(comm.toStdString().c_str());
    if(res == 0){
        return true;
    }
    else{
        QMessageBox *msg = new QMessageBox();
        msg->setText("Errore nella creazione della cartella di progetto. COmando: " + comm);
        msg->setIcon(QMessageBox::Critical);
        msg->exec();
        return false;
    }
}

bool Project::createProjectFile(){
    // formatto il nome
    QString file_path = path + "\\" + name + "\\" + name + ".prjm";
    // Documento DOM per la gestione dell' xml
    QDomDocument document;
    // creo il file
    QFile file(file_path);
    if(file.exists()){
        // cancello il file
        file.remove();
    }
    if(file.open(QIODevice::WriteOnly | QIODevice::Text)){
        // Creo l'elemento root
        QDomElement root_elem = document.createElement("project");
        root_elem.setAttribute("version", PROGRAM_VERSION);
        // Aggiungo al documento
        document.appendChild(root_elem);
        // salvo l'orario
        setCreationTime(QDateTime::currentDateTime());
        // imposto l'orario di ultima modifica
        setLastModifyTime(QDateTime::currentDateTime());

        // Creo l'elemento per le informazioni del progetto
        QDomElement info_elem = document.createElement("informations");
        // Creo l'attributo per il nome
        info_elem.setAttribute("name", name);
        // Creo l' attributo per la data di creazione
        info_elem.setAttribute("creationDate", getCreationTime().toString());
        // Creo l' attributo per la descrizione
        info_elem.setAttribute("descritption", getDescription());
        // Creo l'elemento per le annotazioni
        QDomElement annotations = document.createElement("annotations");
        // Aggiungo l'elemento per la posizione delle annotazioni
        annotations.setAttribute("location", "outside");
        annotations.setAttribute("format", "html");
        annotations.appendChild(document.createTextNode(getNotesPath()));

        // Aggiungo gli elementi al nodo root
        root_elem.appendChild(info_elem);
        root_elem.appendChild(annotations);
        // Controllo se devo salvare la versione master
        if(masterVersion != nullptr){
            // Creo l'elemento per la versione master
            QDomElement master_elem = document.createElement("master");

            // Creo l'attributo per la descrizione
            master_elem.setAttribute("description", masterVersion->getDescription());
            master_elem.setAttribute("modify", "disabled");
            master_elem.setAttribute("id", masterVersion->getNumericId());
            // Creo un nodo di testo
            QDomText text = document.createTextNode(masterVersion->getCreationPath());
            // Aggiungo il testo al master_elem
            master_elem.appendChild(text);

            root_elem.appendChild(master_elem);

            // Versione corrente nel ciclo
            Version *current_version;

            // salvo i percorsi delle versioni
            for(unsigned int count = 0; count < versions_num; count++){
                // Salvo la versione corrente
                current_version = subVersions[count];

                // Creo l'elemento
                QDomElement current = document.createElement("version");
                // Imposto gli attributi
                current.setAttribute("name", current_version->getName());
                current.setAttribute("id", current_version->getNumericId());
                current.setAttribute("creation_time", current_version->getCreationTime().toString());
                current.setAttribute("last_modify", current_version->getLastModifyTime().toString());
                current.setAttribute("author", current_version->getAuthor());
                QDomText txt = document.createTextNode(current_version->getCreationPath());
                current.appendChild(txt);

                // Aggiungo l'elemento al root
                root_elem.appendChild(current);
            }

        }
        // Scrivo il documento sul file
        file.write(document.toString().toStdString().c_str());
        file.close();
        return true;
    }
    else{
        QMessageBox *msg = new QMessageBox();
        msg->setText("Errore nella creazione del file di progetto. Impossibile aprire il file: " + file_path);
        msg->setIcon(QMessageBox::Critical);
        msg->exec();
        return false;
    }
}

QString Project::getName(){
    return name;
}

bool Project::setMasterVersion(Version *version){
    if(version != nullptr){
        masterVersion = version;
        return true;
    }
    else{
        return false;
    }
}

bool Project::removeVersion(unsigned int index)
{
    // eseguo il flush delle versioni escludendo index
    // controllo che index esista
    if(index >= 0 && index < versions_num){
        // la versione esiste
        subVersions[index] = nullptr;

        // eseguo il flush
        int start = index;

        for(int cur_ind = start; cur_ind < versions_num; cur_ind++){
            // calcolo l'indice successivo
            int next = index + 1;
            // controllo se esiste
            if(next < versions_num){
                subVersions[index] = subVersions[next];
                qInfo() << "Sposto " << next << " in " << index << endl;
            }
        }
        return true;
    }
    else{
        return false;
    }
}

unsigned int Project::getVersionIndex(QString id){
    // cerco la versione
    for(int x = 0; x < versions_num; x ++){
        // controllo che esista effettivamente
        if(subVersions[x] != nullptr){
            // controllo il nome
            if(subVersions[x]->getNumericId() == id){
                return x;
            }
        }
        else{
            QMessageBox::information(nullptr, "Versione nulla", "Durante la ricerca di una versione tramite id è stata trovata una versione nulla all' indice: " + x);
            return -1;
        }
    }
    return -1;
}

bool Project::removeVersion(QString id)
{
    // rimuovo la versine dalla memoria
    if(removeVersion(getVersionIndex(id))){
        return true;
    }
    return false;
}

bool Project::deleteVersion(unsigned int index){
    // controllo l'indice
    if(index >= 0 && index < versions_num){
        // posso procedere
        // cancello la versione dal disco
        subVersions[index]->deleteFromDisk();
        // cancello la versione dalla memoria
        delete subVersions[index];
        // eseguo il flush
        if(removeVersion(index)){
            return true;
        }
        else{
            return false;
        }
    }
    else{
        return false;
    }
}

bool Project::addVersion(Version *version){
    // controllo che non sia nulla
    if(version != nullptr && versions_num >= 0){
        // salvo la versione
        subVersions[versions_num] = version;
        versions_num ++;
        return true;
    }
    else{
        QMessageBox *msg = new QMessageBox();
        msg->setText("Errore nella aggiunta della nuova versione nel progetto. Nessuna versione specificata (valore parametro nullptr).");
        msg->setIcon(QMessageBox::Critical);
        msg->exec();
        return false;
    }
}

Version* Project::getVersion(unsigned int index){
    // controllo che esista l'indice
    if(index >= 0 && index < versions_num){
        return subVersions[index];
    }
    else{
        return nullptr;
    }
}

Version *Project::getVersion(QString id)
{
    for(int x = 0; x < versions_num; x++){
        // controllo se esiste
        if(subVersions[x] != nullptr){
            if(subVersions[x]->getNumericId() == id){
                return subVersions[x];
            }
        }
    }
}

QString Project::getPath(){
    return path;
}

