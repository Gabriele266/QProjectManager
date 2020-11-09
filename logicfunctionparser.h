#ifndef LOGICFUNCTIONPARSER_H
#define LOGICFUNCTIONPARSER_H

#include <QString>
#include <QDebug>
#include <QTreeWidget>
#include <QTreeWidgetItem>
#include <QFile>
#include <QTextStream>

#include "logicfunction.h"
#include "logicclass.h"
#include "logicviewpalette.h"

/// Effettua la ricerca di una definizione di funzione in una stringa
class LogicFunctionParser
{
public:
    LogicFunctionParser();

    /// Imposta il percorso di ricerca
    void setSearchPath(QString val);

    /// Avvia la ricerca su una riga
    LogicFunction* parseLine(QString li);

    /// Avvia la ricerca
    bool search(LogicViewPalette palette);

    /// Imposta il parent
    void setParent(QTreeWidgetItem *parent);
private:
    // file in cui cercare
    QString file_path;

    /// widget a cui aggiungere quelli delle eventuali funzioni
    QTreeWidgetItem *parent;

    /// Controlla se un blocco rappresenta un modificatore per la funzione
    bool checkFunctionModifier(QString block, LogicFunction *function);
};

#endif // LOGICFUNCTIONPARSER_H
