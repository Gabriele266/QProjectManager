#include "mainwindow.h"

#include <QApplication>
#include "theme_selector.cpp"
#include <QDir>

int main(int argc, char *argv[])
{
        QApplication a(argc, argv);
        MainWindow w;

        w.show();
        return a.exec();
}
