#ifndef UTILS
#define UTILS

#include <QString>
#include "version.h"
#include <QDebug>

static QString adjustPath(QString path){
    // controllo che il percorso non sia nullo
    if(path != ""){
        // stringa buffer
        QString buffer;
        for(int x = 0; x < path.length(); x++){
            if(path[x] == '/'){
                buffer += '\\';
            }
            else{
                buffer += path[x];
            }
        }
        return buffer;
    }
    return "";
}

/// Calcola l'id numerico per una versione
static QString calcNumericId(unsigned int maj, unsigned int sub, unsigned int rev){
    return QString::number(maj) + "." + QString::number(sub) + "." + QString::number(rev);
}

/// Converte una stringa di testo in un flag
static VersionNameFlag getFromText(QString text){
//    // controllo che l'ultimo sia il terminatore

//        // tutto bene
//        VersionNameFlag flags[10];
//        for(int x = 0; x < item_count; x++){
//            // salvo il testo del controllo
//            QString txt = ui->flagsList->item(x)->text();
//            if( txt == "Numero versione maggiore"){
//                flags[x] = VersionNameFlag::PutMajorBranch;
//            }
//            else if(txt == "Separatore"){
//                flags[x] = VersionNameFlag::PutSeparator;
//            }
//            else if(txt == "Numero sottoversione"){
//                flags[x] = VersionNameFlag::PutSubBranch;
//            }
//            else if(txt == "Numero revisione"){
//                flags[x] = VersionNameFlag::PutRevision;
//            }
//            else if(txt == "Nome versione"){
//                flags[x] = VersionNameFlag::PutVersionName;
//            }
//            else if(txt == "Nome progetto"){
//                flags[x] = VersionNameFlag::PutProjectName;
//            }
//            else if(txt == "Fine dichiarazione"){
//                flags[x] = VersionNameFlag::EndVersionName;
//                break;
//            }
//        }
    // buffer per il flag
    VersionNameFlag flag;
    qInfo() << "Conversione in flag. Testo: " << text;
    QString txtd = text.toUpper();
    qInfo() << "\nTesto in caratteri maiuscoli: " << txtd;
    if(txtd == "SEPARATORE"){
        flag = VersionNameFlag::PutSeparator;
    }
    else if(txtd == "NUMERO VERSIONE MAGGIORE"){
        flag = VersionNameFlag::PutMajorBranch;
    }
    else if(txtd == "NUMERO SOTTOVERSIONE"){
        flag = VersionNameFlag::PutSubBranch;
    }
    else if(txtd == "NUMERO REVISIONE"){
        flag = VersionNameFlag::PutRevision;
    }
    else if(txtd == "NOME VERSIONE"){
        flag = VersionNameFlag::PutVersionName;
    }
    else if(txtd == "NOME PROGETTO"){
        flag = VersionNameFlag::PutProjectName;
    }
    else if(txtd == "FINE DICHIARAZIONE"){
        flag = VersionNameFlag::EndVersionName;
    }
    else{
        qInfo() << "\nNome non riconosciuto\n";
    }

    return flag;
}
#endif
