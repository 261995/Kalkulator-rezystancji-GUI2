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

    connect(ui->Szeregowo,SIGNAL(released()),this,SLOT(Szeregowo_clicked()));
    connect(ui->Rownolegle,SIGNAL(released()),this,SLOT(Rownolegle_clicked2()));

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



void MainWindow::on_Szeregowo_clicked(double SumaS)
{ 
    ui->Suma1->setNum(SumaS);

}


void MainWindow::on_Rownolegle_clicked(double SumaR)
{
    ui->Suma2->setNum(SumaR);
}

MainWindow::~MainWindow()
{
    delete ui;
}
