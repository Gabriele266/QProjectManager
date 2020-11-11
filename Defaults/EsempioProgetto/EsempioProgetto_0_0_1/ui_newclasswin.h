/********************************************************************************
** Form generated from reading UI file 'newclasswin.ui'
**
** Created by: Qt User Interface Compiler version 5.15.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NEWCLASSWIN_H
#define UI_NEWCLASSWIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_NewClassWin
{
public:
    QDialogButtonBox *buttonBox;
    QLabel *label;
    QLabel *label_2;
    QLineEdit *className;
    QLabel *label_3;
    QLineEdit *projectName;
    QLabel *label_4;
    QComboBox *versionAddTo;
    QLabel *label_5;
    QLineEdit *creationPathEdit;
    QPushButton *foldBtn;
    QCheckBox *checkBox;
    QGroupBox *inheritGroup;
    QLabel *label_6;
    QLineEdit *inClassName;
    QLabel *label_7;
    QLineEdit *inClassInclude;
    QLabel *label_8;
    QComboBox *inScope;
    QLabel *label_9;
    QGroupBox *encapsuleGroup;
    QCheckBox *encapPrivate;
    QCheckBox *encapPublic;
    QCheckBox *encapProtected;
    QGroupBox *constructorGroup;
    QLabel *label_10;
    QLineEdit *constructorArgs;
    QLabel *label_11;
    QLineEdit *constructorInhe;
    QCheckBox *infoUse;
    QCheckBox *generateDestructor;
    QCheckBox *generateConstr;
    QTextEdit *descriptionEdit;
    QLabel *label_12;
    QGroupBox *infoGroup;
    QLabel *label_13;
    QLineEdit *lineEdit_6;

    void setupUi(QDialog *NewClassWin)
    {
        if (NewClassWin->objectName().isEmpty())
            NewClassWin->setObjectName(QString::fromUtf8("NewClassWin"));
        NewClassWin->resize(811, 630);
        buttonBox = new QDialogButtonBox(NewClassWin);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setGeometry(QRect(180, 590, 621, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        label = new QLabel(NewClassWin);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(170, 20, 200, 40));
        QFont font;
        font.setFamily(QString::fromUtf8("NEOLITH"));
        font.setPointSize(20);
        label->setFont(font);
        label_2 = new QLabel(NewClassWin);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(50, 160, 47, 13));
        QFont font1;
        font1.setPointSize(10);
        label_2->setFont(font1);
        className = new QLineEdit(NewClassWin);
        className->setObjectName(QString::fromUtf8("className"));
        className->setGeometry(QRect(120, 160, 221, 21));
        label_3 = new QLabel(NewClassWin);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(50, 110, 47, 13));
        projectName = new QLineEdit(NewClassWin);
        projectName->setObjectName(QString::fromUtf8("projectName"));
        projectName->setGeometry(QRect(120, 110, 221, 21));
        projectName->setReadOnly(true);
        label_4 = new QLabel(NewClassWin);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(50, 210, 113, 13));
        versionAddTo = new QComboBox(NewClassWin);
        versionAddTo->setObjectName(QString::fromUtf8("versionAddTo"));
        versionAddTo->setGeometry(QRect(190, 210, 181, 22));
        label_5 = new QLabel(NewClassWin);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(50, 260, 47, 13));
        creationPathEdit = new QLineEdit(NewClassWin);
        creationPathEdit->setObjectName(QString::fromUtf8("creationPathEdit"));
        creationPathEdit->setGeometry(QRect(120, 260, 331, 21));
        foldBtn = new QPushButton(NewClassWin);
        foldBtn->setObjectName(QString::fromUtf8("foldBtn"));
        foldBtn->setGeometry(QRect(470, 260, 41, 21));
        checkBox = new QCheckBox(NewClassWin);
        checkBox->setObjectName(QString::fromUtf8("checkBox"));
        checkBox->setGeometry(QRect(520, 80, 112, 19));
        inheritGroup = new QGroupBox(NewClassWin);
        inheritGroup->setObjectName(QString::fromUtf8("inheritGroup"));
        inheritGroup->setEnabled(false);
        inheritGroup->setGeometry(QRect(520, 110, 271, 141));
        label_6 = new QLabel(inheritGroup);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(10, 40, 84, 13));
        inClassName = new QLineEdit(inheritGroup);
        inClassName->setObjectName(QString::fromUtf8("inClassName"));
        inClassName->setGeometry(QRect(110, 40, 151, 21));
        label_7 = new QLabel(inheritGroup);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(10, 80, 84, 16));
        inClassInclude = new QLineEdit(inheritGroup);
        inClassInclude->setObjectName(QString::fromUtf8("inClassInclude"));
        inClassInclude->setGeometry(QRect(110, 80, 151, 21));
        label_8 = new QLabel(inheritGroup);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(10, 110, 91, 16));
        inScope = new QComboBox(inheritGroup);
        inScope->addItem(QString());
        inScope->addItem(QString());
        inScope->addItem(QString());
        inScope->setObjectName(QString::fromUtf8("inScope"));
        inScope->setGeometry(QRect(110, 110, 151, 22));
        label_9 = new QLabel(NewClassWin);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(50, 320, 65, 16));
        label_9->setFont(font1);
        encapsuleGroup = new QGroupBox(NewClassWin);
        encapsuleGroup->setObjectName(QString::fromUtf8("encapsuleGroup"));
        encapsuleGroup->setGeometry(QRect(520, 290, 261, 91));
        encapPrivate = new QCheckBox(encapsuleGroup);
        encapPrivate->setObjectName(QString::fromUtf8("encapPrivate"));
        encapPrivate->setGeometry(QRect(10, 60, 101, 19));
        encapPrivate->setChecked(true);
        encapPublic = new QCheckBox(encapsuleGroup);
        encapPublic->setObjectName(QString::fromUtf8("encapPublic"));
        encapPublic->setGeometry(QRect(10, 30, 101, 19));
        encapPublic->setChecked(true);
        encapProtected = new QCheckBox(encapsuleGroup);
        encapProtected->setObjectName(QString::fromUtf8("encapProtected"));
        encapProtected->setGeometry(QRect(130, 30, 121, 19));
        constructorGroup = new QGroupBox(NewClassWin);
        constructorGroup->setObjectName(QString::fromUtf8("constructorGroup"));
        constructorGroup->setGeometry(QRect(40, 470, 321, 101));
        label_10 = new QLabel(constructorGroup);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(20, 30, 49, 13));
        constructorArgs = new QLineEdit(constructorGroup);
        constructorArgs->setObjectName(QString::fromUtf8("constructorArgs"));
        constructorArgs->setGeometry(QRect(90, 30, 181, 21));
        label_11 = new QLabel(constructorGroup);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(20, 70, 47, 13));
        constructorInhe = new QLineEdit(constructorGroup);
        constructorInhe->setObjectName(QString::fromUtf8("constructorInhe"));
        constructorInhe->setGeometry(QRect(90, 60, 181, 21));
        infoUse = new QCheckBox(NewClassWin);
        infoUse->setObjectName(QString::fromUtf8("infoUse"));
        infoUse->setGeometry(QRect(420, 430, 110, 19));
        generateDestructor = new QCheckBox(NewClassWin);
        generateDestructor->setObjectName(QString::fromUtf8("generateDestructor"));
        generateDestructor->setGeometry(QRect(640, 430, 117, 19));
        generateConstr = new QCheckBox(NewClassWin);
        generateConstr->setObjectName(QString::fromUtf8("generateConstr"));
        generateConstr->setGeometry(QRect(40, 430, 117, 19));
        generateConstr->setChecked(true);
        generateConstr->setTristate(false);
        descriptionEdit = new QTextEdit(NewClassWin);
        descriptionEdit->setObjectName(QString::fromUtf8("descriptionEdit"));
        descriptionEdit->setGeometry(QRect(120, 320, 331, 81));
        label_12 = new QLabel(NewClassWin);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setGeometry(QRect(40, 20, 51, 51));
        infoGroup = new QGroupBox(NewClassWin);
        infoGroup->setObjectName(QString::fromUtf8("infoGroup"));
        infoGroup->setEnabled(false);
        infoGroup->setGeometry(QRect(420, 480, 251, 61));
        label_13 = new QLabel(infoGroup);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setGeometry(QRect(20, 30, 47, 13));
        lineEdit_6 = new QLineEdit(infoGroup);
        lineEdit_6->setObjectName(QString::fromUtf8("lineEdit_6"));
        lineEdit_6->setGeometry(QRect(70, 30, 113, 21));

        retranslateUi(NewClassWin);
        QObject::connect(buttonBox, SIGNAL(accepted()), NewClassWin, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), NewClassWin, SLOT(reject()));

        QMetaObject::connectSlotsByName(NewClassWin);
    } // setupUi

    void retranslateUi(QDialog *NewClassWin)
    {
        NewClassWin->setWindowTitle(QCoreApplication::translate("NewClassWin", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("NewClassWin", "Creazione nuova classe", nullptr));
        label_2->setText(QCoreApplication::translate("NewClassWin", "Nome", nullptr));
        className->setText(QCoreApplication::translate("NewClassWin", "NuovaClasse", nullptr));
        label_3->setText(QCoreApplication::translate("NewClassWin", "Progetto", nullptr));
        label_4->setText(QCoreApplication::translate("NewClassWin", "Versione da aggiungere", nullptr));
        label_5->setText(QCoreApplication::translate("NewClassWin", "Percorso", nullptr));
        foldBtn->setText(QCoreApplication::translate("NewClassWin", "...", nullptr));
        checkBox->setText(QCoreApplication::translate("NewClassWin", "Eredita una classe", nullptr));
        inheritGroup->setTitle(QCoreApplication::translate("NewClassWin", "Ereditariet\303\240", nullptr));
        label_6->setText(QCoreApplication::translate("NewClassWin", "Nome della classe", nullptr));
        label_7->setText(QCoreApplication::translate("NewClassWin", "File da includere", nullptr));
        inClassInclude->setText(QCoreApplication::translate("NewClassWin", "\"file.h\"", nullptr));
        label_8->setText(QCoreApplication::translate("NewClassWin", "Parte da ereditare", nullptr));
        inScope->setItemText(0, QCoreApplication::translate("NewClassWin", "Private", nullptr));
        inScope->setItemText(1, QCoreApplication::translate("NewClassWin", "Public", nullptr));
        inScope->setItemText(2, QCoreApplication::translate("NewClassWin", "Protected", nullptr));

        label_9->setText(QCoreApplication::translate("NewClassWin", "Descrizione", nullptr));
        encapsuleGroup->setTitle(QCoreApplication::translate("NewClassWin", "Incapsulamento", nullptr));
        encapPrivate->setText(QCoreApplication::translate("NewClassWin", "Incapsula private", nullptr));
        encapPublic->setText(QCoreApplication::translate("NewClassWin", "Incapsula public", nullptr));
        encapProtected->setText(QCoreApplication::translate("NewClassWin", "Incapsula protected", nullptr));
        constructorGroup->setTitle(QCoreApplication::translate("NewClassWin", "Generazione costruttore", nullptr));
        label_10->setText(QCoreApplication::translate("NewClassWin", "Argomenti", nullptr));
        constructorArgs->setText(QCoreApplication::translate("NewClassWin", "void", nullptr));
        label_11->setText(QCoreApplication::translate("NewClassWin", "Eredita", nullptr));
        infoUse->setText(QCoreApplication::translate("NewClassWin", "Scrivi informazioni", nullptr));
        generateDestructor->setText(QCoreApplication::translate("NewClassWin", "Genera distruttore", nullptr));
        generateConstr->setText(QCoreApplication::translate("NewClassWin", "Genera costruttore", nullptr));
        label_12->setText(QCoreApplication::translate("NewClassWin", "<html><head/><body><p><img src=\":/icons/logics/Icons/class_icon.png\"/></p></body></html>", nullptr));
        infoGroup->setTitle(QCoreApplication::translate("NewClassWin", "Informazioni", nullptr));
        label_13->setText(QCoreApplication::translate("NewClassWin", "Autore", nullptr));
    } // retranslateUi

};

namespace Ui {
    class NewClassWin: public Ui_NewClassWin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NEWCLASSWIN_H
