/********************************************************************************
** Form generated from reading UI file 'newversionwin.ui'
**
** Created by: Qt User Interface Compiler version 5.15.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NEWVERSIONWIN_H
#define UI_NEWVERSIONWIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>

QT_BEGIN_NAMESPACE

class Ui_NewVersionWin
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
    QPushButton *resetNumberBtn;
    QLabel *label_6;
    QComboBox *fromWho;
    QLabel *label_7;
    QListWidget *flagsList;
    QComboBox *flagChose;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QLabel *label_8;
    QLabel *flagsCount;
    QCheckBox *checkBox;
    QCheckBox *checkBox_2;
    QLabel *label_9;
    QComboBox *comboBox_2;

    void setupUi(QDialog *NewVersionWin)
    {
        if (NewVersionWin->objectName().isEmpty())
            NewVersionWin->setObjectName(QString::fromUtf8("NewVersionWin"));
        NewVersionWin->resize(799, 456);
        buttonBox = new QDialogButtonBox(NewVersionWin);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setGeometry(QRect(10, 410, 781, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        label = new QLabel(NewVersionWin);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(130, 20, 325, 35));
        QFont font;
        font.setPointSize(22);
        label->setFont(font);
        label_2 = new QLabel(NewVersionWin);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(190, 70, 321, 16));
        label_3 = new QLabel(NewVersionWin);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(90, 120, 81, 16));
        projName = new QLineEdit(NewVersionWin);
        projName->setObjectName(QString::fromUtf8("projName"));
        projName->setGeometry(QRect(190, 120, 211, 21));
        projName->setReadOnly(true);
        label_4 = new QLabel(NewVersionWin);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(90, 180, 81, 16));
        versionName = new QLineEdit(NewVersionWin);
        versionName->setObjectName(QString::fromUtf8("versionName"));
        versionName->setGeometry(QRect(190, 180, 211, 21));
        label_5 = new QLabel(NewVersionWin);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(90, 240, 47, 13));
        major = new QSpinBox(NewVersionWin);
        major->setObjectName(QString::fromUtf8("major"));
        major->setGeometry(QRect(170, 230, 42, 22));
        sub = new QSpinBox(NewVersionWin);
        sub->setObjectName(QString::fromUtf8("sub"));
        sub->setGeometry(QRect(230, 230, 42, 22));
        revision = new QSpinBox(NewVersionWin);
        revision->setObjectName(QString::fromUtf8("revision"));
        revision->setGeometry(QRect(290, 230, 42, 22));
        resetNumberBtn = new QPushButton(NewVersionWin);
        resetNumberBtn->setObjectName(QString::fromUtf8("resetNumberBtn"));
        resetNumberBtn->setGeometry(QRect(370, 230, 61, 21));
        label_6 = new QLabel(NewVersionWin);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(90, 290, 47, 13));
        fromWho = new QComboBox(NewVersionWin);
        fromWho->addItem(QString());
        fromWho->addItem(QString());
        fromWho->addItem(QString());
        fromWho->setObjectName(QString::fromUtf8("fromWho"));
        fromWho->setGeometry(QRect(190, 280, 201, 22));
        label_7 = new QLabel(NewVersionWin);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(470, 120, 113, 13));
        flagsList = new QListWidget(NewVersionWin);
        new QListWidgetItem(flagsList);
        new QListWidgetItem(flagsList);
        new QListWidgetItem(flagsList);
        new QListWidgetItem(flagsList);
        new QListWidgetItem(flagsList);
        new QListWidgetItem(flagsList);
        new QListWidgetItem(flagsList);
        new QListWidgetItem(flagsList);
        flagsList->setObjectName(QString::fromUtf8("flagsList"));
        flagsList->setGeometry(QRect(470, 150, 281, 161));
        flagChose = new QComboBox(NewVersionWin);
        flagChose->addItem(QString());
        flagChose->addItem(QString());
        flagChose->addItem(QString());
        flagChose->addItem(QString());
        flagChose->addItem(QString());
        flagChose->addItem(QString());
        flagChose->addItem(QString());
        flagChose->setObjectName(QString::fromUtf8("flagChose"));
        flagChose->setGeometry(QRect(440, 340, 191, 22));
        pushButton_2 = new QPushButton(NewVersionWin);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(660, 90, 71, 21));
        pushButton_3 = new QPushButton(NewVersionWin);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(660, 120, 71, 21));
        pushButton_4 = new QPushButton(NewVersionWin);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(580, 90, 61, 21));
        label_8 = new QLabel(NewVersionWin);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(660, 340, 91, 16));
        flagsCount = new QLabel(NewVersionWin);
        flagsCount->setObjectName(QString::fromUtf8("flagsCount"));
        flagsCount->setGeometry(QRect(760, 340, 47, 13));
        checkBox = new QCheckBox(NewVersionWin);
        checkBox->setObjectName(QString::fromUtf8("checkBox"));
        checkBox->setGeometry(QRect(90, 330, 131, 19));
        checkBox_2 = new QCheckBox(NewVersionWin);
        checkBox_2->setObjectName(QString::fromUtf8("checkBox_2"));
        checkBox_2->setGeometry(QRect(240, 330, 111, 19));
        checkBox_2->setChecked(true);
        label_9 = new QLabel(NewVersionWin);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(90, 380, 50, 13));
        comboBox_2 = new QComboBox(NewVersionWin);
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->setObjectName(QString::fromUtf8("comboBox_2"));
        comboBox_2->setGeometry(QRect(190, 380, 161, 22));

        retranslateUi(NewVersionWin);
        QObject::connect(buttonBox, SIGNAL(accepted()), NewVersionWin, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), NewVersionWin, SLOT(reject()));

        QMetaObject::connectSlotsByName(NewVersionWin);
    } // setupUi

    void retranslateUi(QDialog *NewVersionWin)
    {
        NewVersionWin->setWindowTitle(QCoreApplication::translate("NewVersionWin", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("NewVersionWin", "Creazione nuova versione", nullptr));
        label_2->setText(QCoreApplication::translate("NewVersionWin", "Inserire i parametri necessari per la creazione della nuova versione", nullptr));
        label_3->setText(QCoreApplication::translate("NewVersionWin", "Nome progetto", nullptr));
        label_4->setText(QCoreApplication::translate("NewVersionWin", "Nome versione", nullptr));
        label_5->setText(QCoreApplication::translate("NewVersionWin", "Numero", nullptr));
        resetNumberBtn->setText(QCoreApplication::translate("NewVersionWin", "azzera", nullptr));
        label_6->setText(QCoreApplication::translate("NewVersionWin", "Eredita", nullptr));
        fromWho->setItemText(0, QCoreApplication::translate("NewVersionWin", "Versione precedente", nullptr));
        fromWho->setItemText(1, QCoreApplication::translate("NewVersionWin", "Versione master", nullptr));
        fromWho->setItemText(2, QCoreApplication::translate("NewVersionWin", "Versione numero", nullptr));

        label_7->setText(QCoreApplication::translate("NewVersionWin", "Formato nome versione", nullptr));

        const bool __sortingEnabled = flagsList->isSortingEnabled();
        flagsList->setSortingEnabled(false);
        QListWidgetItem *___qlistwidgetitem = flagsList->item(0);
        ___qlistwidgetitem->setText(QCoreApplication::translate("NewVersionWin", "Nome progetto", nullptr));
        QListWidgetItem *___qlistwidgetitem1 = flagsList->item(1);
        ___qlistwidgetitem1->setText(QCoreApplication::translate("NewVersionWin", "Separatore", nullptr));
        QListWidgetItem *___qlistwidgetitem2 = flagsList->item(2);
        ___qlistwidgetitem2->setText(QCoreApplication::translate("NewVersionWin", "Numero versione maggiore", nullptr));
        QListWidgetItem *___qlistwidgetitem3 = flagsList->item(3);
        ___qlistwidgetitem3->setText(QCoreApplication::translate("NewVersionWin", "Separatore", nullptr));
        QListWidgetItem *___qlistwidgetitem4 = flagsList->item(4);
        ___qlistwidgetitem4->setText(QCoreApplication::translate("NewVersionWin", "Numero sottoversione", nullptr));
        QListWidgetItem *___qlistwidgetitem5 = flagsList->item(5);
        ___qlistwidgetitem5->setText(QCoreApplication::translate("NewVersionWin", "Separatore", nullptr));
        QListWidgetItem *___qlistwidgetitem6 = flagsList->item(6);
        ___qlistwidgetitem6->setText(QCoreApplication::translate("NewVersionWin", "Numero revisione", nullptr));
        QListWidgetItem *___qlistwidgetitem7 = flagsList->item(7);
        ___qlistwidgetitem7->setText(QCoreApplication::translate("NewVersionWin", "Fine dichiarazione", nullptr));
        flagsList->setSortingEnabled(__sortingEnabled);

        flagChose->setItemText(0, QCoreApplication::translate("NewVersionWin", "Numero versione maggiore", nullptr));
        flagChose->setItemText(1, QCoreApplication::translate("NewVersionWin", "Separatore", nullptr));
        flagChose->setItemText(2, QCoreApplication::translate("NewVersionWin", "Numero sottoversione", nullptr));
        flagChose->setItemText(3, QCoreApplication::translate("NewVersionWin", "Numero revisione", nullptr));
        flagChose->setItemText(4, QCoreApplication::translate("NewVersionWin", "Nome versione", nullptr));
        flagChose->setItemText(5, QCoreApplication::translate("NewVersionWin", "Nome progetto", nullptr));
        flagChose->setItemText(6, QCoreApplication::translate("NewVersionWin", "Fine dichiarazione", nullptr));

        pushButton_2->setText(QCoreApplication::translate("NewVersionWin", "Aggiungi", nullptr));
        pushButton_3->setText(QCoreApplication::translate("NewVersionWin", "Rimuovi", nullptr));
        pushButton_4->setText(QCoreApplication::translate("NewVersionWin", "Svuota", nullptr));
        label_8->setText(QCoreApplication::translate("NewVersionWin", "Numero elementi: ", nullptr));
        flagsCount->setText(QCoreApplication::translate("NewVersionWin", "0", nullptr));
        checkBox->setText(QCoreApplication::translate("NewVersionWin", "Informazioni creazione", nullptr));
        checkBox_2->setText(QCoreApplication::translate("NewVersionWin", "Modifica versione", nullptr));
        label_9->setText(QCoreApplication::translate("NewVersionWin", "Aggiungi a", nullptr));
        comboBox_2->setItemText(0, QCoreApplication::translate("NewVersionWin", "Progetto", nullptr));
        comboBox_2->setItemText(1, QCoreApplication::translate("NewVersionWin", "Strumento 1", nullptr));

    } // retranslateUi

};

namespace Ui {
    class NewVersionWin: public Ui_NewVersionWin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NEWVERSIONWIN_H
