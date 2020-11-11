#ifndef PROJECT_H
#define PROJECT_H

#include <QString>
#include <QtCore>
#include <QTime>
#include <QTextStream>
#include <QDateTime>
#include <QtXml>

#include "version.h"
#include "objectinfo.h"
#include "utils.cpp"
#include "flags.cpp"

/// Rappresenta il tipo di progetto
enum ProjectType{
    Library,
    Module,
    Complete
};

/// Rappresenta un progetto nell' ambiente
class Project : public ObjectInfo
{
public:
    Project();
    Project(QString path, QString name, ProjectType type, bool create_info_file = true);

    /// Imposta il nome del progetto
    void setName(QString n);

    /// Imposta il percorso del progetto
    void setPath(QString pt);

    /// Imposta il tipo di progetto
    void setType(ProjectType ty);

    /// Determina se creare un file di informazioni
    void setInfoFile(bool info_file);

    /// Effettua il salvataggio del progetto
    void save();

    /// Crea il progetto
    bool create();

    /// Carica un progetto dal file sistem
    static Project* loadFromDisk(QString file_path);

    /// Restituisce il nome del progetto
    QString getName();

    /// Restituisce il percorso in cui è creato il progetto
    QString getPath();

    /// Restituisce il percorso del file di progetto
    QString getFilePath();

    /// Restituisce il percorso in cui vengono create le versioni, dove vengono scritte le informazioni del progetto etc.
    QString getHomePath();

    /// Determina se il progetto è stato salvato
    bool isSaved();

    /// Aggiunge una versione al progetto
    bool addVersion(Version *ver);

    /// Aggiunge una versione al progetto all' indice specificato da indexIn
    bool addVersion(Version *ver, unsigned int indexIn);

    /// Imposta la versione master da cui copiare
    bool setMasterVersion(Version *ver);

    /// Rimuove la versione senza cancellarla dalla memoria
    bool removeVersion(unsigned int index);

    /// Rimuove la prima versione con l'id associato
    bool removeVersion(QString id);

    /// Cancella una versione dal disco, dalla memoria ed esegue il flush delle versioni rimanenti
    bool deleteVersion(unsigned int index);

    /// Restituisce la versione
    Version* getVersion(unsigned int index);

    /// Restituisce la versione che ha quell' id
    Version *getVersion(QString id);

    /// Restituisce l'indice della prima versione con quell' id
    unsigned int getVersionIndex(QString id);

    /// Restituisce il numero di versioni nel progetto
    int getVersionCount();

    /// Restituisce la versione principale
    Version* getMasterVersion();

    /// Determina se nel progetto è presente una versione master
    bool hasMaster();

    /// Determina se esiste già una versione con quel numero
    bool existsVersion(QString numericId);

    /// Determina se esiste una versione con quell' indice
    bool existsVersion(unsigned int number);

    /// Restituisce l'ultima versione del progetto
    Version* getLastVersion();

    /// Cancella tutte le versioni impostandone tutti i puntatori a nullptr
    void clearAll(bool fromDisk = false);

private:
    // versioni contenute
    Version *subVersions[100];
    // versione master
    Version *masterVersion = nullptr;
    // Progetti contenuti
    //SubProject *subProjects;

    // nome del progetto
    QString name;

    // percorso del progetto
    QString path;

    // Percorso in cui si trovano le versioni e il file di progetto
    QString home_path;

    // tipo di progetto
    ProjectType type;

    // Definisce se il progetto è stato salvato
    bool saved = false;

    // numero di versioni create all' interno
    unsigned int versions_num = 0;

    /// Crea il file di progetto
    bool createProjectFile();

    /// Crea la cartella di progetto
    bool createProjectFolder();

    /// Crea il file di annotazioni
    bool createProjectAnnotations();

    /// Cerca e imposta le informazioni del progetto a partire da un nome di parametro e un valore
    bool searchProjectProperty(QString current_line);

    /// Cerca e imposta le informazioni delle annotazioni a partire da un nome di parametro e un valore
    bool searchAnnotationProperty(QString current_line);

    // determina se il progetto ha un file di informazioni
    bool infoFile;
};

#endif // PROJECT_H
