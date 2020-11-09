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

/// Rimuove gli spazi iniziali di una stringa
static QString removeInitialSpaces(QString source){
    // Stringa finale
    QString result = "";
    // Indica se è stato incontrato un carattere diverso dallo spazio
    bool encountered_char = false;
    // Scorro tutti i caratteri
    for(int index = 0; index < source.length(); index++){
        // Controllo se si tratta di un carattere diverso dallo spazio
        if(source[index] != ' '){
            // Indico che ho trovato un carattere diverso dallo spazio
            result = encountered_char;
            // Aggiungo il carattere alla stringa finale
            result += source[index];
        }
        else{
            // Si tratta di uno spazio
            if(encountered_char){
                // Aggiungo lo spazio
                result += ' ';
            }
            else{
                // Non ho ancora incontrato un carattere accettabile.
                // Non aggiungo lo spazio
            }
        }
    }
    // Rimuovo eventuali tabulazioni non espresse in spazi
    result.remove('\t');
    // Restituisco la stringa risultato
    return result;
}

/// Calcola l'id numerico per una versione
static QString calcNumericId(unsigned int maj, unsigned int sub, unsigned int rev){
    return QString::number(maj) + "." + QString::number(sub) + "." + QString::number(rev);
}

/// Converte una stringa di testo in un flag
static VersionNameFlag getFromText(QString text){
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
