#ifndef OBJECTINFO_H
#define OBJECTINFO_H

#include <QString>
#include <QDateTime>
#include <QTime>
#include <QSysInfo>

/// Rappresenta il metodo usato per rappresentare le informazioni
enum ObjectTextEncoding{
    html,
    simple_text,
    rtf,
    xml
};

/// Contiene le informazioni di un oggetto
class ObjectInfo
{
public:
    ObjectInfo();

    /// Imposta la descrizione dell' oggetto
    void setDescription(QString description);

    /// Imposta il percorso per il salvataggio delle note. se il valore è "inside" verranno create dentro il file predefinito dell' oggetto
    void setNotesPath(QString path);

    /// Imposta il tipo di contenuto delle note
    void setNotesEncodingType(ObjectTextEncoding info);

    /// Imposta il percorso del file principale per le informazioni
    void setMainIndexPath(QString path);

    /// Imposta il tempo di creazione
    void setCreationTime(QDateTime time);

    /// Imposta il tempo di ultima modifica
    void setLastModifyTime(QDateTime time);

    /// Imposta l'autore del progetto
    void setAuthor(QString author);

    /// Imposta la compagnia
    void setCompany(QString val);

    /// Restituisce la descrizione
    QString getDescription();

    /// Restituisce il percorso delle note
    QString getNotesPath();

    ObjectTextEncoding getNotesEncoding();

    QString getMainIndexPath();

    QDateTime getCreationTime();

    QDateTime getLastModifyTime();

    QString getAuthor();

    QString getCompany();

    QSysInfo getSystemInfo();
private:
    // descrizione dell' oggetto
    QString description;

    // percorso del file di note
    QString notes_path;

    // Rappresenta come le note sono codificate
    ObjectTextEncoding notes_encoding;

    // indica il percorso della pagina principale dell' oggetto
    QString main_index_path;

    // contiene la data di creazione
    QDateTime creation_time;

    // tempo della ultima modifica
    QDateTime last_modify_time;

    // autore del progetto
    QString author;

    // compagnia di progetto
    QString company;

    // informazioni sul sistema operativo
    QSysInfo platform_info;


};

#endif // OBJECTINFO_H
