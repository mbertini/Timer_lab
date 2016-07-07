#ifndef TIMER_LAB_UI_MAINWINDOW_H
#define TIMER_LAB_UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionNumeric_Date;
    QAction *actionReverse_Date;
    QAction *actionCharacter_Dare;
    QWidget *centralWidget;
    QPushButton *PlayButton;
    QPushButton *PauseButton;
    QPushButton *StopButton;
    QPushButton *numDateButton;
    QPushButton *RevDateButton;
    QPushButton *CharDateForm;
    QLabel *DateLabel;
    QLabel *TimeLabel;
    QLabel *timerLabel;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(660, 300);
        actionNumeric_Date = new QAction(MainWindow);
        actionNumeric_Date->setObjectName(QStringLiteral("actionNumeric_Date"));
        actionReverse_Date = new QAction(MainWindow);
        actionReverse_Date->setObjectName(QStringLiteral("actionReverse_Date"));
        actionCharacter_Dare = new QAction(MainWindow);
        actionCharacter_Dare->setObjectName(QStringLiteral("actionCharacter_Dare"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        PlayButton = new QPushButton(centralWidget);
        PlayButton->setObjectName(QStringLiteral("PlayButton"));
        PlayButton->setGeometry(QRect(260, 150, 93, 28));
        PauseButton = new QPushButton(centralWidget);
        PauseButton->setObjectName(QStringLiteral("PauseButton"));
        PauseButton->setGeometry(QRect(430, 150, 121, 28));
        StopButton = new QPushButton(centralWidget);
        StopButton->setObjectName(QStringLiteral("StopButton"));
        StopButton->setGeometry(QRect(320, 190, 141, 41));
        numDateButton = new QPushButton(centralWidget);
        numDateButton->setObjectName(QStringLiteral("numDateButton"));
        numDateButton->setGeometry(QRect(0, 0, 93, 28));
        RevDateButton = new QPushButton(centralWidget);
        RevDateButton->setObjectName(QStringLiteral("RevDateButton"));
        RevDateButton->setGeometry(QRect(0, 30, 93, 28));
        CharDateForm = new QPushButton(centralWidget);
        CharDateForm->setObjectName(QStringLiteral("CharDateForm"));
        CharDateForm->setGeometry(QRect(0, 60, 93, 28));
        DateLabel = new QLabel(centralWidget);
        DateLabel->setObjectName(QStringLiteral("DateLabel"));
        DateLabel->setGeometry(QRect(110, 10, 141, 41));
        TimeLabel = new QLabel(centralWidget);
        TimeLabel->setObjectName(QStringLiteral("TimeLabel"));
        TimeLabel->setGeometry(QRect(110, 60, 111, 16));
        timerLabel = new QLabel(centralWidget);
        timerLabel->setObjectName(QStringLiteral("timerLabel"));
        timerLabel->setGeometry(QRect(280, 40, 221, 61));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 660, 26));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Timer", 0));
        actionNumeric_Date->setText(QApplication::translate("MainWindow", "Numeric Date", 0));
        actionReverse_Date->setText(QApplication::translate("MainWindow", "Reverse Date", 0));
        actionCharacter_Dare->setText(QApplication::translate("MainWindow", "Character Dare", 0));
        PlayButton->setText(QApplication::translate("MainWindow", "Play", 0));
        PauseButton->setText(QApplication::translate("MainWindow", "Press F1 to Pause", 0));
        StopButton->setText(QApplication::translate("MainWindow", "Press ESC to stop\n"
                "Click to RESTART", 0));
        numDateButton->setText(QApplication::translate("MainWindow", "Numeric Date", 0));
        RevDateButton->setText(QApplication::translate("MainWindow", "Reverse Date", 0));
        CharDateForm->setText(QApplication::translate("MainWindow", "Character Date", 0));
        DateLabel->setText(QApplication::translate("MainWindow", "Date", 0));
        TimeLabel->setText(QApplication::translate("MainWindow", "Time", 0));
        timerLabel->setText(QApplication::translate("MainWindow", "timer", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif //TIMER_LAB_UI_MAINWINDOW_H
