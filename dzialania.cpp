#include <vector>
#include <iostream>
#include "mainwindow.h"
#include "dzialania.h"



void Dzialania::constr_func(double R1, double R2, double R3, double R4, double R5){
    rezystory << R1 << R2 << R3 << R4 << R5;
}

void Dzialania::constr_func2(double R1_2, double R2_2, double R3_2, double R4_2, double R5_2){
    rezystory_R << R1_2 << R2_2 << R3_2 << R4_2 << R5_2;
}


void Dzialania::dodaj_szeregowo(QList<double> rezystory)
{
    for (int i = 0; i < rezystory.size(); i++)
        if (rezystory[i] != 0)
            szeregowo.push_back(rezystory.at(i));
        else
            return;
}

void Dzialania::dodaj_rownolegle(QList<double> rezystory_R)
{
    for (int i = 0; i < rezystory_R.size(); i++)
        if (rezystory_R.at(i) != 0)
            rownolegle.append(rezystory_R.at(i));
        else
            return;
}


void Dzialania::dodawanie_szeregowo(double SumaS){
    for (int i = 0; i < szeregowo.size();  i++)
        if (szeregowo[i] != 0)
            SumaS = SumaS + szeregowo[i];
        else
            break;
}

void Dzialania::dodawanie_rownolegle(double SumaR){
    for (int i = 0; i < rownolegle.size();  i++)
        if (rownolegle[i] != 0)
            SumaR = SumaR + (1/rownolegle[i]);
        else
            break;
}
