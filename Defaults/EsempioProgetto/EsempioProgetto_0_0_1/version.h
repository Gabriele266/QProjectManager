#ifndef VERSION_H
#define VERSION_H

#include <QtCore>
#include <QString>
#include <QTime>
#include <QFile>
#include <QMessageBox>
#include <iostream>
#include <QDebug>
#include <QDateTime>

#include "objectinfo.h"

// rappresenta un valore per indicare che non è stato definito un branch
#define BRANCH_UNDEFINED -25

using namespace std;

/// Rappresenta un flag per la creazione del nome della versione
enum VersionNameFlag{
    // aggiunge il nome del progetto
    PutProjectName,
    // aggiunge la revisione
    PutRevision,
    // aggiunge il nome della versione
    PutVersionName,
    // aggiunge il branch principale
    PutMajorBranch,
    // aggiunge il sub branch
    PutSubBranch,
    // aggiunge un separatore (_)
    PutSeparator,
    // aggiunge il tag master
    PutMasterInd,
    // termina la creazione del nome della versione
    EndVersionName
};

/// Rappresenta una versione nel progetto
class Version : public ObjectInfo
{
public:
    Version();
    Version(unsigned int m, unsigned int s, unsigned int r, QString path, QString name = "new version", QString projName = "new project");

    /// Crea la versione sul disco dato un insieme di flag terminante con EndVersionName e una versione da copiare
    bool createOnDisk(Version *source);

    /// Imposta il nome del progetto
    void setProjectName(QString name);

    /// IMposta il percorso di creazione della versione
    void setCreationPath(QString path);

    /// Imposta il nome della versione
    void setVersionName(QString name);

    /// Restituisce il percorso della versione
    QString formatNamePath(VersionNameFlag flags[10]);

    /// Imposta i flag di creazione del nome
    void setFinalNameCrFlags(VersionNameFlag flags[10]);

    /// Restituisce il percorso in cui è stata creata la versione
    QString getCreationPath();

    /// Restituisce il nome della versione
    QString getName();

    /// Restituisce l'identificatore numerico della versione
    QString getNumericId();

    /// Definisce se la versione è master o no
    void setMaster(bool val);

    /// Restituisce una stringa con le informazioni della versione in formato leggibile
    QString toString();

    /// Restituisce il numero di revisione della versione
    unsigned int getRevision();

    /// Restituisce il numero sottoversione
    unsigned int getSubVersion();

    /// Restituisce il numero versione maggiore
    unsigned int getMajorVersion();

    /// Cancella la versione dal disco
    bool deleteFromDisk();

private:
    // contiene il nome della versione
    QString complete_name;

    // contiene il percorso relativo (senza nome) della versione
    QString relative_path;

    // nome del progetto di cui fa parte
    QString project_name;

    // nome della versione
    QString version_name;

    // flag per la creazione del nome della versione
    VersionNameFlag name_flags[10];

    // percorso di creazione della versione sul disco
    QString complete_path;

    // numeri della versione
    int major_branch;
    int sub_branch;
    int revision_num;

    // determina se questa versione è un master
    bool isMasterBranch = false;

    void throwError(QString text);
};

#endif // VERSION_H
