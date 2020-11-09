#include "masterversionwin.h"
#include "ui_masterversionwin.h"

MasterVersionWin::MasterVersionWin(Project *pro, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::MasterVersionWin)
{
    ui->setupUi(this);
    project = pro;

    // controllo se esiste già una versione master
    if(project->hasMaster()){
        ui->masterRec->show();
    }
    else{
        ui->masterRec->hide();
        // imposto il titolo della finestra
        setWindowTitle("Project manager - " + project->getName());
        // carico il titolo nella textbox adatta
        ui->projName->setText(project->getName());
    }
}

MasterVersionWin::~MasterVersionWin()
{
    delete ui;
}

void MasterVersionWin::on_buttonBox_accepted()
{
    // controllo i parametri
    if(ui->versionName->text() != ""){
        // creo la versione
        version = new Version(ui->major->value(), ui->sub->value(), ui->revision->value(), ui->sourcesPath->text(), ui->versionName->text());
        version->setProjectName(project->getName());
        version->setMaster(true);
    }
    else{
        QMessageBox *msg = new QMessageBox();
        msg->setText("Errore: non tutti i parametri sono stati impostati");
        msg->setIcon(QMessageBox::Critical);
        msg->exec();
    }
}

Version* MasterVersionWin::getVersion(){
    return version;
}

void MasterVersionWin::on_seeBtn_clicked()
{
    QFileDialog *dial = new QFileDialog();
    dial->setFileMode(QFileDialog::DirectoryOnly);
    QString path = QFileDialog::getExistingDirectory(0, ("Select Output Folder"), QDir::currentPath());
    path = adjustPath(path);
    ui->sourcesPath->setText(path);
}
