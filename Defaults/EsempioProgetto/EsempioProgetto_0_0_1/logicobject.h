#ifndef LOGICOBJECT_H
#define LOGICOBJECT_H

#include <QString>
#include <QTreeWidgetItem>

/// Rappresenta un elemento logico di una versione
class LogicObject
{
public:
    LogicObject();

    /// Imposta la descrizione
    void setDescription(QString desc);

    /// Imposta il nome
    void setName(QString name);

    /// imposta il percorso based
    void setBasePath(QString base);

    /// Restituisce la descrizione
    QString getDescription();

    /// Restituisce il nome
    QString getName();

    /// Restituisce il percorso
    QString getBasePath();

    /// Funzione virtuale per la visualizzazione in un controllo della interfaccia
    virtual QTreeWidgetItem* formatForView(QTreeWidgetItem *parent = nullptr);

private:
    // descrizione dell' oggetto
    QString description;

    // nome dell' oggetto
    QString name;

    // percorso base
    QString base_path;
};

#endif // LOGICOBJECT_H
