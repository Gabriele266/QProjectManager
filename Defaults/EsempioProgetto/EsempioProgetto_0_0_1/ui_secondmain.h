/********************************************************************************
** Form generated from reading UI file 'secondmain.ui'
**
** Created by: Qt User Interface Compiler version 5.15.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SECONDMAIN_H
#define UI_SECONDMAIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SecondMain
{
public:
    QWidget *centralwidget;
    QFormLayout *formLayout;
    QTextEdit *textEdit;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *SecondMain)
    {
        if (SecondMain->objectName().isEmpty())
            SecondMain->setObjectName(QString::fromUtf8("SecondMain"));
        SecondMain->resize(640, 480);
        centralwidget = new QWidget(SecondMain);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        formLayout = new QFormLayout(centralwidget);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        textEdit = new QTextEdit(centralwidget);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));

        formLayout->setWidget(0, QFormLayout::LabelRole, textEdit);

        SecondMain->setCentralWidget(centralwidget);
        menubar = new QMenuBar(SecondMain);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 640, 20));
        SecondMain->setMenuBar(menubar);
        statusbar = new QStatusBar(SecondMain);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        SecondMain->setStatusBar(statusbar);

        retranslateUi(SecondMain);

        QMetaObject::connectSlotsByName(SecondMain);
    } // setupUi

    void retranslateUi(QMainWindow *SecondMain)
    {
        SecondMain->setWindowTitle(QCoreApplication::translate("SecondMain", "MainWindow", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SecondMain: public Ui_SecondMain {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SECONDMAIN_H
