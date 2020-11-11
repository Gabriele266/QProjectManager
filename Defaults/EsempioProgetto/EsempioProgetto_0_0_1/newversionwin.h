#ifndef NEWVERSIONWIN_H
#define NEWVERSIONWIN_H

#include <QDialog>
#include "project.h"
#include "version.h"
#include "utils.cpp"
#include <QDebug>

namespace Ui {
class NewVersionWin;
}

class NewVersionWin : public QDialog
{
    Q_OBJECT

public:
    explicit NewVersionWin(Project *proj, QWidget *parent = nullptr);
    ~NewVersionWin();

    /// Restituisce la versione creata
    Version* getVersion();

    /// Determina se la versione eredita master
    bool fromMaster();

private slots:
    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_buttonBox_accepted();

    void on_resetNumberBtn_clicked();

private:
    Ui::NewVersionWin *ui;

    // Progetto a cui aggiungere
    Project *project;
    // versione creata
    Version *version;

    bool from_master = false;
};

#endif // NEWVERSIONWIN_H
