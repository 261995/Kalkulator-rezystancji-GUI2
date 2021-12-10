#ifndef DZIALANIA_H
#define DZIALANIA_H
#include "mainwindow.h"
#include <string>
#include <iostream>

class Dzialania
{
    public:

        QVector<double> szeregowo;
        QVector<double> rownolegle;
        QList<double> rezystory;
        QList<double> rezystory_R;

        void dodaj_szeregowo(QList<double> rezystory);

        void dodaj_rownolegle(QList<double> rezystory_R);


        void dodawanie_szeregowo(double SumaS);

        void dodawanie_rownolegle(double SumaR);


    private:

        void constr_func(double R1, double R2, double R3, double R4, double R5);
        void constr_func2(double R1_2, double R2_2, double R3_2, double R4_2, double R5_2);


};

#endif // DZIALANIA_H
