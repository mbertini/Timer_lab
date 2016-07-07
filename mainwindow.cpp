#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "Timer.h"
#include "Date.h"

Timer t;
Date d;

MainWindow::MainWindow(QWidget *parent) :
        QMainWindow(parent),
        ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_PlayButton_clicked()
{
    t.Start();
}

void MainWindow::on_StopButton_clicked()
{
    t.Stop();
}

void MainWindow::on_numDateButton_clicked()
{
    d.DateNumForm();
}

void MainWindow::on_RevDateButton_clicked()
{
    d.DateReverseForm();
}

void MainWindow::on_CharDateForm_clicked()
{
    d.DateCharForm();
}


