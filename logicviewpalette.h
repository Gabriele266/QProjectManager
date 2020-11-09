#ifndef LOGICVIEWPALETTE_H
#define LOGICVIEWPALETTE_H

#include <QPalette>
#include <QColor>

/// Rappresenta una paletta per modificare i colori della visualizzazione oggetti
class LogicViewPalette : public QPalette
{
public:
    LogicViewPalette();

    /// Imposta lo sfondo delle classi
    void setClassBackground(QColor color);

    /// Imposta il colore di sfondo delle funzioni
    void setFunctionBackground(QColor color);

    /// Imposta il colore del testo delle funzioni
    void setFunctionForeground(QColor color);

    /// Imposta il colore del testo della classe
    void setClassForeground(QColor color);

    /// Imposta il colore testo del costruttore
    void setConstructorForeground(QColor color);

    /// Imposta il colore di sfondo del costruttore
    void setConstructorBackground(QColor color);

    /// Restituisce il colore di sfondo delle funzioni
    QColor getFunctionBackground();

    /// Restituisce il colore di sfondo delle classi
    QColor getClassBackground();

    /// Restituisce il colore di sfondo dei costruttori
    QColor getConstructorBackground();

    /// Restituisce il colore del testo della classe
    QColor getClassForeground();

    /// Restituisce il colore del testo delle funzioni
    QColor getFunctionForeground();

    /// Restituisce il colore di sfondo dei costruttori
    QColor getConstructorForeground();
private:
    // sfondo delle classi
    QColor class_background;
    // sfondo delle funzioni
    QColor function_background;
    // sfondo costruttori
    QColor constructor_background;

    // colore testo funzioni
    QColor function_foreground;
    // colore testo classi
    QColor class_foreground;
    // colore testo costruttori
    QColor constructor_foreground;

};

#endif // LOGICVIEWPALETTE_H
