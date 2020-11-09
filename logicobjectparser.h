#ifndef LOGICOBJECTPARSER_H
#define LOGICOBJECTPARSER_H

#include <QString>
#include <QFile>
#include <QFileInfo>
#include <QDir>
#include <QTreeWidgetItem>
#include <QTreeWidget>
#include <QPlainTextEdit>
#include <QProgressBar>
#include <QMainWindow>

// elementi di logica
#include "logicobject.h"
#include "logicclass.h"
#include "versionfileparser.h"
#include "logicclassparser.h"
#include "logicfunctionparser.h"
#include "logicfunction.h"
#include "logicviewpalette.h"

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
    bool search(LogicViewPalette palette);

    /// Imposta i collegamenti alla finestra
    void setWindowInfo(QMainWindow *frame, QProgressBar *bar);
private:
    // percorso in cui cercare
    QString path;

    // superficie su cui mostrare i contenuti trovati
    QTreeWidget *surface;

    // risultati della ricerca
    LogicObject *results[300];

    // console per gli errori
    QPlainTextEdit *console;

    // progress bar per indicare lo stato del processo
    QProgressBar *progress;

    // puntatore alla finestra
    QMainWindow *window;

    // contatore dei risultati
    unsigned int count;
};

#endif // LOGICOBJECTPARSER_H
