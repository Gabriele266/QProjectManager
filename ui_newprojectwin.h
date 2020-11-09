/********************************************************************************
** Form generated from reading UI file 'newprojectwin.ui'
**
** Created by: Qt User Interface Compiler version 5.15.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NEWPROJECTWIN_H
#define UI_NEWPROJECTWIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_NewProjectWin
{
public:
    QDialogButtonBox *buttonBox;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLineEdit *projNameEdit;
    QLineEdit *projPathEdit;
    QLineEdit *lineEdit_4;
    QCheckBox *creationInfoCheck;
    QPushButton *showFiles;
    QTextEdit *descriptionEdit;
    QLabel *label_7;
    QLineEdit *authorEdit;

    void setupUi(QDialog *NewProjectWin)
    {
        if (NewProjectWin->objectName().isEmpty())
            NewProjectWin->setObjectName(QString::fromUtf8("NewProjectWin"));
        NewProjectWin->resize(829, 488);
        buttonBox = new QDialogButtonBox(NewProjectWin);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setGeometry(QRect(200, 450, 621, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        label = new QLabel(NewProjectWin);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(110, 10, 661, 61));
        QFont font;
        font.setFamily(QString::fromUtf8("JetBrains Mono"));
        font.setPointSize(24);
        label->setFont(font);
        label_2 = new QLabel(NewProjectWin);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(100, 80, 351, 21));
        QFont font1;
        font1.setPointSize(10);
        label_2->setFont(font1);
        label_3 = new QLabel(NewProjectWin);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(80, 150, 111, 16));
        label_3->setFont(font1);
        label_4 = new QLabel(NewProjectWin);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(80, 190, 141, 16));
        label_4->setFont(font1);
        label_5 = new QLabel(NewProjectWin);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(80, 240, 141, 16));
        label_5->setFont(font1);
        label_6 = new QLabel(NewProjectWin);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(80, 330, 191, 16));
        label_6->setFont(font1);
        projNameEdit = new QLineEdit(NewProjectWin);
        projNameEdit->setObjectName(QString::fromUtf8("projNameEdit"));
        projNameEdit->setGeometry(QRect(290, 150, 261, 21));
        projPathEdit = new QLineEdit(NewProjectWin);
        projPathEdit->setObjectName(QString::fromUtf8("projPathEdit"));
        projPathEdit->setGeometry(QRect(290, 190, 381, 21));
        lineEdit_4 = new QLineEdit(NewProjectWin);
        lineEdit_4->setObjectName(QString::fromUtf8("lineEdit_4"));
        lineEdit_4->setGeometry(QRect(290, 330, 381, 21));
        creationInfoCheck = new QCheckBox(NewProjectWin);
        creationInfoCheck->setObjectName(QString::fromUtf8("creationInfoCheck"));
        creationInfoCheck->setGeometry(QRect(630, 120, 161, 19));
        showFiles = new QPushButton(NewProjectWin);
        showFiles->setObjectName(QString::fromUtf8("showFiles"));
        showFiles->setGeometry(QRect(710, 190, 41, 21));
        descriptionEdit = new QTextEdit(NewProjectWin);
        descriptionEdit->setObjectName(QString::fromUtf8("descriptionEdit"));
        descriptionEdit->setGeometry(QRect(290, 230, 381, 70));
        label_7 = new QLabel(NewProjectWin);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(80, 390, 47, 13));
        authorEdit = new QLineEdit(NewProjectWin);
        authorEdit->setObjectName(QString::fromUtf8("authorEdit"));
        authorEdit->setGeometry(QRect(290, 390, 241, 21));

        retranslateUi(NewProjectWin);
        QObject::connect(buttonBox, SIGNAL(accepted()), NewProjectWin, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), NewProjectWin, SLOT(reject()));

        QMetaObject::connectSlotsByName(NewProjectWin);
    } // setupUi

    void retranslateUi(QDialog *NewProjectWin)
    {
        NewProjectWin->setWindowTitle(QCoreApplication::translate("NewProjectWin", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("NewProjectWin", "Creazione nuovo progetto di codice", nullptr));
        label_2->setText(QCoreApplication::translate("NewProjectWin", "Specificare i parametri per la creazione del nuovo progetto", nullptr));
        label_3->setText(QCoreApplication::translate("NewProjectWin", "Nome del progetto", nullptr));
        label_4->setText(QCoreApplication::translate("NewProjectWin", "Percorso di salvataggio", nullptr));
        label_5->setText(QCoreApplication::translate("NewProjectWin", "Descrizione del progetto", nullptr));
        label_6->setText(QCoreApplication::translate("NewProjectWin", "Percorso salvataggio annotazioni", nullptr));
        projNameEdit->setText(QCoreApplication::translate("NewProjectWin", "NuovoProgetto", nullptr));
        projPathEdit->setText(QCoreApplication::translate("NewProjectWin", "F:\\SyncFiles\\Informatica\\ProveProgrammi", nullptr));
        lineEdit_4->setText(QCoreApplication::translate("NewProjectWin", "<project_path>", nullptr));
        creationInfoCheck->setText(QCoreApplication::translate("NewProjectWin", "Salva informazioni creazione", nullptr));
        showFiles->setText(QCoreApplication::translate("NewProjectWin", "...", nullptr));
        label_7->setText(QCoreApplication::translate("NewProjectWin", "Autore: ", nullptr));
        authorEdit->setText(QCoreApplication::translate("NewProjectWin", "Utente", nullptr));
    } // retranslateUi

};

namespace Ui {
    class NewProjectWin: public Ui_NewProjectWin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NEWPROJECTWIN_H
