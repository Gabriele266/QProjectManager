#ifndef NEWPROJECTWIN_H
#define NEWPROJECTWIN_H

#include <QDialog>
#include "project.h"
#include "version.h"
#include <QFileDialog>
#include "utils.cpp"
#include "objectinfo.h"

namespace Ui {
class NewProjectWin;
}

class NewProjectWin : public QDialog
{
    Q_OBJECT

public:
    explicit NewProjectWin(QWidget *parent = nullptr);
    ~NewProjectWin();

    Project* getProject();
private slots:
    void on_buttonBox_accepted();

    void on_showFiles_clicked();

private:
    Ui::NewProjectWin *ui;
    // rappresenta il progetto
    Project *proj;
};

#endif // NEWPROJECTWIN_H
