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

private slots:

    void valueChanged();

    void on_R1_valueChanged(double arg1);

    void on_R2_valueChanged(double arg1);

    void on_R3_valueChanged(double arg1);

    void on_R4_valueChanged(double arg1);

    void on_R5_valueChanged(double arg1);

    void on_R1_2_valueChanged(double arg1);

    void on_R2_2_valueChanged(double arg1);

    void on_R3_2_valueChanged(double arg1);

    void on_R4_2_valueChanged(double arg1);

    void on_R5_2_valueChanged(double arg1);

    void on_czysc_clicked();

    void on_dodatkowe_clicked();

    void on_czysc_2_clicked();

    void on_dodatkowe_2_clicked();
private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
