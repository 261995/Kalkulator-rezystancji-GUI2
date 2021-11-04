#include "mainwindow.h"
#include "ui_mainwindow.h"

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

    connect(ui->Szeregowo,SIGNAL(released()),this,SLOT(button_pressed1()));
    connect(ui->Rownolegle,SIGNAL(released()),this,SLOT(button_pressed2()));

}

MainWindow::~MainWindow()
{
    delete ui;
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

void MainWindow::button_pressed1()
{
    R1 = ui->R1->value();
    R2 = ui->R1->value();
    R3 = ui->R1->value();
    R4 = ui->R1->value();
    R5 = ui->R1->value();

    if (ui->R3->value()==0)
    Suma11 = R1 + R2;
    else if (ui->R4->value()==0)
    Suma11 = R1 + R2 + R3;
    else if (ui->R5->value()==0)
    Suma11 = R1 + R2 + R3 + R4;
    else
    Suma11 = R1 + R2 + R3 + R4 + R5;

    QString nowaSuma;

    nowaSuma = QString::number(Suma11);

    ui->Suma1->setText(nowaSuma);

}

void MainWindow::button_pressed2()
{
    R1_2 = ui->R1->value();
    R2_2 = ui->R1->value();
    R3_2 = ui->R1->value();
    R4_2 = ui->R1->value();
    R5_2 = ui->R1->value();

    Suma22 = R1_2 + R2_2 + R3_2 + R4_2 + R5_2;

    QString nowaSuma;

    nowaSuma = QString::number(Suma22);

    ui->Suma2->setText(nowaSuma);

}
