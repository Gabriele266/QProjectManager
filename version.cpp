#include "version.h"

Version::Version()
{
    // imposto tutti i valori come non definiti
    major_branch = BRANCH_UNDEFINED;
    sub_branch = BRANCH_UNDEFINED;
    revision_num = BRANCH_UNDEFINED;
    complete_name = "";
    relative_path  = "";
    project_name = "";
    resetFlags();
}

Version::Version(unsigned int m, unsigned int s, unsigned int r, QString path, QString name, QString projName){
    major_branch = m;
    sub_branch = s;
    revision_num = r;
    relative_path = path;
    version_name = name;
    project_name = projName;
    complete_path = relative_path;
    resetFlags();
}

void Version::setMaster(bool val){
    isMasterBranch = val;
}

bool Version::isStable(){
    return is_stable;
}

void Version::setStable(bool val){
    is_stable = val;
}

void Version::setVersionName(QString n){
    version_name = n;
}

void Version::setNumericId(QString id){
    QStringList list = id.split('.');

    if(list.count() == 3){
        major_branch = list[0].toInt();
        sub_branch = list[1].toInt();
        revision_num = list[2].toInt();
    }
    qInfo() << "Numeric id converted to: " << getNumericId() << endl;
}

bool Version::createOnDisk(Version *source){
    qInfo() << "Creazione sul disco della versione " << version_name << '\n';
    // controllo che tutto il necessario sia disponibile
    if(this->relative_path != ""){
        // percorso di creazione esistente e valido
        // controllo che i numeri siano stati impostati
        if(major_branch != BRANCH_UNDEFINED && sub_branch != BRANCH_UNDEFINED && revision_num != BRANCH_UNDEFINED){
            // controllo che il nome del progetto non sia nullo
            if(project_name != ""){
                // calcolo il nome completo
                complete_name = formatNamePath(name_flags);

                // formatto il percorso totale
                complete_path = relative_path + '\\' + project_name + '\\' + complete_name;
                // Aggiusto gli /
                complete_path = complete_path.replace('/', '\\');

                // Scrivo le informazioni di debug
                qInfo() << "percorso completo creazione versione: " << complete_path << '\n';
                // Formatto il comando di creazione della versione
                QString dir_command = "MKDIR " + complete_path;
                qInfo() << "comando creazione versione: " << dir_command << '\n';
                // creo il percorso
                int res = system(dir_command.toStdString().c_str());
                if(res == 0){
                    // successo
                    if(source != nullptr){
                        // copio i file
                        QString comm = "ROBOCOPY " + source->getCreationPath() + " " + complete_path + " /S /E ";
                        qInfo() << "comando copia file: " << comm << '\n';
                        // salvo l' orario di creazione
                        setCreationTime(QDateTime::currentDateTime());
                        // imposto quello di ultima modifica
                        setLastModifyTime(QDateTime::currentDateTime());

                        int res = system(comm.toStdString().c_str());
                        qInfo() << " valore risultato operazione di copia: " << res << '\n';
                        if(res == 1){
                            // successo
                            return true;
                        }
                        else{
                            throwError("Errore nella creazione della nuova versione sul disco: errore nella copia dei file. Comando: " + comm);
                            return false;
                        }
                    }
                }
                else{
                    throwError("Errore durante la creazione della nuova versione sul disco: impossibile creare la cartella di versione");
                    return true;
                }
            }
            else{
                // mostro un errore
                throwError("Errore nella creazione della versione su disco: il nome del progetto non è stato specificato.");
                return false;
            }
        }
        else{
            throwError("Errore nella creazione della nuova versione su disco: non sono stati specificati tutti i numeri necessari");
            return false;
        }
    }
    else{
        // mostro un errore
        throwError("Errore nella creazione della nuova versione su disco: non è stato specificato il percorso di installazione o quello specificato non esiste.");
        return false;
    }
}

void Version::resetFlags(){
    for(int x =0; x < 10; x++){
        name_flags[x] = VersionNameFlag::NullFlag;
    }
}

bool Version::deleteFromDisk(){
    // cartella in cui dovrebbe esserci la versione
    QDir dir(complete_path);
    // controllo se era stata creata
    if(dir.exists()){
        // cancello la cartella
        QStringList list;
        list.append("/S");
        list.append("/Q");
        list.append(complete_path);

        // creo il processo per cancellare la directory
        int result = QProcess::execute("rmdir.exe", list);
        qInfo() << "Cancello percorso " << list << endl;
        if(result == QProcess::NormalExit){
            return true;
        }
        else{
            return false;
        }
    }
}

QString Version::getName(){
    return version_name;
}

unsigned int Version::getRevision() {
    return revision_num;
}

unsigned int Version::getSubVersion(){
    return sub_branch;
}

unsigned int Version::getMajorVersion(){
    return major_branch;
}

QString Version::getNumericId(){
    // formatto
    QString buffer = QString::number( major_branch) + "." + QString::number(sub_branch) + "." + QString::number(revision_num);
    // restituisco
    return buffer;
}

QString Version::formatNamePath(VersionNameFlag flags[10]){
    // formatto il nome per la versione
    QString name = "";
    // flag corrente nella ricerca
    VersionNameFlag cur_flag;
    // scorro i flag e li aggiungo al nome
    for(int x = 0; x < 10; x++){
        // controllo il numero di flag
        // flag corrente
        cur_flag = flags[x];

        if(cur_flag == VersionNameFlag::PutMajorBranch){
            // aggiungo il major branch
            name += QString::number(major_branch);
        }
        else if(cur_flag ==  VersionNameFlag::PutMasterInd){
            name += "master";
        }
        else if(cur_flag == VersionNameFlag::PutProjectName){
            name += project_name;
        }
        else if(cur_flag == VersionNameFlag::PutRevision){
            name += QString::number(revision_num);
        }
        else if(cur_flag ==  VersionNameFlag::PutSeparator){
            name += "_";
        }
        else if(cur_flag ==  VersionNameFlag::PutSubBranch){
            name += QString::number(sub_branch);
        }
        else if(cur_flag ==  VersionNameFlag::PutVersionName){
            name += version_name;
        }
        else if(cur_flag ==  VersionNameFlag::EndVersionName){
            break;
        }
        else if(cur_flag == VersionNameFlag::NullFlag){

        }
    }
    return name;
}

void Version::throwError(QString text){
    QMessageBox *msg = new QMessageBox();
    msg->setText(text);
    msg->setIcon(QMessageBox::Critical);
    msg->exec();
}

void Version::setCreationPath(QString path){
    relative_path = path;
    complete_path = path;
}

void Version::setProjectName(QString name){
    project_name = name;
}

QString Version::getCreationPath(){
    if(!isMasterBranch){
        return complete_path;
    }
    else{
        return relative_path;
    }
}

void Version::setFinalNameCrFlags(VersionNameFlag flags[10]){
    // copio l'array a in b
    for(int x = 0; x < 10; x ++){
        if(flags[x] != VersionNameFlag::EndVersionName){
            name_flags[x] = flags[x];
        }
        else{
            break;
        }
    }
}

QString Version::toString(){
    return "version";
}
