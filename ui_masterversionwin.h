/********************************************************************************
** Form generated from reading UI file 'masterversionwin.ui'
**
** Created by: Qt User Interface Compiler version 5.15.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MASTERVERSIONWIN_H
#define UI_MASTERVERSIONWIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>

QT_BEGIN_NAMESPACE

class Ui_MasterVersionWin
{
public:
    QDialogButtonBox *buttonBox;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLineEdit *projName;
    QLabel *label_4;
    QLineEdit *versionName;
    QLabel *label_5;
    QSpinBox *major;
    QSpinBox *sub;
    QSpinBox *revision;
    QPushButton *pushButton;
    QLabel *label_6;
    QLineEdit *sourcesPath;
    QPushButton *seeBtn;
    QLabel *masterRec;
    QLabel *label_7;

    void setupUi(QDialog *MasterVersionWin)
    {
        if (MasterVersionWin->objectName().isEmpty())
            MasterVersionWin->setObjectName(QString::fromUtf8("MasterVersionWin"));
        MasterVersionWin->resize(720, 430);
        buttonBox = new QDialogButtonBox(MasterVersionWin);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setGeometry(QRect(10, 380, 621, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        label = new QLabel(MasterVersionWin);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(140, 30, 341, 31));
        QFont font;
        font.setPointSize(18);
        label->setFont(font);
        label_2 = new QLabel(MasterVersionWin);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(170, 80, 368, 15));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Dutch801 Rm BT"));
        font1.setPointSize(9);
        label_2->setFont(font1);
        label_3 = new QLabel(MasterVersionWin);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(50, 130, 47, 13));
        projName = new QLineEdit(MasterVersionWin);
        projName->setObjectName(QString::fromUtf8("projName"));
        projName->setGeometry(QRect(110, 130, 261, 21));
        projName->setReadOnly(true);
        label_4 = new QLabel(MasterVersionWin);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(50, 190, 81, 16));
        versionName = new QLineEdit(MasterVersionWin);
        versionName->setObjectName(QString::fromUtf8("versionName"));
        versionName->setGeometry(QRect(150, 190, 191, 21));
        label_5 = new QLabel(MasterVersionWin);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(50, 250, 91, 16));
        major = new QSpinBox(MasterVersionWin);
        major->setObjectName(QString::fromUtf8("major"));
        major->setGeometry(QRect(150, 250, 42, 22));
        sub = new QSpinBox(MasterVersionWin);
        sub->setObjectName(QString::fromUtf8("sub"));
        sub->setGeometry(QRect(210, 250, 42, 22));
        revision = new QSpinBox(MasterVersionWin);
        revision->setObjectName(QString::fromUtf8("revision"));
        revision->setGeometry(QRect(270, 250, 42, 22));
        pushButton = new QPushButton(MasterVersionWin);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(350, 250, 51, 21));
        label_6 = new QLabel(MasterVersionWin);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(50, 310, 91, 16));
        sourcesPath = new QLineEdit(MasterVersionWin);
        sourcesPath->setObjectName(QString::fromUtf8("sourcesPath"));
        sourcesPath->setGeometry(QRect(160, 310, 351, 21));
        seeBtn = new QPushButton(MasterVersionWin);
        seeBtn->setObjectName(QString::fromUtf8("seeBtn"));
        seeBtn->setGeometry(QRect(540, 310, 51, 21));
        masterRec = new QLabel(MasterVersionWin);
        masterRec->setObjectName(QString::fromUtf8("masterRec"));
        masterRec->setEnabled(true);
        masterRec->setGeometry(QRect(450, 120, 249, 100));
        label_7 = new QLabel(MasterVersionWin);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(40, 30, 61, 61));

        retranslateUi(MasterVersionWin);
        QObject::connect(buttonBox, SIGNAL(accepted()), MasterVersionWin, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), MasterVersionWin, SLOT(reject()));

        QMetaObject::connectSlotsByName(MasterVersionWin);
    } // setupUi

    void retranslateUi(QDialog *MasterVersionWin)
    {
        MasterVersionWin->setWindowTitle(QCoreApplication::translate("MasterVersionWin", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("MasterVersionWin", "Impostazione versione master", nullptr));
        label_2->setText(QCoreApplication::translate("MasterVersionWin", "Inserire i parametri per la corretta impostazione della versione master", nullptr));
        label_3->setText(QCoreApplication::translate("MasterVersionWin", "Progetto", nullptr));
#if QT_CONFIG(tooltip)
        projName->setToolTip(QCoreApplication::translate("MasterVersionWin", "Nome del progetto", nullptr));
#endif // QT_CONFIG(tooltip)
        label_4->setText(QCoreApplication::translate("MasterVersionWin", "Nome versione", nullptr));
        versionName->setText(QCoreApplication::translate("MasterVersionWin", "master", nullptr));
        label_5->setText(QCoreApplication::translate("MasterVersionWin", "Numero versione", nullptr));
        pushButton->setText(QCoreApplication::translate("MasterVersionWin", "Azzera", nullptr));
        label_6->setText(QCoreApplication::translate("MasterVersionWin", "Percorso sorgenti", nullptr));
#if QT_CONFIG(tooltip)
        sourcesPath->setToolTip(QCoreApplication::translate("MasterVersionWin", "<html><head/><body><p>Indicare il percorso da cui copiare i sorgenti.</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        seeBtn->setText(QCoreApplication::translate("MasterVersionWin", "...", nullptr));
        masterRec->setText(QCoreApplication::translate("MasterVersionWin", "<html><head/><body><p align=\"center\"><span style=\" font-size:10pt; color:#aa0000;\">Attenzione: \303\250 stata rilevata la presenza di </span></p><p align=\"center\"><span style=\" font-size:10pt; color:#aa0000;\">una versione master </span></p><p align=\"center\"><span style=\" font-size:10pt; color:#aa0000;\">all' interno del progetto. Se si continua con </span></p><p align=\"center\"><span style=\" font-size:10pt; color:#aa0000;\">l'impostazione essa verr\303\240 sovrascritta</span></p></body></html>", nullptr));
        label_7->setText(QCoreApplication::translate("MasterVersionWin", "<html><head/><body><p><img src=\":/icons/versions/Icons/root_icon.jpg\"/></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MasterVersionWin: public Ui_MasterVersionWin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MASTERVERSIONWIN_H
