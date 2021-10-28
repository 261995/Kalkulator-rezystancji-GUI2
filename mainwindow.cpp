#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

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
    ui->R1_2->setValue(0);
    ui->R2_2->setValue(0);
    ui->R3_2->setValue(0);
    ui->R4_2->setValue(0);
    ui->R5_2->setValue(0);
}

