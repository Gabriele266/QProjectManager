#ifndef VERSIONFILEPARSER_H
#define VERSIONFILEPARSER_H

#include <QString>
#include <QStringList>
#include <QFile>
#include <QFileInfo>
#include <QDir>
#include <QFileInfoList>
#include <QPlainTextEdit>
#include "version.h"
#include <QDebug>

/// Rappresenta una classe per eseguire la ricerca ricorsiva di file all' interno di una cartella
class VersionFileParser
{
public:
    VersionFileParser();

    /// Esegue la ricerca
    bool execute();

    /// Imposta il percorso di ricerca dei file
    void setSearchPath(QString path);

    /// Imposta la console di controllo
    void setConsoleSurf(QPlainTextEdit *edit);

    /// Restituisce il percorso di ricerca
    QString getSearchPath();

    /// Restituisce i risultati della ricerca in una forma formattata
    QStringList getResults();

private:
    /// Cerca i file all' interno di una cartella

    void searchDir(QString dir);

    /// Aggiunge un file ai risultati
    void addFileToResults(QFileInfo info);

    // risultati della ricerca
    QStringList results;

    // percorso di ricerca
    QString search_path;

    // superficie su cui mostrare un output
    QPlainTextEdit *console;
};

#endif // VERSIONFILEPARSER_H
