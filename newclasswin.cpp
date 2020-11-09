#include "newclasswin.h"
#include "ui_newclasswin.h"

NewClassWin::NewClassWin(Project *proj, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::NewClassWin)
{
    ui->setupUi(this);
    current_project = proj;

    // carico il nome del progetto
    ui->projectName->setText(current_project->getName());

    // imposto  il titolo
    setWindowTitle("Project manager - creazione nuova classe");

    // carico la lista delle versioni
    for(int x = 0; x < current_project->getVersionCount(); x++){
        ui->versionAddTo->addItem(current_project->getVersion(x)->getNumericId());
    }
}

NewClassWin::~NewClassWin()
{
    delete ui;
}

void NewClassWin::on_buttonBox_accepted()
{
    if(ui->className->text() != "" && ui->creationPathEdit->text() != ""){
        result = new LogicClass();
        result->setName(ui->className->text());
        result->setBasePath(ui->creationPathEdit->text());
        QTextDocument *doc = ui->descriptionEdit->document();
        result->setDescription(doc->toHtml());

        result->setCreateConstructor(ui->generateConstr->checkState());
        result->setCreateDestructor(ui->generateDestructor->checkState());

        if(ui->generateConstr->isEnabled()){
            result->setConstructorArguments(ui->constructorArgs->text());
            result->setConstructorInherits(ui->constructorInhe->text());
        }

        // ereditarietà
        if(ui->inheritGroup->isEnabled()){
            result->addInheritingClass(ui->inClassName->text(), ui->inClassInclude->text(), LogicClass::getFromString(ui->inScope->currentText()));
        }

        // creo sul disco
        result->createOnDisk();
    }
    else{
        QMessageBox *msg = new QMessageBox();
        msg->setText("Errore creazione classe. Non sono stati specificati i parametri necessari");
        msg->setIcon(QMessageBox::Critical);
        msg->exec();
    }
}

LogicClass* NewClassWin::getResult(){
    return result;
}

void NewClassWin::on_checkBox_2_stateChanged(int arg1)
{
    if(arg1 == 0){

    }
}

void NewClassWin::on_versionAddTo_currentIndexChanged(const QString &arg1)
{
    ui->creationPathEdit->setText(current_project->getVersion(arg1)->getCreationPath());
}

void NewClassWin::on_generateConstr_stateChanged(int arg1)
{
    if(arg1 == 0){
        ui->constructorGroup->setEnabled(false);
    }
    else{
        ui->constructorGroup->setEnabled(true);
    }
}

void NewClassWin::on_infoUse_stateChanged(int arg1)
{
    if(arg1 == 0){
        ui->infoGroup->setEnabled(false);
    }
    else{
        ui->infoGroup->setEnabled(true);
    }
}

void NewClassWin::on_checkBox_stateChanged(int arg1)
{
    if(arg1 == 0){
        ui->inheritGroup->setEnabled(false);
    }
    else{
        ui->inheritGroup->setEnabled(true);
    }
}
