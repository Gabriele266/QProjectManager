/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QTreeView>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionNuovo;
    QAction *actionNuovo_file;
    QAction *actionNuovo_modulo;
    QAction *actionNuova_libreria;
    QAction *actionAggiungi_versione;
    QAction *actionControlla_differenze;
    QAction *actionRimuovi_versione;
    QAction *actionModifica_versione;
    QAction *actionSalva;
    QAction *actionSalva_tutto;
    QAction *actionSalva_in_nuovo_progetto;
    QAction *actionApri_progetto;
    QAction *actionApri_progetto_da_codice_esistente;
    QAction *actionApri_file;
    QAction *actionChiudi;
    QAction *actionNuova_finestra;
    QAction *actionCerca_in_tutti_i_file;
    QAction *actionCerca_in_versione;
    QAction *actionCerca_file;
    QAction *actionCerca;
    QAction *actionCerca_definizione;
    QAction *actionCerca_classe;
    QAction *actionCerca_modulo;
    QAction *actionSostituisci_tutto;
    QAction *actionSostituisci_nella_versione;
    QAction *actionSostituisci_nel_file;
    QAction *actionSostituisci_classe;
    QAction *actionSostituisci_funzione;
    QAction *actionImporta_file;
    QAction *actionImporta_libreria;
    QAction *actionImporta_classe;
    QAction *actionImporta_modulo;
    QAction *actionEsporta_changelog;
    QAction *actionEsporta_versione;
    QAction *actionEsporta_tools;
    QAction *actionStruttura_file;
    QAction *actionStruttura_file_in_finestra_separata;
    QAction *actionStruttura_file_in_explorer;
    QAction *actionStruttura_logica;
    QAction *actionStruttura_logica_in_finestra_separata;
    QAction *actionConsole_di_sistema;
    QAction *actionVersione_master;
    QAction *actionEsporta;
    QAction *actionInformazioni;
    QAction *actionImporta;
    QAction *actionEsporta_informazioni;
    QAction *actionInformazioni_versione_master;
    QAction *actionApri_versione_master;
    QAction *actionInformazioni_versione;
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QTabWidget *tabWidget;
    QWidget *tab;
    QVBoxLayout *verticalLayout_3;
    QTreeView *projectView;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *openExplorerBtn;
    QPushButton *openTerminalBtn;
    QPushButton *addElementBtn;
    QWidget *tab_2;
    QVBoxLayout *verticalLayout_5;
    QVBoxLayout *verticalLayout_4;
    QTreeWidget *logicStrTree;
    QGridLayout *gridLayout;
    QPushButton *curObjInfoBtn;
    QPushButton *openInExplorerBtn;
    QPushButton *openInTerminalBtn;
    QPushButton *newVersionBtn;
    QPushButton *deleteObjectBtn;
    QPushButton *editObjectBtn;
    QTabWidget *tabWidget_2;
    QWidget *tab_3;
    QVBoxLayout *verticalLayout_6;
    QListWidget *objectsView;
    QGridLayout *gridLayout_3;
    QSpacerItem *horizontalSpacer_2;
    QLabel *filesNum;
    QPushButton *pushButton;
    QPushButton *openFileBtn;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton_3;
    QWidget *tab_4;
    QVBoxLayout *verticalLayout_7;
    QTreeWidget *versionLogicView;
    QGridLayout *gridLayout_2;
    QPushButton *addLibraryBtn;
    QSpacerItem *horizontalSpacer_4;
    QSpacerItem *horizontalSpacer_6;
    QPushButton *addClassBtn;
    QPushButton *addModuleBtn;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *addSourceBtn;
    QVBoxLayout *verticalLayout_9;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    QPlainTextEdit *console;
    QMenuBar *menubar;
    QMenu *menuFile;
    QMenu *menuVersioni;
    QMenu *menuStrumenti;
    QMenu *menuSostituzione;
    QMenu *menuStrumenti_2;
    QMenu *menuVisualizza;
    QMenu *menuProgetto;
    QStatusBar *statusbar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1266, 840);
        MainWindow->setMinimumSize(QSize(100, 200));
        QPalette palette;
        QBrush brush(QColor(0, 0, 0, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(255, 255, 255, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette.setBrush(QPalette::Active, QPalette::Light, brush1);
        palette.setBrush(QPalette::Active, QPalette::Midlight, brush1);
        QBrush brush2(QColor(127, 127, 127, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Dark, brush2);
        QBrush brush3(QColor(170, 170, 170, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Mid, brush3);
        palette.setBrush(QPalette::Active, QPalette::Text, brush);
        palette.setBrush(QPalette::Active, QPalette::BrightText, brush1);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette.setBrush(QPalette::Active, QPalette::Shadow, brush);
        palette.setBrush(QPalette::Active, QPalette::AlternateBase, brush1);
        QBrush brush4(QColor(255, 255, 220, 255));
        brush4.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::ToolTipBase, brush4);
        palette.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
        QBrush brush5(QColor(0, 0, 0, 128));
        brush5.setStyle(Qt::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Active, QPalette::PlaceholderText, brush5);
#endif
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Light, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Midlight, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Dark, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::Mid, brush3);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette.setBrush(QPalette::Inactive, QPalette::BrightText, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush4);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush5);
#endif
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Light, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Midlight, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Dark, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Mid, brush3);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::BrightText, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush5);
#endif
        MainWindow->setPalette(palette);
        actionNuovo = new QAction(MainWindow);
        actionNuovo->setObjectName(QString::fromUtf8("actionNuovo"));
        actionNuovo_file = new QAction(MainWindow);
        actionNuovo_file->setObjectName(QString::fromUtf8("actionNuovo_file"));
        actionNuovo_modulo = new QAction(MainWindow);
        actionNuovo_modulo->setObjectName(QString::fromUtf8("actionNuovo_modulo"));
        actionNuova_libreria = new QAction(MainWindow);
        actionNuova_libreria->setObjectName(QString::fromUtf8("actionNuova_libreria"));
        actionAggiungi_versione = new QAction(MainWindow);
        actionAggiungi_versione->setObjectName(QString::fromUtf8("actionAggiungi_versione"));
        actionControlla_differenze = new QAction(MainWindow);
        actionControlla_differenze->setObjectName(QString::fromUtf8("actionControlla_differenze"));
        actionRimuovi_versione = new QAction(MainWindow);
        actionRimuovi_versione->setObjectName(QString::fromUtf8("actionRimuovi_versione"));
        actionModifica_versione = new QAction(MainWindow);
        actionModifica_versione->setObjectName(QString::fromUtf8("actionModifica_versione"));
        actionSalva = new QAction(MainWindow);
        actionSalva->setObjectName(QString::fromUtf8("actionSalva"));
        actionSalva_tutto = new QAction(MainWindow);
        actionSalva_tutto->setObjectName(QString::fromUtf8("actionSalva_tutto"));
        actionSalva_in_nuovo_progetto = new QAction(MainWindow);
        actionSalva_in_nuovo_progetto->setObjectName(QString::fromUtf8("actionSalva_in_nuovo_progetto"));
        actionApri_progetto = new QAction(MainWindow);
        actionApri_progetto->setObjectName(QString::fromUtf8("actionApri_progetto"));
        actionApri_progetto_da_codice_esistente = new QAction(MainWindow);
        actionApri_progetto_da_codice_esistente->setObjectName(QString::fromUtf8("actionApri_progetto_da_codice_esistente"));
        actionApri_file = new QAction(MainWindow);
        actionApri_file->setObjectName(QString::fromUtf8("actionApri_file"));
        actionChiudi = new QAction(MainWindow);
        actionChiudi->setObjectName(QString::fromUtf8("actionChiudi"));
        actionNuova_finestra = new QAction(MainWindow);
        actionNuova_finestra->setObjectName(QString::fromUtf8("actionNuova_finestra"));
        actionCerca_in_tutti_i_file = new QAction(MainWindow);
        actionCerca_in_tutti_i_file->setObjectName(QString::fromUtf8("actionCerca_in_tutti_i_file"));
        actionCerca_in_versione = new QAction(MainWindow);
        actionCerca_in_versione->setObjectName(QString::fromUtf8("actionCerca_in_versione"));
        actionCerca_file = new QAction(MainWindow);
        actionCerca_file->setObjectName(QString::fromUtf8("actionCerca_file"));
        actionCerca = new QAction(MainWindow);
        actionCerca->setObjectName(QString::fromUtf8("actionCerca"));
        actionCerca_definizione = new QAction(MainWindow);
        actionCerca_definizione->setObjectName(QString::fromUtf8("actionCerca_definizione"));
        actionCerca_classe = new QAction(MainWindow);
        actionCerca_classe->setObjectName(QString::fromUtf8("actionCerca_classe"));
        actionCerca_modulo = new QAction(MainWindow);
        actionCerca_modulo->setObjectName(QString::fromUtf8("actionCerca_modulo"));
        actionSostituisci_tutto = new QAction(MainWindow);
        actionSostituisci_tutto->setObjectName(QString::fromUtf8("actionSostituisci_tutto"));
        actionSostituisci_nella_versione = new QAction(MainWindow);
        actionSostituisci_nella_versione->setObjectName(QString::fromUtf8("actionSostituisci_nella_versione"));
        actionSostituisci_nel_file = new QAction(MainWindow);
        actionSostituisci_nel_file->setObjectName(QString::fromUtf8("actionSostituisci_nel_file"));
        actionSostituisci_classe = new QAction(MainWindow);
        actionSostituisci_classe->setObjectName(QString::fromUtf8("actionSostituisci_classe"));
        actionSostituisci_funzione = new QAction(MainWindow);
        actionSostituisci_funzione->setObjectName(QString::fromUtf8("actionSostituisci_funzione"));
        actionImporta_file = new QAction(MainWindow);
        actionImporta_file->setObjectName(QString::fromUtf8("actionImporta_file"));
        actionImporta_libreria = new QAction(MainWindow);
        actionImporta_libreria->setObjectName(QString::fromUtf8("actionImporta_libreria"));
        actionImporta_classe = new QAction(MainWindow);
        actionImporta_classe->setObjectName(QString::fromUtf8("actionImporta_classe"));
        actionImporta_modulo = new QAction(MainWindow);
        actionImporta_modulo->setObjectName(QString::fromUtf8("actionImporta_modulo"));
        actionEsporta_changelog = new QAction(MainWindow);
        actionEsporta_changelog->setObjectName(QString::fromUtf8("actionEsporta_changelog"));
        actionEsporta_versione = new QAction(MainWindow);
        actionEsporta_versione->setObjectName(QString::fromUtf8("actionEsporta_versione"));
        actionEsporta_tools = new QAction(MainWindow);
        actionEsporta_tools->setObjectName(QString::fromUtf8("actionEsporta_tools"));
        actionStruttura_file = new QAction(MainWindow);
        actionStruttura_file->setObjectName(QString::fromUtf8("actionStruttura_file"));
        actionStruttura_file_in_finestra_separata = new QAction(MainWindow);
        actionStruttura_file_in_finestra_separata->setObjectName(QString::fromUtf8("actionStruttura_file_in_finestra_separata"));
        actionStruttura_file_in_explorer = new QAction(MainWindow);
        actionStruttura_file_in_explorer->setObjectName(QString::fromUtf8("actionStruttura_file_in_explorer"));
        actionStruttura_logica = new QAction(MainWindow);
        actionStruttura_logica->setObjectName(QString::fromUtf8("actionStruttura_logica"));
        actionStruttura_logica_in_finestra_separata = new QAction(MainWindow);
        actionStruttura_logica_in_finestra_separata->setObjectName(QString::fromUtf8("actionStruttura_logica_in_finestra_separata"));
        actionConsole_di_sistema = new QAction(MainWindow);
        actionConsole_di_sistema->setObjectName(QString::fromUtf8("actionConsole_di_sistema"));
        actionVersione_master = new QAction(MainWindow);
        actionVersione_master->setObjectName(QString::fromUtf8("actionVersione_master"));
        actionEsporta = new QAction(MainWindow);
        actionEsporta->setObjectName(QString::fromUtf8("actionEsporta"));
        actionInformazioni = new QAction(MainWindow);
        actionInformazioni->setObjectName(QString::fromUtf8("actionInformazioni"));
        actionImporta = new QAction(MainWindow);
        actionImporta->setObjectName(QString::fromUtf8("actionImporta"));
        actionEsporta_informazioni = new QAction(MainWindow);
        actionEsporta_informazioni->setObjectName(QString::fromUtf8("actionEsporta_informazioni"));
        actionInformazioni_versione_master = new QAction(MainWindow);
        actionInformazioni_versione_master->setObjectName(QString::fromUtf8("actionInformazioni_versione_master"));
        actionApri_versione_master = new QAction(MainWindow);
        actionApri_versione_master->setObjectName(QString::fromUtf8("actionApri_versione_master"));
        actionInformazioni_versione = new QAction(MainWindow);
        actionInformazioni_versione->setObjectName(QString::fromUtf8("actionInformazioni_versione"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        QPalette palette1;
        palette1.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette1.setBrush(QPalette::Active, QPalette::Light, brush1);
        palette1.setBrush(QPalette::Active, QPalette::Midlight, brush1);
        palette1.setBrush(QPalette::Active, QPalette::Dark, brush2);
        palette1.setBrush(QPalette::Active, QPalette::Mid, brush3);
        palette1.setBrush(QPalette::Active, QPalette::Text, brush);
        palette1.setBrush(QPalette::Active, QPalette::BrightText, brush1);
        palette1.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette1.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette1.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette1.setBrush(QPalette::Active, QPalette::Shadow, brush);
        palette1.setBrush(QPalette::Active, QPalette::AlternateBase, brush1);
        palette1.setBrush(QPalette::Active, QPalette::ToolTipBase, brush4);
        palette1.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::Active, QPalette::PlaceholderText, brush5);
#endif
        palette1.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::Light, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::Midlight, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::Dark, brush2);
        palette1.setBrush(QPalette::Inactive, QPalette::Mid, brush3);
        palette1.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::BrightText, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush4);
        palette1.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush5);
#endif
        palette1.setBrush(QPalette::Disabled, QPalette::WindowText, brush2);
        palette1.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::Light, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::Midlight, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::Dark, brush2);
        palette1.setBrush(QPalette::Disabled, QPalette::Mid, brush3);
        palette1.setBrush(QPalette::Disabled, QPalette::Text, brush2);
        palette1.setBrush(QPalette::Disabled, QPalette::BrightText, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::ButtonText, brush2);
        palette1.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush4);
        palette1.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush5);
#endif
        centralwidget->setPalette(palette1);
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setMaximumSize(QSize(500, 16777215));
        tabWidget->setTabsClosable(true);
        tabWidget->setMovable(true);
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        verticalLayout_3 = new QVBoxLayout(tab);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        projectView = new QTreeView(tab);
        projectView->setObjectName(QString::fromUtf8("projectView"));

        verticalLayout_3->addWidget(projectView);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        openExplorerBtn = new QPushButton(tab);
        openExplorerBtn->setObjectName(QString::fromUtf8("openExplorerBtn"));

        horizontalLayout_3->addWidget(openExplorerBtn);

        openTerminalBtn = new QPushButton(tab);
        openTerminalBtn->setObjectName(QString::fromUtf8("openTerminalBtn"));

        horizontalLayout_3->addWidget(openTerminalBtn);

        addElementBtn = new QPushButton(tab);
        addElementBtn->setObjectName(QString::fromUtf8("addElementBtn"));

        horizontalLayout_3->addWidget(addElementBtn);


        verticalLayout_3->addLayout(horizontalLayout_3);

        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        verticalLayout_5 = new QVBoxLayout(tab_2);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        logicStrTree = new QTreeWidget(tab_2);
        logicStrTree->setObjectName(QString::fromUtf8("logicStrTree"));
        logicStrTree->setColumnCount(2);

        verticalLayout_4->addWidget(logicStrTree);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        curObjInfoBtn = new QPushButton(tab_2);
        curObjInfoBtn->setObjectName(QString::fromUtf8("curObjInfoBtn"));

        gridLayout->addWidget(curObjInfoBtn, 0, 0, 1, 1);

        openInExplorerBtn = new QPushButton(tab_2);
        openInExplorerBtn->setObjectName(QString::fromUtf8("openInExplorerBtn"));

        gridLayout->addWidget(openInExplorerBtn, 0, 1, 1, 1);

        openInTerminalBtn = new QPushButton(tab_2);
        openInTerminalBtn->setObjectName(QString::fromUtf8("openInTerminalBtn"));

        gridLayout->addWidget(openInTerminalBtn, 0, 2, 1, 1);

        newVersionBtn = new QPushButton(tab_2);
        newVersionBtn->setObjectName(QString::fromUtf8("newVersionBtn"));

        gridLayout->addWidget(newVersionBtn, 0, 3, 1, 1);

        deleteObjectBtn = new QPushButton(tab_2);
        deleteObjectBtn->setObjectName(QString::fromUtf8("deleteObjectBtn"));

        gridLayout->addWidget(deleteObjectBtn, 0, 4, 1, 1);

        editObjectBtn = new QPushButton(tab_2);
        editObjectBtn->setObjectName(QString::fromUtf8("editObjectBtn"));

        gridLayout->addWidget(editObjectBtn, 0, 5, 1, 1);


        verticalLayout_4->addLayout(gridLayout);


        verticalLayout_5->addLayout(verticalLayout_4);

        tabWidget->addTab(tab_2, QString());

        horizontalLayout_2->addWidget(tabWidget);

        tabWidget_2 = new QTabWidget(centralwidget);
        tabWidget_2->setObjectName(QString::fromUtf8("tabWidget_2"));
        tab_3 = new QWidget();
        tab_3->setObjectName(QString::fromUtf8("tab_3"));
        verticalLayout_6 = new QVBoxLayout(tab_3);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        objectsView = new QListWidget(tab_3);
        objectsView->setObjectName(QString::fromUtf8("objectsView"));

        verticalLayout_6->addWidget(objectsView);

        gridLayout_3 = new QGridLayout();
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_2, 1, 3, 1, 1);

        filesNum = new QLabel(tab_3);
        filesNum->setObjectName(QString::fromUtf8("filesNum"));

        gridLayout_3->addWidget(filesNum, 1, 0, 1, 1);

        pushButton = new QPushButton(tab_3);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        gridLayout_3->addWidget(pushButton, 1, 2, 1, 1);

        openFileBtn = new QPushButton(tab_3);
        openFileBtn->setObjectName(QString::fromUtf8("openFileBtn"));

        gridLayout_3->addWidget(openFileBtn, 1, 4, 1, 1);

        horizontalSpacer = new QSpacerItem(30, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer, 1, 1, 1, 1);

        pushButton_3 = new QPushButton(tab_3);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));

        gridLayout_3->addWidget(pushButton_3, 1, 5, 1, 1);


        verticalLayout_6->addLayout(gridLayout_3);

        tabWidget_2->addTab(tab_3, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName(QString::fromUtf8("tab_4"));
        verticalLayout_7 = new QVBoxLayout(tab_4);
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        versionLogicView = new QTreeWidget(tab_4);
        versionLogicView->setObjectName(QString::fromUtf8("versionLogicView"));

        verticalLayout_7->addWidget(versionLogicView);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        addLibraryBtn = new QPushButton(tab_4);
        addLibraryBtn->setObjectName(QString::fromUtf8("addLibraryBtn"));

        gridLayout_2->addWidget(addLibraryBtn, 1, 0, 1, 1);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_4, 1, 1, 1, 1);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_6, 1, 5, 1, 1);

        addClassBtn = new QPushButton(tab_4);
        addClassBtn->setObjectName(QString::fromUtf8("addClassBtn"));

        gridLayout_2->addWidget(addClassBtn, 1, 2, 1, 1);

        addModuleBtn = new QPushButton(tab_4);
        addModuleBtn->setObjectName(QString::fromUtf8("addModuleBtn"));

        gridLayout_2->addWidget(addModuleBtn, 1, 4, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_3, 1, 3, 1, 1);

        addSourceBtn = new QPushButton(tab_4);
        addSourceBtn->setObjectName(QString::fromUtf8("addSourceBtn"));

        gridLayout_2->addWidget(addSourceBtn, 1, 6, 1, 1);


        verticalLayout_7->addLayout(gridLayout_2);

        tabWidget_2->addTab(tab_4, QString());

        horizontalLayout_2->addWidget(tabWidget_2);

        verticalLayout_9 = new QVBoxLayout();
        verticalLayout_9->setObjectName(QString::fromUtf8("verticalLayout_9"));

        horizontalLayout_2->addLayout(verticalLayout_9);


        verticalLayout->addLayout(horizontalLayout_2);

        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setMaximumSize(QSize(16777215, 203));
        QPalette palette2;
        palette2.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette2.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette2.setBrush(QPalette::Active, QPalette::Light, brush1);
        palette2.setBrush(QPalette::Active, QPalette::Midlight, brush1);
        palette2.setBrush(QPalette::Active, QPalette::Dark, brush2);
        palette2.setBrush(QPalette::Active, QPalette::Mid, brush3);
        palette2.setBrush(QPalette::Active, QPalette::Text, brush);
        palette2.setBrush(QPalette::Active, QPalette::BrightText, brush1);
        palette2.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette2.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette2.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette2.setBrush(QPalette::Active, QPalette::Shadow, brush);
        palette2.setBrush(QPalette::Active, QPalette::AlternateBase, brush1);
        palette2.setBrush(QPalette::Active, QPalette::ToolTipBase, brush4);
        palette2.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette2.setBrush(QPalette::Active, QPalette::PlaceholderText, brush5);
#endif
        palette2.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette2.setBrush(QPalette::Inactive, QPalette::Light, brush1);
        palette2.setBrush(QPalette::Inactive, QPalette::Midlight, brush1);
        palette2.setBrush(QPalette::Inactive, QPalette::Dark, brush2);
        palette2.setBrush(QPalette::Inactive, QPalette::Mid, brush3);
        palette2.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::BrightText, brush1);
        palette2.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette2.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette2.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush1);
        palette2.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush4);
        palette2.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette2.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush5);
#endif
        palette2.setBrush(QPalette::Disabled, QPalette::WindowText, brush2);
        palette2.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette2.setBrush(QPalette::Disabled, QPalette::Light, brush1);
        palette2.setBrush(QPalette::Disabled, QPalette::Midlight, brush1);
        palette2.setBrush(QPalette::Disabled, QPalette::Dark, brush2);
        palette2.setBrush(QPalette::Disabled, QPalette::Mid, brush3);
        palette2.setBrush(QPalette::Disabled, QPalette::Text, brush2);
        palette2.setBrush(QPalette::Disabled, QPalette::BrightText, brush1);
        palette2.setBrush(QPalette::Disabled, QPalette::ButtonText, brush2);
        palette2.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette2.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette2.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette2.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        palette2.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush4);
        palette2.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette2.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush5);
#endif
        groupBox->setPalette(palette2);
        verticalLayout_2 = new QVBoxLayout(groupBox);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        console = new QPlainTextEdit(groupBox);
        console->setObjectName(QString::fromUtf8("console"));
        console->setMaximumSize(QSize(16777215, 205));
        console->setReadOnly(true);

        horizontalLayout->addWidget(console);


        verticalLayout_2->addLayout(horizontalLayout);


        verticalLayout->addWidget(groupBox);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1266, 20));
        QPalette palette3;
        palette3.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette3.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette3.setBrush(QPalette::Active, QPalette::Light, brush1);
        palette3.setBrush(QPalette::Active, QPalette::Midlight, brush1);
        palette3.setBrush(QPalette::Active, QPalette::Dark, brush2);
        palette3.setBrush(QPalette::Active, QPalette::Mid, brush3);
        palette3.setBrush(QPalette::Active, QPalette::Text, brush);
        palette3.setBrush(QPalette::Active, QPalette::BrightText, brush1);
        palette3.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette3.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette3.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette3.setBrush(QPalette::Active, QPalette::Shadow, brush);
        palette3.setBrush(QPalette::Active, QPalette::AlternateBase, brush1);
        palette3.setBrush(QPalette::Active, QPalette::ToolTipBase, brush4);
        palette3.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette3.setBrush(QPalette::Active, QPalette::PlaceholderText, brush5);
#endif
        palette3.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette3.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette3.setBrush(QPalette::Inactive, QPalette::Light, brush1);
        palette3.setBrush(QPalette::Inactive, QPalette::Midlight, brush1);
        palette3.setBrush(QPalette::Inactive, QPalette::Dark, brush2);
        palette3.setBrush(QPalette::Inactive, QPalette::Mid, brush3);
        palette3.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette3.setBrush(QPalette::Inactive, QPalette::BrightText, brush1);
        palette3.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette3.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette3.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette3.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette3.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush1);
        palette3.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush4);
        palette3.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette3.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush5);
#endif
        palette3.setBrush(QPalette::Disabled, QPalette::WindowText, brush2);
        palette3.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette3.setBrush(QPalette::Disabled, QPalette::Light, brush1);
        palette3.setBrush(QPalette::Disabled, QPalette::Midlight, brush1);
        palette3.setBrush(QPalette::Disabled, QPalette::Dark, brush2);
        palette3.setBrush(QPalette::Disabled, QPalette::Mid, brush3);
        palette3.setBrush(QPalette::Disabled, QPalette::Text, brush2);
        palette3.setBrush(QPalette::Disabled, QPalette::BrightText, brush1);
        palette3.setBrush(QPalette::Disabled, QPalette::ButtonText, brush2);
        palette3.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette3.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette3.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette3.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        palette3.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush4);
        palette3.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette3.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush5);
#endif
        menubar->setPalette(palette3);
        menubar->setAutoFillBackground(true);
        menuFile = new QMenu(menubar);
        menuFile->setObjectName(QString::fromUtf8("menuFile"));
        QPalette palette4;
        palette4.setBrush(QPalette::Active, QPalette::HighlightedText, brush);
        palette4.setBrush(QPalette::Inactive, QPalette::HighlightedText, brush);
        palette4.setBrush(QPalette::Disabled, QPalette::HighlightedText, brush);
        menuFile->setPalette(palette4);
        menuVersioni = new QMenu(menubar);
        menuVersioni->setObjectName(QString::fromUtf8("menuVersioni"));
        menuStrumenti = new QMenu(menubar);
        menuStrumenti->setObjectName(QString::fromUtf8("menuStrumenti"));
        menuSostituzione = new QMenu(menubar);
        menuSostituzione->setObjectName(QString::fromUtf8("menuSostituzione"));
        menuStrumenti_2 = new QMenu(menubar);
        menuStrumenti_2->setObjectName(QString::fromUtf8("menuStrumenti_2"));
        menuVisualizza = new QMenu(menubar);
        menuVisualizza->setObjectName(QString::fromUtf8("menuVisualizza"));
        menuProgetto = new QMenu(menubar);
        menuProgetto->setObjectName(QString::fromUtf8("menuProgetto"));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);
        toolBar = new QToolBar(MainWindow);
        toolBar->setObjectName(QString::fromUtf8("toolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, toolBar);

        menubar->addAction(menuFile->menuAction());
        menubar->addAction(menuVersioni->menuAction());
        menubar->addAction(menuStrumenti->menuAction());
        menubar->addAction(menuSostituzione->menuAction());
        menubar->addAction(menuStrumenti_2->menuAction());
        menubar->addAction(menuVisualizza->menuAction());
        menubar->addAction(menuProgetto->menuAction());
        menuFile->addAction(actionNuovo);
        menuFile->addAction(actionNuovo_file);
        menuFile->addAction(actionNuovo_modulo);
        menuFile->addAction(actionNuova_libreria);
        menuFile->addSeparator();
        menuFile->addAction(actionSalva);
        menuFile->addAction(actionSalva_tutto);
        menuFile->addAction(actionSalva_in_nuovo_progetto);
        menuFile->addSeparator();
        menuFile->addAction(actionApri_progetto);
        menuFile->addAction(actionApri_progetto_da_codice_esistente);
        menuFile->addAction(actionApri_file);
        menuFile->addSeparator();
        menuFile->addAction(actionChiudi);
        menuFile->addAction(actionNuova_finestra);
        menuVersioni->addAction(actionAggiungi_versione);
        menuVersioni->addAction(actionRimuovi_versione);
        menuVersioni->addAction(actionControlla_differenze);
        menuVersioni->addSeparator();
        menuVersioni->addAction(actionModifica_versione);
        menuVersioni->addAction(actionInformazioni_versione);
        menuVersioni->addSeparator();
        menuVersioni->addAction(actionVersione_master);
        menuVersioni->addAction(actionInformazioni_versione_master);
        menuVersioni->addAction(actionApri_versione_master);
        menuVersioni->addSeparator();
        menuStrumenti->addAction(actionCerca_in_tutti_i_file);
        menuStrumenti->addAction(actionCerca_in_versione);
        menuStrumenti->addAction(actionCerca_file);
        menuStrumenti->addAction(actionCerca);
        menuStrumenti->addSeparator();
        menuStrumenti->addAction(actionCerca_definizione);
        menuStrumenti->addAction(actionCerca_classe);
        menuStrumenti->addAction(actionCerca_modulo);
        menuStrumenti->addSeparator();
        menuSostituzione->addAction(actionSostituisci_tutto);
        menuSostituzione->addAction(actionSostituisci_nella_versione);
        menuSostituzione->addAction(actionSostituisci_nel_file);
        menuSostituzione->addSeparator();
        menuSostituzione->addAction(actionSostituisci_classe);
        menuSostituzione->addAction(actionSostituisci_funzione);
        menuSostituzione->addSeparator();
        menuStrumenti_2->addAction(actionImporta_file);
        menuStrumenti_2->addAction(actionImporta_libreria);
        menuStrumenti_2->addAction(actionImporta_classe);
        menuStrumenti_2->addAction(actionImporta_modulo);
        menuStrumenti_2->addSeparator();
        menuStrumenti_2->addAction(actionEsporta_changelog);
        menuStrumenti_2->addAction(actionEsporta_versione);
        menuStrumenti_2->addAction(actionEsporta_tools);
        menuStrumenti_2->addSeparator();
        menuVisualizza->addAction(actionStruttura_file);
        menuVisualizza->addAction(actionStruttura_file_in_finestra_separata);
        menuVisualizza->addAction(actionStruttura_file_in_explorer);
        menuVisualizza->addSeparator();
        menuVisualizza->addAction(actionStruttura_logica);
        menuVisualizza->addAction(actionStruttura_logica_in_finestra_separata);
        menuVisualizza->addSeparator();
        menuVisualizza->addAction(actionConsole_di_sistema);
        menuProgetto->addAction(actionEsporta);
        menuProgetto->addAction(actionImporta);
        menuProgetto->addSeparator();
        menuProgetto->addAction(actionInformazioni);
        menuProgetto->addAction(actionEsporta_informazioni);
        toolBar->addAction(actionNuovo);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(1);
        tabWidget_2->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        actionNuovo->setText(QCoreApplication::translate("MainWindow", "Nuovo progetto", nullptr));
        actionNuovo_file->setText(QCoreApplication::translate("MainWindow", "Nuovo file", nullptr));
        actionNuovo_modulo->setText(QCoreApplication::translate("MainWindow", "Nuovo modulo", nullptr));
        actionNuova_libreria->setText(QCoreApplication::translate("MainWindow", "Nuova libreria", nullptr));
        actionAggiungi_versione->setText(QCoreApplication::translate("MainWindow", "Aggiungi versione", nullptr));
        actionControlla_differenze->setText(QCoreApplication::translate("MainWindow", "Controlla differenze", nullptr));
        actionRimuovi_versione->setText(QCoreApplication::translate("MainWindow", "Rimuovi versione", nullptr));
        actionModifica_versione->setText(QCoreApplication::translate("MainWindow", "Modifica versione", nullptr));
        actionSalva->setText(QCoreApplication::translate("MainWindow", "Salva", nullptr));
        actionSalva_tutto->setText(QCoreApplication::translate("MainWindow", "Salva tutto", nullptr));
        actionSalva_in_nuovo_progetto->setText(QCoreApplication::translate("MainWindow", "Salva in nuovo progetto", nullptr));
        actionApri_progetto->setText(QCoreApplication::translate("MainWindow", "Apri progetto", nullptr));
        actionApri_progetto_da_codice_esistente->setText(QCoreApplication::translate("MainWindow", "Apri progetto da codice esistente", nullptr));
        actionApri_file->setText(QCoreApplication::translate("MainWindow", "Apri file", nullptr));
        actionChiudi->setText(QCoreApplication::translate("MainWindow", "Chiudi", nullptr));
        actionNuova_finestra->setText(QCoreApplication::translate("MainWindow", "Nuova finestra", nullptr));
        actionCerca_in_tutti_i_file->setText(QCoreApplication::translate("MainWindow", "Cerca in tutti i file", nullptr));
        actionCerca_in_versione->setText(QCoreApplication::translate("MainWindow", "Cerca in versione", nullptr));
        actionCerca_file->setText(QCoreApplication::translate("MainWindow", "Cerca file", nullptr));
        actionCerca->setText(QCoreApplication::translate("MainWindow", "Cerca ...", nullptr));
        actionCerca_definizione->setText(QCoreApplication::translate("MainWindow", "Cerca definizione", nullptr));
        actionCerca_classe->setText(QCoreApplication::translate("MainWindow", "Cerca classe", nullptr));
        actionCerca_modulo->setText(QCoreApplication::translate("MainWindow", "Cerca modulo", nullptr));
        actionSostituisci_tutto->setText(QCoreApplication::translate("MainWindow", "Sostituisci tutto", nullptr));
        actionSostituisci_nella_versione->setText(QCoreApplication::translate("MainWindow", "Sostituisci nella versione", nullptr));
        actionSostituisci_nel_file->setText(QCoreApplication::translate("MainWindow", "Sostituisci nel file", nullptr));
        actionSostituisci_classe->setText(QCoreApplication::translate("MainWindow", "Sostituisci classe", nullptr));
        actionSostituisci_funzione->setText(QCoreApplication::translate("MainWindow", "Sostituisci funzione", nullptr));
        actionImporta_file->setText(QCoreApplication::translate("MainWindow", "Importa file", nullptr));
        actionImporta_libreria->setText(QCoreApplication::translate("MainWindow", "Importa libreria", nullptr));
        actionImporta_classe->setText(QCoreApplication::translate("MainWindow", "Importa classe", nullptr));
        actionImporta_modulo->setText(QCoreApplication::translate("MainWindow", "Importa modulo", nullptr));
        actionEsporta_changelog->setText(QCoreApplication::translate("MainWindow", "Esporta changelog", nullptr));
        actionEsporta_versione->setText(QCoreApplication::translate("MainWindow", "Esporta versione", nullptr));
        actionEsporta_tools->setText(QCoreApplication::translate("MainWindow", "Esporta tools", nullptr));
        actionStruttura_file->setText(QCoreApplication::translate("MainWindow", "Struttura file", nullptr));
        actionStruttura_file_in_finestra_separata->setText(QCoreApplication::translate("MainWindow", "Struttura file in finestra separata", nullptr));
        actionStruttura_file_in_explorer->setText(QCoreApplication::translate("MainWindow", "Struttura file in explorer", nullptr));
        actionStruttura_logica->setText(QCoreApplication::translate("MainWindow", "Struttura logica", nullptr));
        actionStruttura_logica_in_finestra_separata->setText(QCoreApplication::translate("MainWindow", "Struttura logica in finestra separata", nullptr));
        actionConsole_di_sistema->setText(QCoreApplication::translate("MainWindow", "Console di sistema", nullptr));
        actionVersione_master->setText(QCoreApplication::translate("MainWindow", "Versione master", nullptr));
        actionEsporta->setText(QCoreApplication::translate("MainWindow", "Esporta", nullptr));
        actionInformazioni->setText(QCoreApplication::translate("MainWindow", "Informazioni", nullptr));
        actionImporta->setText(QCoreApplication::translate("MainWindow", "Importa", nullptr));
        actionEsporta_informazioni->setText(QCoreApplication::translate("MainWindow", "Esporta informazioni", nullptr));
        actionInformazioni_versione_master->setText(QCoreApplication::translate("MainWindow", "Informazioni versione master", nullptr));
        actionApri_versione_master->setText(QCoreApplication::translate("MainWindow", "Apri versione master", nullptr));
        actionInformazioni_versione->setText(QCoreApplication::translate("MainWindow", "Informazioni versione", nullptr));
        openExplorerBtn->setText(QCoreApplication::translate("MainWindow", "Apri explorer", nullptr));
        openTerminalBtn->setText(QCoreApplication::translate("MainWindow", "Apri terminale", nullptr));
        addElementBtn->setText(QCoreApplication::translate("MainWindow", "Aggiungi elemento", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("MainWindow", "Visualizzazione struttura", nullptr));
        QTreeWidgetItem *___qtreewidgetitem = logicStrTree->headerItem();
        ___qtreewidgetitem->setText(1, QCoreApplication::translate("MainWindow", "Informazioni", nullptr));
        ___qtreewidgetitem->setText(0, QCoreApplication::translate("MainWindow", "Elemento", nullptr));
        curObjInfoBtn->setText(QCoreApplication::translate("MainWindow", "Informazioni", nullptr));
        openInExplorerBtn->setText(QCoreApplication::translate("MainWindow", "Apri in explorer", nullptr));
        openInTerminalBtn->setText(QCoreApplication::translate("MainWindow", "Apri in terminale", nullptr));
        newVersionBtn->setText(QCoreApplication::translate("MainWindow", "Nuovo", nullptr));
        deleteObjectBtn->setText(QCoreApplication::translate("MainWindow", "Elimina", nullptr));
        editObjectBtn->setText(QCoreApplication::translate("MainWindow", "Modifica", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("MainWindow", "Struttura logica", nullptr));
        filesNum->setText(QCoreApplication::translate("MainWindow", "Numero file: ", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "Aggiorna", nullptr));
        openFileBtn->setText(QCoreApplication::translate("MainWindow", "Apri", nullptr));
        pushButton_3->setText(QCoreApplication::translate("MainWindow", "Cancella", nullptr));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_3), QCoreApplication::translate("MainWindow", "File versione", nullptr));
        QTreeWidgetItem *___qtreewidgetitem1 = versionLogicView->headerItem();
        ___qtreewidgetitem1->setText(2, QCoreApplication::translate("MainWindow", "Tipologia", nullptr));
        ___qtreewidgetitem1->setText(1, QCoreApplication::translate("MainWindow", "Percorso", nullptr));
        ___qtreewidgetitem1->setText(0, QCoreApplication::translate("MainWindow", "Nome elemento", nullptr));
        addLibraryBtn->setText(QCoreApplication::translate("MainWindow", "Nuova libreria", nullptr));
        addClassBtn->setText(QCoreApplication::translate("MainWindow", "Nuova classe", nullptr));
        addModuleBtn->setText(QCoreApplication::translate("MainWindow", "Nuovo modulo", nullptr));
        addSourceBtn->setText(QCoreApplication::translate("MainWindow", "Aggiungi sorgente", nullptr));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_4), QCoreApplication::translate("MainWindow", "Logica versione", nullptr));
        groupBox->setTitle(QCoreApplication::translate("MainWindow", "Console informazioni", nullptr));
        menuFile->setTitle(QCoreApplication::translate("MainWindow", "File", nullptr));
        menuVersioni->setTitle(QCoreApplication::translate("MainWindow", "Versioni", nullptr));
        menuStrumenti->setTitle(QCoreApplication::translate("MainWindow", "Ricerca", nullptr));
        menuSostituzione->setTitle(QCoreApplication::translate("MainWindow", "Sostituzione", nullptr));
        menuStrumenti_2->setTitle(QCoreApplication::translate("MainWindow", "Strumenti", nullptr));
        menuVisualizza->setTitle(QCoreApplication::translate("MainWindow", "Visualizza", nullptr));
        menuProgetto->setTitle(QCoreApplication::translate("MainWindow", "Progetto", nullptr));
        toolBar->setWindowTitle(QCoreApplication::translate("MainWindow", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
