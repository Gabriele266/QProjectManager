/********************************************************************************
** Form generated from reading UI file 'notesedit.ui'
**
** Created by: Qt User Interface Compiler version 5.15.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NOTESEDIT_H
#define UI_NOTESEDIT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_NotesEdit
{
public:
    QAction *actionSalva;
    QAction *actionPulisci;
    QAction *actionChiudi;
    QAction *actionApri;
    QAction *actionTesto_semplice;
    QAction *actionHtml;
    QAction *actionElenco_numerato;
    QAction *actionElenco;
    QAction *actionDichiarazione_sezione;
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout;
    QListWidget *LineNumbersList;
    QPlainTextEdit *contentEditor;
    QMenuBar *menubar;
    QMenu *menuFile;
    QMenu *menuFormato;
    QStatusBar *statusbar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *NotesEdit)
    {
        if (NotesEdit->objectName().isEmpty())
            NotesEdit->setObjectName(QString::fromUtf8("NotesEdit"));
        NotesEdit->resize(983, 659);
        actionSalva = new QAction(NotesEdit);
        actionSalva->setObjectName(QString::fromUtf8("actionSalva"));
        actionPulisci = new QAction(NotesEdit);
        actionPulisci->setObjectName(QString::fromUtf8("actionPulisci"));
        actionChiudi = new QAction(NotesEdit);
        actionChiudi->setObjectName(QString::fromUtf8("actionChiudi"));
        actionApri = new QAction(NotesEdit);
        actionApri->setObjectName(QString::fromUtf8("actionApri"));
        actionTesto_semplice = new QAction(NotesEdit);
        actionTesto_semplice->setObjectName(QString::fromUtf8("actionTesto_semplice"));
        actionHtml = new QAction(NotesEdit);
        actionHtml->setObjectName(QString::fromUtf8("actionHtml"));
        actionElenco_numerato = new QAction(NotesEdit);
        actionElenco_numerato->setObjectName(QString::fromUtf8("actionElenco_numerato"));
        actionElenco = new QAction(NotesEdit);
        actionElenco->setObjectName(QString::fromUtf8("actionElenco"));
        actionDichiarazione_sezione = new QAction(NotesEdit);
        actionDichiarazione_sezione->setObjectName(QString::fromUtf8("actionDichiarazione_sezione"));
        centralwidget = new QWidget(NotesEdit);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayout_2 = new QVBoxLayout(centralwidget);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        LineNumbersList = new QListWidget(centralwidget);
        LineNumbersList->setObjectName(QString::fromUtf8("LineNumbersList"));
        LineNumbersList->setMaximumSize(QSize(60, 16777215));

        horizontalLayout->addWidget(LineNumbersList);

        contentEditor = new QPlainTextEdit(centralwidget);
        contentEditor->setObjectName(QString::fromUtf8("contentEditor"));

        horizontalLayout->addWidget(contentEditor);


        verticalLayout_3->addLayout(horizontalLayout);


        verticalLayout->addLayout(verticalLayout_3);


        verticalLayout_2->addLayout(verticalLayout);

        NotesEdit->setCentralWidget(centralwidget);
        menubar = new QMenuBar(NotesEdit);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 983, 20));
        menuFile = new QMenu(menubar);
        menuFile->setObjectName(QString::fromUtf8("menuFile"));
        menuFormato = new QMenu(menubar);
        menuFormato->setObjectName(QString::fromUtf8("menuFormato"));
        NotesEdit->setMenuBar(menubar);
        statusbar = new QStatusBar(NotesEdit);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        NotesEdit->setStatusBar(statusbar);
        toolBar = new QToolBar(NotesEdit);
        toolBar->setObjectName(QString::fromUtf8("toolBar"));
        NotesEdit->addToolBar(Qt::TopToolBarArea, toolBar);

        menubar->addAction(menuFile->menuAction());
        menubar->addAction(menuFormato->menuAction());
        menuFile->addAction(actionSalva);
        menuFile->addAction(actionPulisci);
        menuFile->addSeparator();
        menuFile->addAction(actionApri);
        menuFile->addSeparator();
        menuFile->addAction(actionChiudi);
        menuFormato->addAction(actionTesto_semplice);
        menuFormato->addAction(actionHtml);
        toolBar->addAction(actionElenco_numerato);
        toolBar->addAction(actionElenco);
        toolBar->addAction(actionDichiarazione_sezione);

        retranslateUi(NotesEdit);

        QMetaObject::connectSlotsByName(NotesEdit);
    } // setupUi

    void retranslateUi(QMainWindow *NotesEdit)
    {
        NotesEdit->setWindowTitle(QCoreApplication::translate("NotesEdit", "MainWindow", nullptr));
        actionSalva->setText(QCoreApplication::translate("NotesEdit", "Salva", nullptr));
        actionPulisci->setText(QCoreApplication::translate("NotesEdit", "Pulisci", nullptr));
        actionChiudi->setText(QCoreApplication::translate("NotesEdit", "Chiudi", nullptr));
        actionApri->setText(QCoreApplication::translate("NotesEdit", "Apri", nullptr));
        actionTesto_semplice->setText(QCoreApplication::translate("NotesEdit", "Testo semplice", nullptr));
        actionHtml->setText(QCoreApplication::translate("NotesEdit", "Html", nullptr));
        actionElenco_numerato->setText(QCoreApplication::translate("NotesEdit", "Elenco numerato", nullptr));
        actionElenco->setText(QCoreApplication::translate("NotesEdit", "Elenco", nullptr));
        actionDichiarazione_sezione->setText(QCoreApplication::translate("NotesEdit", "Dichiarazione sezione", nullptr));
#if QT_CONFIG(tooltip)
        actionDichiarazione_sezione->setToolTip(QCoreApplication::translate("NotesEdit", "Aggiunge nella posizione del cursore una dichiarazione di sezione.", nullptr));
#endif // QT_CONFIG(tooltip)
        menuFile->setTitle(QCoreApplication::translate("NotesEdit", "File", nullptr));
        menuFormato->setTitle(QCoreApplication::translate("NotesEdit", "Formato", nullptr));
        toolBar->setWindowTitle(QCoreApplication::translate("NotesEdit", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class NotesEdit: public Ui_NotesEdit {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NOTESEDIT_H
