#ifndef LOGICCLASS_H
#define LOGICCLASS_H

#include "logicobject.h"
#include <QFile>
#include <QTextStream>
#include <QDir>
#include <QDateTime>
#include <QMessageBox>
#include <QTreeWidgetItem>

enum LogicClassScope{
    Public,
    Private,
    Protected
};

/// Rappresenta una classe logica
class LogicClass : public LogicObject
{
public:
    LogicClass();

    /// Imposta il parent della classe
    void setParent(LogicObject *parent);

    /// Crea la classe dal disco
    void createOnDisk();

    /// formatta l'indicatore della classe
    QTreeWidgetItem* formatForView(QTreeWidgetItem *parent = nullptr);

    /// Aggiunge una classe da ereditare
    void addInheritingClass(QString className, QString classIncludePath, LogicClassScope scope);

    /// Imposta i parametri del costruttore
    void setConstructorArguments(QString args);

    /// Determina l'ereditarietà del costruttore
    void setConstructorInherits(QString inherit);

    /// Definisce se creare o no il costruttore
    void setCreateConstructor(bool val);

    /// Definisce se creare il costruttore
    void setCreateDestructor(bool val);

    /// Definisce se incapsulare gli scope
    void setEncapsulateScopes(bool publ, bool priv, bool protec);

    /// Definisce se scrivere le informazioni della classe
    void setWriteInfo(bool val);

    /// Aggiunge un costruttore
    /// Arguments: specifica gli argomenti
    void addConstructor(QString arguments);

    /// Converte una stringa in uno scope
    static LogicClassScope getFromString(QString v);

    static QString getFromScope(LogicClassScope scope);
private:
    // file header e di implementazione della classe
    QFile *files[2];

    // parente della classe
    LogicObject *parent;

    // determina se la macro di sola esecuzione deve essere tutta maiuscola
    bool once_macro_upper = true;

    // classi ereditate
    QStringList inherits;

    // percorso della classe da ereditare
    QStringList class_path;

    // contiene gli scope da cui ereditare
    LogicClassScope inheriting_scopes[10];

    // argomenti del costruttore
    QString constructor_arguments = "void";

    // codice per ereditare il costruttore
    QString constructor_inherits = "";

    // contiene l'insieme dei costruttori addizionali
    QStringList additional_constructors;

    // flag per l'incapsulamento
    bool incapsulate_public = true;
    bool incapsulate_private = true;
    bool incapsulate_protected = true;

    bool write_creation_info = true;
    bool create_constructor = true;
    bool create_destructor = true;

    unsigned int scopes = 0;
};

#endif // LOGICCLASS_H
