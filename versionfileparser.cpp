#include "versionfileparser.h"

VersionFileParser::VersionFileParser()
{
    search_path = "";
    console = nullptr;
}

void VersionFileParser::setSearchPath(QString path){
    search_path = path;
}

QString VersionFileParser::getSearchPath(){
    return search_path;
}

void VersionFileParser::setConsoleSurf(QPlainTextEdit *edit){
    console = edit;
}

QStringList VersionFileParser::getResults(){
    return results;
}

void VersionFileParser::searchDir(QString direct){
    // creo l'oggetto dir
    QDir directory(direct);
    // Oggetto contenuto
    QFileInfoList content;
    // Elementi resistituiti dalla ricerca
    QStringList res;
    // effettuo la ricerca
    content = directory.entryInfoList();
    res = directory.entryList();

    // mostro le informazioni
    qInfo() << "Avvio ricerca elementi nella cartella " << directory.absolutePath() << endl;
    qInfo() << "numero di risultati ricerca: " << content.count() << endl;
    qInfo() << "numero file contenuti: " << directory.entryList() << endl;
    // scorro gli elementi
    for(int x = 0; x < content.count(); x++){
        // controllo se è una cartella
        // controllo che non si tratti di . o ..
        if(res[x] != "." && res[x] != ".."){
            if(content[x].isDir()){
                // cerco altri elementi
                searchDir(direct + "\\" + res[x]);
            }
            else{
                // aggiungo il percorso ai risultati
                results.append(content[x].absoluteFilePath());
            }
        }
    }
}

bool VersionFileParser::execute(){
    // controllo che la console esista
    if(console != nullptr){
        // controllo che il percorso esista
        QDir base_dir(search_path);

        // controllo che esista
        if(base_dir.exists()) {
            // continuo
            // cerco
            searchDir(search_path);

            return true;
        }
    }
    else{
        return true;
    }
}
