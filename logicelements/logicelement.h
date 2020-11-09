#ifndef LOGICELEMENT_H
#define LOGICELEMENT_H

#include <QString>

/// Rappresenta un elemento logico
class LOGICELEMENTS_EXPORT LogicElement
{
public:
    LogicElement();

private:
    // nome dell' elemento
    QString name;

    // descrizione
    QString description;
};

#endif // LOGICELEMENT_H
