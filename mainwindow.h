#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    int i = 0;
    int j = 0;
    ~MainWindow();

    double R1;
    double R2;
    double R3;
    double R4;
    double R5;

    double R1_2;
    double R2_2;
    double R3_2;
    double R4_2;
    double R5_2;

    double SumaS;
    double SumaR;


private slots:

    void on_czysc_clicked();

    void on_dodatkowe_clicked();

    void on_czysc_2_clicked();

    void on_dodatkowe_2_clicked();

    void on_Write1_clicked();

    void on_Write2_clicked();

    void on_Szeregowo_clicked(double SumaS,double R1,double R2,double R3,double R4,double R5);

    void on_Rownolegle_clicked(double SumaR,double R1_2,double R2_2,double R3_2,double R4_2,double R5_2);

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
