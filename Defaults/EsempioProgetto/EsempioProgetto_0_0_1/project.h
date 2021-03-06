#ifndef PROJECT_H
#define PROJECT_H

#include <QString>
#include <QtCore>
#include <QTime>
#include <QTextStream>
#include <QDateTime>

#include "version.h"
#include "objectinfo.h"

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
    void setProjType(ProjectType ty);

    /// Determina se creare un file di informazioni
    void setInfoFile(bool info_file);

    /// Effettua il salvataggio del progetto
    void save();

    /// Crea il progetto
    bool create();

    /// Restituisce il nome del progetto
    QString getName();

    /// Restituisce il percorso del progetto
    QString getPath();

    /// Restituisce il percorso in cui si trovano i file di progetto
    QString getProjFilePath();

    /// Determina se il progetto è stato salvato
    bool isSaved();

    /// Aggiunge una versione al progetto
    bool addVersion(Version *ver);
    /// Aggiunge una versione al progetto all' indice specificato da indexIn
    bool addVersion(Version *ver, unsigned int indexIn);
    /// Imposta la versione master da cui copiare
    bool setMasterVersion(Version *ver);

    /// Rimuove la versione
    bool removeVersion(unsigned int index);

    /// Restituisce la versione
    Version* getVersion(unsigned int index);

    /// Restituisce la versione che ha quell' id
    Version *getVersion(QString id);

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
    Version *masterVersion;
    // Progetti contenuti
    //SubProject *subProjects;

    // nome del progetto
    QString name;

    // percorso del progetto
    QString path;

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

    // determina se il progetto ha un file di informazioni
    bool infoFile;
};

#endif // PROJECT_H
