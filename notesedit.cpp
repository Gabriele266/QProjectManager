#include "notesedit.h"
#include "ui_notesedit.h"

NotesEdit::NotesEdit(Version *v, QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::NotesEdit)
{
    ui->setupUi(this);

    // Imposto la versione
    version = v;

    // Controllo se è già stato creato un percorso per le annotazioni

    // Carico le informazioni
    // Creo i widget
    versionName = new QLabel();
    notesSavePath = new QLabel();
    projectName = new QLabel();

    // Imposto il testo
    versionName->setText(version->getName());
    notesSavePath->setText(version->getNotesPath());
    projectName->setText(version->getProjectName());

    // Imposto gli identificatori
    versionName->setObjectName("windowStatusLabel");
    notesSavePath->setObjectName("windowStatusLabel");
    projectName->setObjectName("windowStatusLabel");

    // Aggiungo i controlli
    ui->statusbar->addPermanentWidget(versionName);
    ui->statusbar->addPermanentWidget(new QLabel());
    ui->statusbar->addPermanentWidget(notesSavePath);
    ui->statusbar->addPermanentWidget(new QLabel());
    ui->statusbar->addPermanentWidget(projectName);

    // Imposto il titolo della finestra
    setWindowTitle("Modifica note per la versione " + version->getNumericId());

}

NotesEdit::~NotesEdit()
{
    delete ui;
}
