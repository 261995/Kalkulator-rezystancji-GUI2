#include "mainwindow.h"
#include <iostream>
#include <QApplication>
#include "dzialania.h"
#include "ui_mainwindow.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    return a.exec();

}
