#include "mainwindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{

    /*
    Date a;
    a.DateNumForm();
    a.DateCharForm();
    a.DateReverseForm();

    a.showTime();

    Timer t;
    t.Start();
    */


    QApplication a(argc, argv);
    MainWindow w;
    w.show();


    return a.exec();
}