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
#include <QtWidgets/QLabel>
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
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit_3;
    QPushButton *pushButton;
    QPushButton *pushButton2;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(130, 10, 371, 31));
        label->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	font: 9pt \"Segoe UI\";\n"
"    color: rgb(70, 153, 123);\n"
"    font-size: 20px;\n"
"    font-weight: 600;\n"
"    font-family: \"Segoe UI\", \"Inter\", \"Roboto\", \"Helvetica Neue\", Arial, sans-serif;\n"
"    qproperty-alignment: AlignHCenter;;\n"
"}\n"
""));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(20, 60, 121, 31));
        label_2->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    font-family: \"Segoe UI\", \"Inter\";\n"
"    font-size: 13.5px;\n"
"    font-weight: 600;\n"
"	color: rgb(0, 0, 0);\n"
"}\n"
""));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(20, 120, 121, 31));
        label_3->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    font-family: \"Segoe UI\", \"Inter\";\n"
"    font-size: 13.5px;\n"
"    font-weight: 600;\n"
"	color: rgb(0, 0, 0);\n"
"}\n"
""));
        lineEdit_2 = new QLineEdit(centralwidget);
        lineEdit_2->setObjectName("lineEdit_2");
        lineEdit_2->setGeometry(QRect(160, 60, 311, 31));
        lineEdit_2->setMinimumSize(QSize(0, 22));
        lineEdit_2->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"    /* Typography */\n"
"    font-family: \"Segoe UI\", \"Inter\", \"Arial\";\n"
"    font-size: 14px;\n"
"    font-weight: 400;\n"
"\n"
"    /* Text & Background */\n"
"    color: #1f1f1f;\n"
"    background-color: #ffffff;\n"
"\n"
"    /* Border */\n"
"    border: 1px solid #cfd6e0;\n"
"    border-radius: 6px;\n"
"\n"
"}\n"
"\n"
"/* Hover effect */\n"
"QLineEdit:hover {\n"
"    border-color: #9bbce8;\n"
"    background-color: #fcfdff;\n"
"}\n"
"\n"
"/* Focus effect */\n"
"QLineEdit:focus {\n"
"    border-color: #1b6ca8;\n"
"    background-color: #ffffff;\n"
"}\n"
""));
        lineEdit_3 = new QLineEdit(centralwidget);
        lineEdit_3->setObjectName("lineEdit_3");
        lineEdit_3->setGeometry(QRect(160, 120, 311, 31));
        lineEdit_3->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"    /* Typography */\n"
"    font-family: \"Segoe UI\", \"Inter\", \"Arial\";\n"
"    font-size: 14px;\n"
"    font-weight: 400;\n"
"\n"
"    /* Text & Background */\n"
"    color: #1f1f1f;\n"
"    background-color: #ffffff;\n"
"\n"
"    /* Border */\n"
"    border: 1px solid #cfd6e0;\n"
"    border-radius: 6px;\n"
"}\n"
"\n"
"/* Hover effect */\n"
"QLineEdit:hover {\n"
"    border-color: #9bbce8;\n"
"    background-color: #fcfdff;\n"
"}\n"
"\n"
"/* Focus effect */\n"
"QLineEdit:focus {\n"
"    border-color: #1b6ca8;\n"
"    background-color: #ffffff;\n"
"}\n"
""));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(160, 190, 71, 31));
        pushButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background: qlineargradient(\n"
"        x1:0, y1:0, x2:0, y2:1,\n"
"        stop:0 #6fdc8c,\n"
"        stop:1 #2fa866\n"
"    );\n"
"    color: white;\n"
"    border: none;\n"
"    font-size: 15px;\n"
"    font-weight: 600;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background: qlineargradient(\n"
"        x1:0, y1:0, x2:0, y2:1,\n"
"        stop:0 #7fe09a,\n"
"        stop:1 #34b673\n"
"    );\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background: #2fa866;\n"
"}\n"
""));
        pushButton2 = new QPushButton(centralwidget);
        pushButton2->setObjectName("pushButton2");
        pushButton2->setGeometry(QRect(400, 190, 71, 31));
        pushButton2->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    \n"
"	background-color: rgb(82, 82, 82);\n"
"	color: rgb(255, 255, 255);\n"
"    border: none;\n"
"    font-size: 15px;\n"
"    font-weight: 600;\n"
"}\n"
"\n"
"\n"
""));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 19));
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
        label->setText(QCoreApplication::translate("MainWindow", "Visa and Airline Reservation System", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Enter Username:", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Enter Password:", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "Login", nullptr));
        pushButton2->setText(QCoreApplication::translate("MainWindow", "Register", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
