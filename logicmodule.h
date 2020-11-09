#ifndef LOGICMODULE_H
#define LOGICMODULE_H

#include "logicobject.h"

#include <QString>
#include <QFile>
#include <QTextStream>
#include <QTreeWidgetItem>
#include <QMessageBox>
#include <QDir>
#include <QDateTime>

/// Rappresenta un modulo logico
class LogicModule : public LogicObject
{
public:
    LogicModule();

    /// Crea il modulo sul disco
    void createOnDisk();

    /// Formatta per la visualizzazione
    QTreeWidgetItem* formatForView(QTreeWidgetItem *parent = nullptr);
};

#endif // LOGICMODULE_H
