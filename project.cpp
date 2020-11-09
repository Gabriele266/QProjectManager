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

void Project::setProjType(ProjectType ty){
    type = ty;
}

void Project::save(){
    // salva
    // scrivo il file di progetto
    createProjectFile();
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

QString Project::getProjFilePath(){
    return path + '\\' + name;
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

bool Project::loadFromDisk(QString file_path){
    // Controllo che il percorso del file non sia nullo
    if(file_path != "" && QFile::exists(file_path)){
        // Il file esiste
        // Leggo sequenzialmente le linee
        QString current_line = "";
        // Indicatore dello scope corrente
        QString current_scope = "";
        // Apro il file
        QFile file(file_path);

        // Controllo che sia aperto
        if(file.open(QIODevice::ReadOnly)){
            // Il file è aperto
            while(!file.atEnd()){
                // Leggo una linea
                current_line = file.readLine();

                // Rimuovo gli spazi iniziali
                current_line = removeInitialSpaces(current_line);

                // Controllo lo scope
                if(current_line == "/section:projectinfo"){
                    // Imposto lo scope corrente come quello di informazioni progetto
                    current_scope = "project_info";
                }
                else if(current_line == "/section:annotations"){
                    current_scope = "annotations";
                }
                else if(current_line == "/versions"){
                    current_scope = "versions";
                }
                else if(current_scope == "project_info"){
                    // Siamo nello scope delle informazioni del progetto
                    // La linea corrente non esprime una direttiva di scope
                    // Stringa con il nome del parametro
                    QString param_name = current_line.split(':')[0];
                    // Stringa con il valore del parametro
                    QString param_val = current_line.split(':')[1];

                    // Avvio la ricerca di parametri per il progetto
                    searchProjectProperty(param_name, param_val);
                }
            }
        }

    }
}

bool Project::searchProjectProperty(QString param_name, QString param_val){
    // Controllo
    if(param_name != "" && param_val != ""){
        // Controllo se si tratta di un parametro
        if(param_name == "+name"){
            // Questo parametro imposta il nome del progetto
            name = param_val;
            return true;
        }
        else if(param_name == "+creationtime"){
            // Questo parametro imposta la data di creazione del progetto
            setCreationTime(QDateTime::fromString(param_val));
            return true;
        }
        else if(param_name == "+description"){
            setDescription(param_val);
            return true;
        }
        else{
            // Per ora nessun errore
            return false;
        }
    }
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
    // creo il file
    QFile *f = new QFile(file_path);
    if(f->exists()){
        // cancello il file
        f->remove();
    }
    if(f->open(QIODevice::WriteOnly | QIODevice::Text)){
        // creo il textstream
        QTextStream stream(f);
        // salvo l'orario
        setCreationTime(QDateTime::currentDateTime());
        // imposto l'orario di ultima modifica
        setLastModifyTime(QDateTime::currentDateTime());
        stream << "@projectmanager project file" << endl;
        // sezione informazioni progetto
        stream << "/section:projectinfo" << endl;
        stream << "\t+name:" << name << endl;
        stream << "\t+creationtime:" << getLastModifyTime().toString() << endl;
        stream << "\t+description:" << getDescription() << "+enddescription" << endl;
        stream << "/section:annotations" << endl;
        stream << "\t+annotationplace:" << "outsideproject" << endl;
        stream << "\t+annotationpath:" << getNotesPath() << endl;
        stream << "\t+annotationtype:" << "html" << endl;
        // salvo la versione master se esiste
        if(hasMaster()){
            stream << "/master" << endl;
            stream << "\t+id:" << masterVersion->getNumericId()<< endl;
            stream << "\t+path:" << masterVersion->getCreationPath() << endl;
            stream << "\t+description:" << masterVersion->getDescription() << endl;
        }
        stream << "/versions" << endl;
        // salvo i percorsi delle versioni
        for(unsigned int count = 0; count < versions_num; count++){
            stream << "\t+newversion" << endl;
            stream << "\t+name:" << subVersions[count]->getName() << endl;
            stream << "\t+path:" << subVersions[count]->getCreationPath() << endl;
            stream << "\t+id:" << subVersions[count]->getNumericId() << endl;
            stream << "\t+creationtime:" << subVersions[count]->getCreationTime().toString() << endl;
            stream << "\t+lastmodify:" << subVersions[count]->getLastModifyTime().toString() << endl;
            stream << "\t+author:" << subVersions[count]->getAuthor() << endl;
        }
        stream << "/endversions" << endl;
        stream.flush();
        f->close();

        // salvo l'orario di creazione

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

