/********************************************************************************
** Form generated from reading UI file 'registerscreen.ui'
**
** Created by: Qt User Interface Compiler version 6.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REGISTERSCREEN_H
#define UI_REGISTERSCREEN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_RegisterScreen
{
public:
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit_3;
    QPushButton *pushButton_2;
    QPushButton *pushButton2;

    void setupUi(QDialog *RegisterScreen)
    {
        if (RegisterScreen->objectName().isEmpty())
            RegisterScreen->setObjectName("RegisterScreen");
        RegisterScreen->resize(541, 300);
        label = new QLabel(RegisterScreen);
        label->setObjectName("label");
        label->setGeometry(QRect(70, 10, 461, 41));
        label->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    color: rgb(70, 153, 123);\n"
"    font-size: 20px;\n"
"    font-weight: 600;\n"
"    font-family: \"Segoe UI\", \"Inter\", \"Roboto\", \"Helvetica Neue\", Arial, sans-serif;\n"
"    qproperty-alignment: AlignHCenter;\n"
"}\n"
""));
        label_2 = new QLabel(RegisterScreen);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(10, 70, 111, 31));
        label_2->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    font-family: \"Segoe UI\", \"Inter\";\n"
"    font-size: 13.5px;\n"
"    font-weight: 600;\n"
"	color: rgb(0, 0, 0);\n"
"}\n"
""));
        label_3 = new QLabel(RegisterScreen);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(10, 120, 111, 31));
        label_3->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    font-family: \"Segoe UI\", \"Inter\";\n"
"    font-size: 13.5px;\n"
"    font-weight: 600;\n"
"	color: rgb(0, 0, 0);\n"
"}\n"
""));
        label_4 = new QLabel(RegisterScreen);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(10, 170, 121, 31));
        label_4->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    font-family: \"Segoe UI\", \"Inter\";\n"
"    font-size: 13.5px;\n"
"    font-weight: 600;\n"
"	color: rgb(0, 0, 0);\n"
"}\n"
""));
        lineEdit = new QLineEdit(RegisterScreen);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(140, 70, 321, 31));
        lineEdit->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
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
        lineEdit_2 = new QLineEdit(RegisterScreen);
        lineEdit_2->setObjectName("lineEdit_2");
        lineEdit_2->setGeometry(QRect(140, 120, 321, 31));
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
        lineEdit_3 = new QLineEdit(RegisterScreen);
        lineEdit_3->setObjectName("lineEdit_3");
        lineEdit_3->setGeometry(QRect(140, 170, 321, 31));
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
        pushButton_2 = new QPushButton(RegisterScreen);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(140, 230, 71, 31));
        pushButton_2->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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
        pushButton2 = new QPushButton(RegisterScreen);
        pushButton2->setObjectName("pushButton2");
        pushButton2->setGeometry(QRect(390, 230, 71, 31));
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

        retranslateUi(RegisterScreen);

        QMetaObject::connectSlotsByName(RegisterScreen);
    } // setupUi

    void retranslateUi(QDialog *RegisterScreen)
    {
        RegisterScreen->setWindowTitle(QCoreApplication::translate("RegisterScreen", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("RegisterScreen", "Visa and Airline Reservation System", nullptr));
        label_2->setText(QCoreApplication::translate("RegisterScreen", "Enter Username:", nullptr));
        label_3->setText(QCoreApplication::translate("RegisterScreen", "Password:", nullptr));
        label_4->setText(QCoreApplication::translate("RegisterScreen", "Confirm Password:", nullptr));
        pushButton_2->setText(QCoreApplication::translate("RegisterScreen", "Register", nullptr));
        pushButton2->setText(QCoreApplication::translate("RegisterScreen", "Login", nullptr));
    } // retranslateUi

};

namespace Ui {
    class RegisterScreen: public Ui_RegisterScreen {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGISTERSCREEN_H
