#ifndef MASTERVERSIONWIN_H
#define MASTERVERSIONWIN_H

#include <QDialog>
#include "version.h"
#include "project.h"
#include <QFileDialog>
#include "utils.cpp"

namespace Ui {
class MasterVersionWin;
}

class MasterVersionWin : public QDialog
{
    Q_OBJECT

public:
    explicit MasterVersionWin(Project *pro , QWidget *parent = nullptr);
    ~MasterVersionWin();

    /// Restituisce la versione creata
    Version* getVersion();

private slots:
    void on_buttonBox_accepted();

    void on_seeBtn_clicked();

private:
    Ui::MasterVersionWin *ui;
    // versione che verrà creata
    Version *version;
    // progetto
    Project *project;
};

#endif // MASTERVERSIONWIN_H
