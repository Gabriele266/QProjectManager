#include "newprojectwin.h"
#include "ui_newprojectwin.h"

NewProjectWin::NewProjectWin(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::NewProjectWin)
{
    ui->setupUi(this);

}

NewProjectWin::~NewProjectWin()
{
    delete ui;
}

void NewProjectWin::on_buttonBox_accepted()
{
    // creo il progetto
    proj = new Project(ui->projPathEdit->text(), ui->projNameEdit->text().replace(' ', '_'), ProjectType::Complete);
    QTextDocument* doc;
    doc = ui->descriptionEdit->document();
    // converto il testo in html e lo imposto
    proj->setDescription(doc->toHtml());
}

Project* NewProjectWin::getProject(){
    return proj;
}

void NewProjectWin::on_showFiles_clicked()
{
    // creo il dialogo
    QFileDialog *dial = new QFileDialog();
    dial->setFileMode(QFileDialog::DirectoryOnly);
    QString path;
    path = QFileDialog::getExistingDirectory(0, ("Select Output Folder"), QDir::currentPath());
    // correggo il percorso
    path = adjustPath(path);
    ui->projPathEdit->setText(path);
}

