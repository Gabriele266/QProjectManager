#ifndef NOTESEDIT_H
#define NOTESEDIT_H

#include <QMainWindow>
#include "version.h"
#include <QLabel>


namespace Ui {
class NotesEdit;
}

class NotesEdit : public QMainWindow
{
    Q_OBJECT

public:
    explicit NotesEdit(Version *version, QWidget *parent = nullptr);
    ~NotesEdit();

    /// Imposta la versione da gestire
    void setVersion(Version *ver);

private:
    Ui::NotesEdit *ui;

    // Puntatore alla versione da gestire
    Version *version;

    // Indica la tipologia di contenuto
    bool html_encode = true;


    // Etichetta per il percorso di salvataggio delle note
    QLabel *notesSavePath;

    // Etichetta per il nome della versione
    QLabel *versionName;

    // Etichetta per il tipo di codifica
    QLabel *encodeType;

    // Etichetta per il nome del progetto
    QLabel *projectName;
};

#endif // NOTESEDIT_H
