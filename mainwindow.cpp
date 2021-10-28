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
    ui->R8->setVisible(false);
    ui->R9->setVisible(false);
    ui->R10->setVisible(false);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_R1_valueChanged(double arg1)
{
    ui->Suma1->setText(QString::number(arg1 + ui->R2 + ui ->R1 ->value()));
}


void MainWindow::on_R2_valueChanged(double arg1)
{
    ui->Suma1->setText(QString::number(arg1 + ui->R1->value()));
}
