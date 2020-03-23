/// Preprocessor Directives
#include "mainwindow.h"
#include <QApplication>

/// Main.cpp
int main(int argc, char *argv[])
{
    // Start Application
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    return a.exec();
    // End application
} // end main
