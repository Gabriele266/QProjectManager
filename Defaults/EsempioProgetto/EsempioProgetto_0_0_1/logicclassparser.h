#ifndef LOGICCLASSPARSER_H
#define LOGICCLASSPARSER_H

#include <QString>
#include <QTextStream>
#include <QFile>
#include <QDir>
#include <QMessageBox>
#include <QDebug>

#include "logicclass.h"
#include "logicmodule.h"
#include "logicfunction.h"

/// Permette di effettuare la ricerca di una classe in una coppia di file
class LogicClassParser
{
public:
    LogicClassParser();

    /// Imposta il percorso di ricerca
    void setSearchPath(QString class_path);

    /// restituisce la classe risultante
    LogicClass* getResultClass();

    /// Restituisce il modulo risultante
    LogicModule* getResultModule();

    /// Avvia la ricerca
    bool search();

    bool isClass();
private:
    // percorso di ricerca
    QString path;

    // unione dei risultati

    LogicClass *result_class;
    LogicModule *result_module;


    bool is_class;
};

#endif // LOGICCLASSPARSER_H
