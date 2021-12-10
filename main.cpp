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

void obliczenia(double R1, double R2, double R3, double R4, double R5, double R1_2, double R2_2, double R3_2, double R4_2, double R5_2, double SumaS, double SumaR)
{
    Dzialania szeregowo;
    szeregowo.dodaj_szeregowo({R1, R2, R3, R4, R5});
    szeregowo.dodawanie_szeregowo(SumaS);

    Dzialania rownolegle;
    rownolegle.dodaj_rownolegle({R1_2, R2_2, R3_2, R4_2, R5_2});
    rownolegle.dodawanie_rownolegle(SumaR);

}
