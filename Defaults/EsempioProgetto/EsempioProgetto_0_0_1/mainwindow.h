#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QtCore>
#include "newprojectwin.h"
#include "project.h"
#include "version.h"
#include <QFileSystemModel>
#include <QTreeView>
#include <QTreeWidgetItem>
#include <QGraphicsAnchorLayout>
#include "masterversionwin.h"
#include "newversionwin.h"
#include "versionfileparser.h"
#include "files_functions.cpp"
#include "logicclass.h"
#include "newclasswin.h"
#include "logicclassparser.h"
#include "logicobjectparser.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    /// Carica un progetto nell' ambiente (current_project)
    void loadProject();

    /// Mostra delle informazioni sulla console del programma
    void showConsoleInfo(QString info);
    // Mostra degli errori sulla console
    void showConsoleError(QString error);
    /// Mostra un warning sulla console
    void showConsoleWarning(QString text);

private slots:
    void on_actionNuovo_triggered();

    void on_actionVersione_master_triggered();

    void on_actionAggiungi_versione_triggered();

    void on_openInExplorerBtn_clicked();


    void on_actionStruttura_file_in_explorer_triggered();

    void on_actionConsole_di_sistema_triggered();

    void on_openInTerminalBtn_clicked();

    void on_logicStrTree_currentItemChanged(QTreeWidgetItem *current, QTreeWidgetItem *previous);

    void on_pushButton_clicked();

    void on_openFileBtn_clicked();

    void on_pushButton_3_clicked();

    void on_actionRimuovi_versione_triggered();

    void on_actionApri_versione_master_triggered();

    void on_newVersionBtn_clicked();

    void on_deleteObjectBtn_clicked();

    void on_actionSalva_triggered();

    void on_addClassBtn_clicked();

private:
    Ui::MainWindow *ui;

    /// Aggiunge un nodo root alla treeview
    QTreeWidgetItem* addRootItem(QString name, QString description, QTreeWidget *widget);
    /// Aggiunge un nodo alla treeview
    QTreeWidgetItem* addItem(QTreeWidgetItem *parent, QString name, QString description, QTreeWidget *widget);

    Project *current_project;
    QGraphicsAnchorLayout *lay;
    QFileSystemModel *model;

    /// Apre il progetto corrente nell' explorer
    void openProjectInExplorer();

    /// Apre la versione master nell' explorer
    void openMasterInExplorer();

    /// Apre una versione nell' explorer
    void openVersionInExplorer(unsigned int num);

    /// Apre una nuova finestra del prompt cmd
    void openCmdPrompt();

    /// Apre il terminale in un percorso preciso
    void openCmdPrompt(QString path);

    /// Controlla se il progetto esiste e se non lo è manda una messagebox
    bool existsProject(QString why);


};
#endif // MAINWINDOW_H
