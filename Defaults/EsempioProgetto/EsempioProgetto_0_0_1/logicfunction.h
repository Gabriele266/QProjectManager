#ifndef LOGICFUNCTION_H
#define LOGICFUNCTION_H

#include "logicobject.h"
#include <QString>
#include "logicclass.h"

/// Rappresenta una funzione logica in un codice
class LogicFunction : public LogicObject
{
public:
    LogicFunction();

    /// Definisce se la funzione è statica
    void setStatic(bool val);

    /// Definisce se la funzione è virtuale
    void setVirtual(bool val);

    /// Imposta il tipo restituito
    void setReturnType(QString type);

    /// Imposta lo scope della classe
    void setScope(LogicClassScope scope);

    /// Imposta gli argomenti
    void setArguments(QString arguments);

    /// Restituisce una stringa con la funzione formattata a dovere
    QString getFormatted();

private:
    // argomenti della funzione
    QString arguments;

    // scope della funzione
    LogicClassScope scope;

    // determina se è statica o no
    bool is_static = false;

    // determina se è virtuale
    bool is_virtual = false;

    // tipo di dato restituito
    QString return_type = "void";


};

#endif // LOGICFUNCTION_H
