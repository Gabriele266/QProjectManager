#ifndef LOGICOBJECTPARSER_H
#define LOGICOBJECTPARSER_H

#include <QString>
#include <QFile>
#include <QFileInfo>
#include <QDir>
#include <QTreeWidgetItem>
#include <QTreeWidget>
#include <QPlainTextEdit>

// elementi di logica
#include "logicobject.h"
#include "logicclass.h"
#include "versionfileparser.h"
#include "logicclassparser.h"

/// Permette di effettuare la ricerca e l'ordinazione di elementi logici in un percorso di progetto
class LogicObjectParser
{
public:
    LogicObjectParser();

    /// Imposta il percorso di ricerca
    void setSearchPath(QString path);

    /// Imposta la superficie di disegno
    void setSurface(QTreeWidget *parent);

    /// Imposta la console
    void setConsole(QPlainTextEdit *cns);

    /// Cerca e popola la superficie con gli elementi logici
    bool search();

private:
    // percorso in cui cercare
    QString path;

    // superficie su cui mostrare i contenuti trovati
    QTreeWidget *surface;

    // risultati della ricerca
    LogicObject *results[300];

    // console per gli errori
    QPlainTextEdit *console;

    // contatore dei risultati
    unsigned int count;
};

#endif // LOGICOBJECTPARSER_H
