#include "mainwindow.h"
#include "dzialania.h"
#include "ui_mainwindow.h"
#include <QFile>
#include <QTextStream>
#include <QCoreApplication>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{

    ui->setupUi(this);


    ui->R3->setVisible(false);
    ui->R4->setVisible(false);
    ui->R5->setVisible(false);

    ui->I3->setVisible(false);
    ui->I4->setVisible(false);
    ui->I5->setVisible(false);

    ui->R3_2->setVisible(false);
    ui->R4_2->setVisible(false);
    ui->R5_2->setVisible(false);

    ui->I3_2->setVisible(false);
    ui->I4_2->setVisible(false);
    ui->I5_2->setVisible(false);

}


void MainWindow::on_czysc_clicked()
{
    ui->R1->setValue(0);
    ui->R2->setValue(0);
    ui->R3->setValue(0);
    ui->R4->setValue(0);
    ui->R5->setValue(0);

}


void MainWindow::on_dodatkowe_clicked()
{
    i++;
    if (i==1)
    {
        ui->R3->setVisible(true);
        ui->I3->setVisible(true);
    }
    if (i==2)
    {
        ui->R4->setVisible(true);
        ui->I4->setVisible(true);
    }
    if (i==3)
    {
        ui->R5->setVisible(true);
        ui->I5->setVisible(true);
    }
    if (i==4)
    {
        ui->R5->setVisible(false);
        ui->R5->setValue(0);
        ui->I5->setVisible(false);
    }
    if (i==5)
    {
        ui->R4->setVisible(false);
        ui->R4->setValue(0);
        ui->I4->setVisible(false);
    }
    if (i==6)
    {
        ui->R3->setVisible(false);
        ui->R3->setValue(0);
        ui->I3->setVisible(false);
        i=0;
    }

}


void MainWindow::on_czysc_2_clicked()
{
    ui->R1_2->setValue(0);
    ui->R2_2->setValue(0);
    ui->R3_2->setValue(0);
    ui->R4_2->setValue(0);
    ui->R5_2->setValue(0);
}


void MainWindow::on_dodatkowe_2_clicked()
{
    j++;
    if (j==1)
    {
        ui->R3_2->setVisible(true);
        ui->I3_2->setVisible(true);
    }
    if (j==2)
    {
        ui->R4_2->setVisible(true);
        ui->I4_2->setVisible(true);
    }
    if (j==3)
    {
        ui->R5_2->setVisible(true);
        ui->I5_2->setVisible(true);
    }
    if (j==4)
    {
        ui->R5_2->setVisible(false);
        ui->R5_2->setValue(0);
        ui->I5_2->setVisible(false);
    }
    if (j==5)
    {
        ui->R4_2->setVisible(false);
        ui->R4_2->setValue(0);
        ui->I4_2->setVisible(false);
    }
    if (j==6)
    {
        ui->R3_2->setVisible(false);
        ui->R3_2->setValue(0);
        ui->I3_2->setVisible(false);
        j=0;
    }
}

QString filename1 = "F:\\261995\\Kalkulator-rezystancji-GUI\\wynik_szeregowo.txt";
QString filename2 = "F:\\261995\\Kalkulator-rezystancji-GUI\\wynik_rownolegle.txt";

bool writeFile1(QString filename1, double SumaS)
{
    QFile file(filename1);
    if(!file.open(QIODevice::WriteOnly))
    {
        qCritical() << "Could not open the file!";
        qCritical() << file.errorString();
        return false;
    }

    QTextStream stream(&file);

    stream << QString::number(0) <<  SumaS;
    return true;
}

void MainWindow::on_Write1_clicked()
{
    writeFile1(filename1, SumaS);
}

bool writeFile2(QString filename2, double SumaR)
{
    QFile file(filename2);
    if(!file.open(QIODevice::WriteOnly))
    {
        qCritical() << "Could not open the file!";
        qCritical() << file.errorString();
        return false;
    }

    QTextStream stream(&file);

    stream << QString::number(0) <<  SumaR;
    return true;
}

void MainWindow::on_Write2_clicked()
{
    writeFile2(filename2, SumaR);
}


void MainWindow::on_Szeregowo_clicked()
{
    Dzialania szeregowo;
    SumaS=0;
    szeregowo.dodaj_szeregowo({R1, R2, R3, R4, R5});
    SumaS = szeregowo.dodawanie_szeregowo(SumaS);
    ui->Suma1->setNum(SumaS);
}


void MainWindow::on_Rownolegle_clicked()
{
    Dzialania rownolegle;
    SumaR=0;
    rownolegle.dodaj_rownolegle({R1_2, R2_2, R3_2, R4_2, R5_2});
    SumaR = rownolegle.dodawanie_rownolegle(SumaR);
    ui->Suma2->setNum(SumaR);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_R1_valueChanged(double R1)
{
    this->R1 = R1;
}

void MainWindow::on_R2_valueChanged(double R2)
{
    this->R2 = R2;
}

void MainWindow::on_R3_valueChanged(double R3)
{
    this->R3 = R3;
}

void MainWindow::on_R4_valueChanged(double R4)
{
    this->R4 = R4;
}

void MainWindow::on_R5_valueChanged(double R5)
{
    this->R5 = R5;
}

void MainWindow::on_R1_2_valueChanged(double R1_2)
{
    this->R1_2 = R1_2;
}

void MainWindow::on_R2_2_valueChanged(double R2_2)
{
    this->R2_2 = R2_2;
}

void MainWindow::on_R3_2_valueChanged(double R3_2)
{
    this->R3_2 = R3_2;
}

void MainWindow::on_R4_2_valueChanged(double R4_2)
{
    this->R4_2 = R4_2;
}

void MainWindow::on_R5_2_valueChanged(double R5_2)
{
    this->R5_2 = R5_2;
}
