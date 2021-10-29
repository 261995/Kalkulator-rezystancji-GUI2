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

    ui->Suma1_2->setVisible(false);
    ui->Suma2_2->setVisible(false);

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_R1_valueChanged(double arg1)
{
    ui->Suma1->setText(QString::number(arg1 + ui->R2->value() + ui->R3->value() + ui->R4->value() + ui->R5->value()));
}


void MainWindow::on_R2_valueChanged(double arg1)
{
    ui->Suma1->setText(QString::number(arg1 + ui->R1->value() + ui->R3->value() + ui->R4->value() + ui->R5->value()));
}

void MainWindow::on_R3_valueChanged(double arg1)
{
    ui->Suma1->setText(QString::number(arg1 + ui->R1->value() + ui->R2->value() + ui->R4->value() + ui->R5->value()));
}


void MainWindow::on_R4_valueChanged(double arg1)
{
    ui->Suma1->setText(QString::number(arg1 + ui->R1->value() + ui->R2->value() + ui->R3->value() + ui->R5->value()));
}


void MainWindow::on_R5_valueChanged(double arg1)
{
    ui->Suma1->setText(QString::number(arg1 + ui->R1->value() + ui->R2->value() + ui->R3->value() + ui->R4->value()));
}


void MainWindow::on_R1_2_valueChanged(double arg1)
{
    if (ui->R2_2->value()!=0)
    ui->Suma2->setText(QString::number(1/(1/arg1 + 1/ui->R2_2->value() + 1/ui->R3_2->value() + 1/ui->R4_2->value() + 1/ui->R5_2->value())));
    if (ui->R2_2->value()==0)
    ui->Suma2->setText(QString::number(arg1));
}


void MainWindow::on_R2_2_valueChanged(double arg1)
{
    if (ui->R3_2->value()!=0)
    ui->Suma2->setText(QString::number(1/(1/arg1 + 1/ui->R1_2->value() + 1/ui->R3_2->value() + 1/ui->R4_2->value() + 1/ui->R5_2->value())));
    if (ui->R3_2->value()==0)
    ui->Suma2->setText(QString::number(1/(1/arg1 + 1/ui->R1_2->value())));
    if (ui->R2_2->value()==0)
    ui->Suma2->setText(QString::number(1/(1/ui->R1_2->value())));

}



void MainWindow::on_R3_2_valueChanged(double arg1)
{
    if (ui->R4_2->value()!=0)
    ui->Suma2->setText(QString::number(1/(1/arg1 + 1/ui->R1_2->value() + 1/ui->R2_2->value() + 1/ui->R4_2->value() + 1/ui->R5_2->value())));
    if (ui->R4_2->value()==0)
    ui->Suma2->setText(QString::number(1/(1/arg1 + 1/ui->R1_2->value() + 1/ui->R2_2->value())));
    if (ui->R3_2->value()==0)
    ui->Suma2->setText(QString::number(1/(1/ui->R1_2->value() + 1/ui->R2_2->value())));
}


void MainWindow::on_R4_2_valueChanged(double arg1)
{
    if (ui->R5_2->value()!=0)
    ui->Suma2->setText(QString::number(1/(1/arg1 + 1/ui->R1_2->value() + 1/ui->R2_2->value() + 1/ui->R3_2->value() + 1/ui->R5_2->value())));
    if (ui->R5_2->value()==0)
    ui->Suma2->setText(QString::number(1/(1/arg1 + 1/ui->R1_2->value() + 1/ui->R2_2->value() + 1/ui->R3_2->value())));
    if (ui->R4_2->value()==0)
    ui->Suma2->setText(QString::number(1/(1/ui->R1_2->value() + 1/ui->R2_2->value() + 1/ui->R3_2->value())));
}


void MainWindow::on_R5_2_valueChanged(double arg1)
{
    ui->Suma2->setText(QString::number(1/(1/arg1 + 1/ui->R1_2->value() + 1/ui->R2_2->value() + 1/ui->R4_2->value() + 1/ui->R5_2->value())));
    if (ui->R5_2->value()==0)
    ui->Suma2->setText(QString::number(1/(1/ui->R1_2->value() + 1/ui->R2_2->value() + 1/ui->R3_2->value() + 1/ui->R4_2->value())));
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
    }
    if (i==2)
    {
        ui->R4->setVisible(true);
    }
    if (i==3)
    {
        ui->R5->setVisible(true);
    }
    if (i==3)
    {
        ui->R5->setVisible(true);
    }
    if (i==4)
    {
        ui->R5->setVisible(false);
        ui->R5->setValue(0);
    }
    if (i==5)
    {
        ui->R4->setVisible(false);
        ui->R4->setValue(0);
    }
    if (i==6)
    {
        ui->R3->setVisible(false);
        ui->R3->setValue(0);
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
    }
    if (j==2)
    {
        ui->R4_2->setVisible(true);
    }
    if (j==3)
    {
        ui->R5_2->setVisible(true);
    }
    if (j==4)
    {
        ui->R5_2->setVisible(false);
        ui->R5_2->setValue(0);
    }
    if (j==5)
    {
        ui->R4_2->setVisible(false);
        ui->R4_2->setValue(0);
    }
    if (j==6)
    {
        ui->R3_2->setVisible(false);
        ui->R3_2->setValue(0);
        j=0;
    }
}

