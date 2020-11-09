/*
 * File theme_selector.cpp
 * gestisce la selezione e la creazione dei colori per i temi della interfaccia
 *
 */

#ifndef THEME_SELECT
#define THEME_SELECT

#include <QPalette>
#include <QColor>
#include <QBrush>
#include "logicviewpalette.h"
#include <QFile>
#include <QTextStream>
#include <QDir>
#include <QMessageBox>

/// Definisce il codice di errore del caricamento temi
#define LOADING_ERROR_CODE 11201
/// Definisce il codice di successo nel caricamento temi
#define LOADING_SUCCESS_CODE 0

/// contiene il foglio di stile del tema scuro
static QString dark_style_sheet = "";

/// Contiene il foglio di stile del tema chiaro
static QString light_style_sheet = "";

/// Colori per il parser
static LogicViewPalette dark_theme_parser;

/// Effettua il caricamento dei temi
static int loadThemes(){
    // percorso del file tema scuro
    QString dark_path = QDir::currentPath() + "/dark_theme.qss";
    // percorso del file tema chiaro
    QString light_path = QDir::currentPath() + "/light_theme.qss";

    // carico il dark
    QFile dark(dark_path);

    // controllo l'apertura del file
    if(dark.open(QIODevice::ReadOnly)){
        // creo uno strem di lettura
        QTextStream str (&dark);
        // leggo tutto i lfile
        dark_style_sheet = str.readAll();
        // chiudo il file
        dark.close();
    }
    else{
        // do errore con un messagebox
        QMessageBox *msg = new QMessageBox();
        msg->setText("Errore: impossibile trovare il file dark_theme.qss nella "
                     "cartella del programma. \nPercorso di ricerca: " +
                     dark_path + " \nQuesto rende impossibile l'utilizzo del programma"
                    "con un tema scuro. Continuare con l'utilizzo del programma? ");
        msg->setIcon(QMessageBox::Critical);
        msg->setWindowTitle("Errore di caricamento tema scuro. ");
        msg->setStandardButtons(QMessageBox::No);
        msg->addButton(QMessageBox::Yes);
        int result = msg->exec();

        // controllo il risultato
        if(result == QMessageBox::Accepted){
            return LOADING_ERROR_CODE;
        }
        else{

        }
    }

    // carico il file light
    QFile light(light_path);

    // controllo l'apertura
    if(light.open(QIODevice::ReadOnly)){
        QTextStream str(&light);
        light_style_sheet = str.readAll();
        light.close();
    }
    else{
        // do errore con un messagebox
        QMessageBox *msg = new QMessageBox();
        msg->setText("Errore: impossibile trovare il file light_theme.qss nella "
                     "cartella del programma. \nPercorso di ricerca: " +
                     light_path + " \nQuesto rende impossibile l'utilizzo del programma"
                    "con un tema chiaro. Continuare con l'utilizzo del programma? ");
        msg->setIcon(QMessageBox::Critical);
        msg->setWindowTitle("Errore di caricamento tema chiaro. ");
        msg->setStandardButtons(QMessageBox::No);
        msg->addButton(QMessageBox::Yes);
        int result = msg->exec();

        // controllo il risultato
        if(result == QMessageBox::Accepted){
            return LOADING_ERROR_CODE;
        }
        else{
            return LOADING_SUCCESS_CODE;
        }
    }
}

/// Crea la palette per la visualizzazione degli oggetti logici del progetto
static void loadLogicPalette(){
    QColor dark_gray = QColor::fromRgb(100, 100, 100);
    dark_theme_parser.setClassBackground(dark_gray);
    dark_theme_parser.setClassForeground(Qt::blue);
    dark_theme_parser.setFunctionBackground(dark_gray);
    dark_theme_parser.setFunctionForeground(Qt::red);
    dark_theme_parser.setConstructorBackground(dark_gray.lighter());
    dark_theme_parser.setConstructorForeground(Qt::green);
}

#endif
