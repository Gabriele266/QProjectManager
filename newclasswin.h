#ifndef NEWCLASSWIN_H
#define NEWCLASSWIN_H

#include <QDialog>
#include "logicclass.h"
#include "project.h"

namespace Ui {
class NewClassWin;
}

class NewClassWin : public QDialog
{
    Q_OBJECT

public:
    explicit NewClassWin(Project *proj, QWidget *parent = nullptr);
    ~NewClassWin();

    /// Restituisce il risultato
    LogicClass* getResult();
private slots:
    void on_buttonBox_accepted();

    void on_checkBox_2_stateChanged(int arg1);

    void on_versionAddTo_currentIndexChanged(const QString &arg1);

    void on_generateConstr_stateChanged(int arg1);

    void on_infoUse_stateChanged(int arg1);

    void on_checkBox_stateChanged(int arg1);

private:
    Ui::NewClassWin *ui;
    // progetto corrente
    Project *current_project;
    // risultato delle operazioni
    LogicClass *result;
};

#endif // NEWCLASSWIN_H
