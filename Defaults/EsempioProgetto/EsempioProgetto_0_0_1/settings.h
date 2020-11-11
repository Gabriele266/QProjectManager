#ifndef SETTINGS_H
#define SETTINGS_H

#include <QString>
#include <QFile>
#include <QTextStream>

/// Rappresenta le impostazioni dell' ambiente
class Settings
{
public:
    Settings();

private:
    // definisce se semplificare i nomi dei file nelle visualizzazioni sostituendo
    bool simplify_file_names;
};

#endif // SETTINGS_H
