#ifndef TIMER_LAB_MAINWINDOW_H
#define TIMER_LAB_MAINWINDOW_H


#include <QMainWindow>


namespace Ui {
    class MainWindow;
}

class MainWindow : public QMainWindow
{
Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_PlayButton_clicked();

    void on_StopButton_clicked();

    void on_numDateButton_clicked();

    void on_RevDateButton_clicked();

    void on_CharDateForm_clicked();

private:
    Ui::MainWindow *ui;
};


#endif //TIMER_LAB_MAINWINDOW_H
