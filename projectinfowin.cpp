#include "projectinfowin.h"
#include "ui_projectinfowin.h"

ProjectInfoWin::ProjectInfoWin(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ProjectInfoWin)
{
    ui->setupUi(this);
}

ProjectInfoWin::~ProjectInfoWin()
{
    delete ui;
}
