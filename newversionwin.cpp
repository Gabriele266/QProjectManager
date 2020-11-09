#include "newversionwin.h"
#include "ui_newversionwin.h"

NewVersionWin::NewVersionWin(Project *proj, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::NewVersionWin)
{
    ui->setupUi(this);
    project = proj;
    // imposto il titolo
    setWindowTitle("Creazione nuova versione");
    if(project != nullptr){
        // scrivo il nome del progetto
        ui->projName->setText(proj->getName());
        // controllo se esiste esiste una versione precedente
        if(project->getVersionCount() >= 1){
            // calcolo il nuovo numero di valore revision in base a quella precedente
            ui->revision->setValue(project->getLastVersion()->getRevision() + 1);
            // copio gli altri
            ui->sub->setValue(project->getLastVersion()->getSubVersion());
            ui->major->setValue(project->getLastVersion()->getMajorVersion());
        }
        else{
            ui->revision->setValue(1);
        }
    }
    else{
        // mostro un errore
        QMessageBox *message = new QMessageBox();
        message->setText("Errore: impossibile aggiungere una versione ad un progetto nullo.");
        message->setIcon(QMessageBox::Critical);
        message->exec();
    }
}

NewVersionWin::~NewVersionWin()
{
    delete ui;
}

void NewVersionWin::on_pushButton_2_clicked()
{
    // controllo quale elemento è selezionato nella combobox
    // testo da aggiungere come elemento della lista
    QString text;
    // controllo l'elemento
    text = ui->flagChose->currentText();
    ui->flagsList->addItem(text);
}

void NewVersionWin::on_pushButton_3_clicked()
{
    // cancello l'elemento corrente
    qDeleteAll(ui->flagsList->selectedItems());
}

void NewVersionWin::on_buttonBox_accepted()
{
    qInfo() << "Accetto";

    // creo la versione
    // numero di flag
    int flags_num = ui->flagsList->count();
    // rappresenta il fine riga
    char endl = '\n';
    // array dei flag
    VersionNameFlag flags[10];

    qInfo() << " numero flag da controllare: " << flags_num << endl;

    // scorro i flag e li controllo
    for(int x = 0; x < flags_num; x++){
        qInfo() << "giro controllo " << x << endl;
        flags[x] = getFromText(ui->flagsList->item(x)->text());
    }
    // imposto le posizioni nulle
    for(int y = flags_num; y < 10; y++){
        flags[y] = VersionNameFlag::NullFlag;
    }
    qInfo() << "blocco 1" << endl;
    // creo la versone
    version = new Version(ui->major->value(), ui->sub->value(), ui->revision->value(), project->getPath(), ui->versionName->text(), project->getName());
    version->setCreationPath(project->getPath());
    qInfo() << "blocco 2" << endl;
    version->setFinalNameCrFlags(flags);
    qInfo() << "Creata versione: " << version->getName();
    qInfo() << "Percorso per il progetto: " << project->getPath();
    qInfo() << "Id numerico: " << version->getNumericId();
    qInfo() << "Percorso di creazione: " << version->getCreationPath();
    qInfo() << "Nome progetto: " << project->getName();
    qInfo() << "";

    if(ui->fromWho->currentText() == "Versione master"){
        from_master = true;
    }
    else{
        from_master = false;
    }
}

bool NewVersionWin::fromMaster(){
    return from_master;
}

Version* NewVersionWin::getVersion(){
    return version;
}

void NewVersionWin::on_resetNumberBtn_clicked()
{
    ui->revision->setValue(0);
}
