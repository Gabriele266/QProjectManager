/********************************************************************************
** Form generated from reading UI file 'projectinfowin.ui'
**
** Created by: Qt User Interface Compiler version 5.15.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PROJECTINFOWIN_H
#define UI_PROJECTINFOWIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>

QT_BEGIN_NAMESPACE

class Ui_ProjectInfoWin
{
public:
    QDialogButtonBox *buttonBox;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLineEdit *lineEdit;
    QLabel *label_4;

    void setupUi(QDialog *ProjectInfoWin)
    {
        if (ProjectInfoWin->objectName().isEmpty())
            ProjectInfoWin->setObjectName(QString::fromUtf8("ProjectInfoWin"));
        ProjectInfoWin->resize(640, 480);
        buttonBox = new QDialogButtonBox(ProjectInfoWin);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setGeometry(QRect(10, 440, 621, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        label = new QLabel(ProjectInfoWin);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(170, 30, 239, 27));
        QFont font;
        font.setFamily(QString::fromUtf8("MS PGothic"));
        font.setPointSize(20);
        label->setFont(font);
        label_2 = new QLabel(ProjectInfoWin);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(170, 70, 450, 38));
        label_3 = new QLabel(ProjectInfoWin);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(50, 160, 72, 13));
        lineEdit = new QLineEdit(ProjectInfoWin);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(150, 160, 201, 21));
        label_4 = new QLabel(ProjectInfoWin);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(50, 230, 104, 13));

        retranslateUi(ProjectInfoWin);
        QObject::connect(buttonBox, SIGNAL(accepted()), ProjectInfoWin, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), ProjectInfoWin, SLOT(reject()));

        QMetaObject::connectSlotsByName(ProjectInfoWin);
    } // setupUi

    void retranslateUi(QDialog *ProjectInfoWin)
    {
        ProjectInfoWin->setWindowTitle(QCoreApplication::translate("ProjectInfoWin", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("ProjectInfoWin", "Informazioni progetto", nullptr));
        label_2->setText(QCoreApplication::translate("ProjectInfoWin", "<html><head/><body><p>Un progetto pu\303\262 contenere delle versioni e delle informazioni</p><p>Viene salvato all' interno di un file con estensione .prjm insieme a tutte le informazioni relative.</p></body></html>", nullptr));
        label_3->setText(QCoreApplication::translate("ProjectInfoWin", "Nome progetto", nullptr));
#if QT_CONFIG(tooltip)
        lineEdit->setToolTip(QCoreApplication::translate("ProjectInfoWin", "<html><head/><body><p>Nome associato al progetto.</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        label_4->setText(QCoreApplication::translate("ProjectInfoWin", "Percorso del progetto", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ProjectInfoWin: public Ui_ProjectInfoWin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PROJECTINFOWIN_H
