#ifndef FILESFUN
#define FILESFUN

#include <QString>
#include <QFile>
#include <QTextStream>
#include <QMessageBox>

/// Cancella un file specificato nel percorso
static bool deleteFile(QString file_path){
    // creo l'oggetto file
    QFile file(file_path);

    // controllo che esista
    if(file.exists()){
        // lo cancello
        bool res = file.remove();

        // controllo
        if(res){
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




#endif
