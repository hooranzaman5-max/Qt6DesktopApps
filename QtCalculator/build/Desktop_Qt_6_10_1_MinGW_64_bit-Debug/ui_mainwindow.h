/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QPushButton *btn_sub;
    QPushButton *btn_clear;
    QPushButton *btn_add;
    QPushButton *btn_0;
    QPushButton *btn_1;
    QPushButton *btn_5;
    QPushButton *btn_mul;
    QPushButton *btn_7;
    QPushButton *btn_3;
    QLineEdit *display;
    QPushButton *btn_4;
    QPushButton *btn_div;
    QPushButton *btn_2;
    QPushButton *btn_8;
    QPushButton *btn_6;
    QPushButton *btn_9;
    QPushButton *btn_dec;
    QPushButton *btn_equals;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName("gridLayout");
        btn_sub = new QPushButton(centralwidget);
        btn_sub->setObjectName("btn_sub");

        gridLayout->addWidget(btn_sub, 5, 1, 1, 1);

        btn_clear = new QPushButton(centralwidget);
        btn_clear->setObjectName("btn_clear");

        gridLayout->addWidget(btn_clear, 4, 3, 1, 1);

        btn_add = new QPushButton(centralwidget);
        btn_add->setObjectName("btn_add");

        gridLayout->addWidget(btn_add, 5, 0, 1, 1);

        btn_0 = new QPushButton(centralwidget);
        btn_0->setObjectName("btn_0");

        gridLayout->addWidget(btn_0, 1, 0, 1, 1);

        btn_1 = new QPushButton(centralwidget);
        btn_1->setObjectName("btn_1");

        gridLayout->addWidget(btn_1, 1, 1, 1, 2);

        btn_5 = new QPushButton(centralwidget);
        btn_5->setObjectName("btn_5");

        gridLayout->addWidget(btn_5, 2, 3, 1, 1);

        btn_mul = new QPushButton(centralwidget);
        btn_mul->setObjectName("btn_mul");

        gridLayout->addWidget(btn_mul, 5, 3, 1, 1);

        btn_7 = new QPushButton(centralwidget);
        btn_7->setObjectName("btn_7");

        gridLayout->addWidget(btn_7, 3, 1, 1, 2);

        btn_3 = new QPushButton(centralwidget);
        btn_3->setObjectName("btn_3");

        gridLayout->addWidget(btn_3, 2, 0, 1, 1);

        display = new QLineEdit(centralwidget);
        display->setObjectName("display");

        gridLayout->addWidget(display, 0, 0, 1, 4);

        btn_4 = new QPushButton(centralwidget);
        btn_4->setObjectName("btn_4");

        gridLayout->addWidget(btn_4, 2, 1, 1, 2);

        btn_div = new QPushButton(centralwidget);
        btn_div->setObjectName("btn_div");

        gridLayout->addWidget(btn_div, 5, 2, 1, 1);

        btn_2 = new QPushButton(centralwidget);
        btn_2->setObjectName("btn_2");

        gridLayout->addWidget(btn_2, 1, 3, 1, 1);

        btn_8 = new QPushButton(centralwidget);
        btn_8->setObjectName("btn_8");

        gridLayout->addWidget(btn_8, 3, 3, 1, 1);

        btn_6 = new QPushButton(centralwidget);
        btn_6->setObjectName("btn_6");

        gridLayout->addWidget(btn_6, 3, 0, 1, 1);

        btn_9 = new QPushButton(centralwidget);
        btn_9->setObjectName("btn_9");

        gridLayout->addWidget(btn_9, 4, 1, 1, 2);

        btn_dec = new QPushButton(centralwidget);
        btn_dec->setObjectName("btn_dec");

        gridLayout->addWidget(btn_dec, 4, 0, 1, 1);

        btn_equals = new QPushButton(centralwidget);
        btn_equals->setObjectName("btn_equals");

        gridLayout->addWidget(btn_equals, 7, 1, 1, 2);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 30));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        btn_sub->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
        btn_clear->setText(QCoreApplication::translate("MainWindow", "C", nullptr));
        btn_add->setText(QCoreApplication::translate("MainWindow", "+", nullptr));
        btn_0->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        btn_1->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
        btn_5->setText(QCoreApplication::translate("MainWindow", "5", nullptr));
        btn_mul->setText(QCoreApplication::translate("MainWindow", "*", nullptr));
        btn_7->setText(QCoreApplication::translate("MainWindow", "7", nullptr));
        btn_3->setText(QCoreApplication::translate("MainWindow", "3", nullptr));
        btn_4->setText(QCoreApplication::translate("MainWindow", "4", nullptr));
        btn_div->setText(QCoreApplication::translate("MainWindow", "/", nullptr));
        btn_2->setText(QCoreApplication::translate("MainWindow", "2", nullptr));
        btn_8->setText(QCoreApplication::translate("MainWindow", "8", nullptr));
        btn_6->setText(QCoreApplication::translate("MainWindow", "6", nullptr));
        btn_9->setText(QCoreApplication::translate("MainWindow", "9", nullptr));
        btn_dec->setText(QCoreApplication::translate("MainWindow", ".", nullptr));
        btn_equals->setText(QCoreApplication::translate("MainWindow", "=", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
