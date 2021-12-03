#include "mainwindow.h"
#include <iostream>
#include <QApplication>
#include <vector>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    return a.exec();
}

class Dzialania
{
    QVector<float> szeregowo;
    QVector<float> rownolegle;
    QStringList nazwyR = {double R1, double R2, double R3, double R4, double R5};

    void dodaj_szeregowo(QVector<float> szeregowo, QList<QString> nazwyR)
    {
        for (int i = 0; i < nazwyR.size(); i++)
            if (nazwyR.at(i) != "")
            {
            szeregowo.push_back(nazwyR.at(i));
            }
            else
            {
            return;
            }
    }

    void dodaj_rownolegle(QVector<float> rownolegle, QList<QString> nazwyR)
    {
        for (int i = 0; i < nazwyR.size(); i++)
            if (nazwyR.at(i) != "")
            {
            rownolegle.push_back(nazwyR.at(i));
            }
            else
            {
            return;
            }
    }


    void dodawanie_szeregowo(QVector<float> szeregowo)
            for (int i = 0; i < szeregowo.size();  i++)
                if (szeregowo(i) != 0)
                {
                SumaS = Suma + szeregowo(i);
                }
                else
                {
                break;
                }


};
