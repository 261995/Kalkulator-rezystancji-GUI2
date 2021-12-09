#include <vector>
#include "mainwindow.h"

class Dzialania
{
    QVector<double> szeregowo;
    QVector<double> rownolegle;
    QList<double> rezystory;
    QList<double> rezystory_R;

void constr_func(double R1, double R2, double R3, double R4, double R5){
rezystory << R1 << R2 << R3 << R4 << R5;
}


    void dodaj_szeregowo(QVector<double> szeregowo, QList<double> rezystory)
    {
        for (int i = 0; i < rezystory.size(); i++)
            if (rezystory[i] != 0)
                szeregowo.push_back(rezystory.at(i));
            else
                return;
    }

    void dodaj_rownolegle(QVector<double> rownolegle, QList<double> rezystory_R)
    {
        for (int i = 0; i < rezystory_R.size(); i++)
            if (rezystory_R.at(i) != 0)
                rownolegle.append(rezystory_R.at(i));
            else
                return;
    }


    void dodawanie_szeregowo(QVector<double> szeregowo, double SumaS){
            for (int i = 0; i < szeregowo.size();  i++)
                if (szeregowo[i] != 0)
                    SumaS = SumaS + szeregowo[i];
                else
                    break;
    }

    void dodawanie_rownolegle(QVector<double> rownolegle, double SumaR){
            for (int i = 0; i < rownolegle.size();  i++)
                if (rownolegle[i] != 0)
                    SumaR = SumaR + rownolegle[i];
                else
                    break;
    }





};
