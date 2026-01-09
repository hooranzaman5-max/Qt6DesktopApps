/********************************************************************************
** Form generated from reading UI file 'airlinereservationscreen.ui'
**
** Created by: Qt User Interface Compiler version 6.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_AIRLINERESERVATIONSCREEN_H
#define UI_AIRLINERESERVATIONSCREEN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_AirlineReservationScreen
{
public:
    QLabel *label;
    QLabel *label_2;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_3;
    QLabel *label_4;
    QLabel *label_7;
    QComboBox *comboBox;
    QLabel *label_8;
    QComboBox *comboBox_2;
    QDateEdit *dateEdit;
    QLabel *label_9;
    QComboBox *comboBox_3;
    QLabel *label_10;
    QLabel *label_11;
    QComboBox *comboBox_4;
    QLabel *label_3;
    QLineEdit *lineEdit_2;
    QLabel *label_5;
    QLineEdit *lineEdit_4;
    QPushButton *pushButton;

    void setupUi(QDialog *AirlineReservationScreen)
    {
        if (AirlineReservationScreen->objectName().isEmpty())
            AirlineReservationScreen->setObjectName("AirlineReservationScreen");
        AirlineReservationScreen->resize(601, 422);
        label = new QLabel(AirlineReservationScreen);
        label->setObjectName("label");
        label->setGeometry(QRect(10, 10, 571, 31));
        label->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    color: rgb(70, 153, 123);\n"
"    font-size: 20px;\n"
"    font-weight: 600;\n"
"    font-family: \"Segoe UI\", \"Inter\", \"Roboto\", \"Helvetica Neue\", Arial, sans-serif;\n"
"    qproperty-alignment: AlignHCenter;\n"
"}\n"
""));
        label_2 = new QLabel(AirlineReservationScreen);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(20, 50, 71, 21));
        label_2->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    font-family: \"Segoe UI\", \"Inter\";\n"
"    font-size: 12px;\n"
"    font-weight: 600;\n"
"	color: rgb(0, 0, 0);\n"
"}\n"
""));
        lineEdit = new QLineEdit(AirlineReservationScreen);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(120, 50, 441, 31));
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
        lineEdit_3 = new QLineEdit(AirlineReservationScreen);
        lineEdit_3->setObjectName("lineEdit_3");
        lineEdit_3->setGeometry(QRect(120, 90, 441, 31));
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
" \n"
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
        label_4 = new QLabel(AirlineReservationScreen);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(20, 90, 91, 21));
        label_4->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    font-family: \"Segoe UI\", \"Inter\";\n"
"    font-size: 12px;\n"
"    font-weight: 600;\n"
"	color: rgb(0, 0, 0);\n"
"}\n"
""));
        label_7 = new QLabel(AirlineReservationScreen);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(20, 140, 81, 21));
        label_7->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    font-family: \"Segoe UI\", \"Inter\";\n"
"    font-size: 12px;\n"
"    font-weight: 600;\n"
"	color: rgb(0, 0, 0);\n"
"}\n"
""));
        comboBox = new QComboBox(AirlineReservationScreen);
        comboBox->setObjectName("comboBox");
        comboBox->setGeometry(QRect(120, 140, 121, 30));
        comboBox->setStyleSheet(QString::fromUtf8("QComboBox {\n"
"    /* Typography */\n"
"    font-family: \"Segoe UI\", \"Inter\", \"Arial\";\n"
"    font-size: 14px;\n"
"    font-weight: 400;\n"
"    \n"
"\n"
"    /* Text & Background */\n"
"    color: #1f1f1f;\n"
"    background-color: #ffffff;\n"
"\n"
"    /* Border */\n"
"    border: 1px solid #cfd6e0 ;\n"
"    border-radius: 6px;\n"
"	\n"
"}\n"
"\n"
"/* Hover effect */\n"
"QComboBox:hover {\n"
"    border-color: #9bbce8;\n"
"    background-color: #fcfdff;\n"
"}\n"
"\n"
"/* Focus effect */\n"
"QComboBox:focus {\n"
"    border-color: #1b6ca8;\n"
"    background-color: #ffffff;\n"
"}\n"
""));
        label_8 = new QLabel(AirlineReservationScreen);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(310, 140, 81, 21));
        label_8->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    font-family: \"Segoe UI\", \"Inter\";\n"
"    font-size: 12px;\n"
"    font-weight: 600;\n"
"	color: rgb(0, 0, 0);\n"
"}\n"
""));
        comboBox_2 = new QComboBox(AirlineReservationScreen);
        comboBox_2->setObjectName("comboBox_2");
        comboBox_2->setGeometry(QRect(440, 140, 121, 30));
        comboBox_2->setStyleSheet(QString::fromUtf8("QComboBox {\n"
"    /* Typography */\n"
"    font-family: \"Segoe UI\", \"Inter\", \"Arial\";\n"
"    font-size: 14px;\n"
"    font-weight: 400;\n"
"    \n"
"\n"
"    /* Text & Background */\n"
"    color: #1f1f1f;\n"
"    background-color: #ffffff;\n"
"\n"
"    /* Border */\n"
"    border: 1px solid #cfd6e0 ;\n"
"    border-radius: 6px;\n"
"	\n"
"}\n"
"\n"
"/* Hover effect */\n"
"QComboBox:hover {\n"
"    border-color: #9bbce8;\n"
"    background-color: #fcfdff;\n"
"}\n"
"\n"
"/* Focus effect */\n"
"QComboBox:focus {\n"
"    border-color: #1b6ca8;\n"
"    background-color: #ffffff;\n"
"}\n"
""));
        dateEdit = new QDateEdit(AirlineReservationScreen);
        dateEdit->setObjectName("dateEdit");
        dateEdit->setGeometry(QRect(120, 190, 121, 31));
        dateEdit->setStyleSheet(QString::fromUtf8(""));
        label_9 = new QLabel(AirlineReservationScreen);
        label_9->setObjectName("label_9");
        label_9->setGeometry(QRect(20, 190, 91, 21));
        label_9->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    font-family: \"Segoe UI\", \"Inter\";\n"
"    font-size: 12px;\n"
"    font-weight: 600;\n"
"	color: rgb(0, 0, 0);\n"
"}\n"
""));
        comboBox_3 = new QComboBox(AirlineReservationScreen);
        comboBox_3->setObjectName("comboBox_3");
        comboBox_3->setGeometry(QRect(440, 190, 121, 30));
        comboBox_3->setStyleSheet(QString::fromUtf8("QComboBox {\n"
"    /* Typography */\n"
"    font-family: \"Segoe UI\", \"Inter\", \"Arial\";\n"
"    font-size: 14px;\n"
"    font-weight: 400;\n"
"    \n"
"\n"
"    /* Text & Background */\n"
"    color: #1f1f1f;\n"
"    background-color: #ffffff;\n"
"\n"
"    /* Border */\n"
"    border: 1px solid #cfd6e0 ;\n"
"    border-radius: 6px;\n"
"	\n"
"}\n"
"\n"
"/* Hover effect */\n"
"QComboBox:hover {\n"
"    border-color: #9bbce8;\n"
"    background-color: #fcfdff;\n"
"}\n"
"\n"
"/* Focus effect */\n"
"QComboBox:focus {\n"
"    border-color: #1b6ca8;\n"
"    background-color: #ffffff;\n"
"}\n"
""));
        label_10 = new QLabel(AirlineReservationScreen);
        label_10->setObjectName("label_10");
        label_10->setGeometry(QRect(310, 190, 81, 21));
        label_10->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    font-family: \"Segoe UI\", \"Inter\";\n"
"    font-size: 12px;\n"
"    font-weight: 600;\n"
"	color: rgb(0, 0, 0);\n"
"}\n"
""));
        label_11 = new QLabel(AirlineReservationScreen);
        label_11->setObjectName("label_11");
        label_11->setGeometry(QRect(20, 250, 81, 21));
        label_11->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    font-family: \"Segoe UI\", \"Inter\";\n"
"    font-size: 12px;\n"
"    font-weight: 600;\n"
"	color: rgb(0, 0, 0);\n"
"}\n"
""));
        comboBox_4 = new QComboBox(AirlineReservationScreen);
        comboBox_4->setObjectName("comboBox_4");
        comboBox_4->setGeometry(QRect(120, 250, 121, 30));
        comboBox_4->setStyleSheet(QString::fromUtf8("QComboBox {\n"
"    /* Typography */\n"
"    font-family: \"Segoe UI\", \"Inter\", \"Arial\";\n"
"    font-size: 14px;\n"
"    font-weight: 400;\n"
"    \n"
"\n"
"    /* Text & Background */\n"
"    color: #1f1f1f;\n"
"    background-color: #ffffff;\n"
"\n"
"    /* Border */\n"
"    border: 1px solid #cfd6e0 ;\n"
"    border-radius: 6px;\n"
"	\n"
"}\n"
"\n"
"/* Hover effect */\n"
"QComboBox:hover {\n"
"    border-color: #9bbce8;\n"
"    background-color: #fcfdff;\n"
"}\n"
"\n"
"/* Focus effect */\n"
"QComboBox:focus {\n"
"    border-color: #1b6ca8;\n"
"    background-color: #ffffff;\n"
"}\n"
""));
        label_3 = new QLabel(AirlineReservationScreen);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(20, 300, 71, 21));
        label_3->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    font-family: \"Segoe UI\", \"Inter\";\n"
"    font-size: 12px;\n"
"    font-weight: 600;\n"
"	color: rgb(0, 0, 0);\n"
"}\n"
""));
        lineEdit_2 = new QLineEdit(AirlineReservationScreen);
        lineEdit_2->setObjectName("lineEdit_2");
        lineEdit_2->setGeometry(QRect(120, 290, 441, 31));
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
        label_5 = new QLabel(AirlineReservationScreen);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(20, 340, 71, 21));
        label_5->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    font-family: \"Segoe UI\", \"Inter\";\n"
"    font-size: 12px;\n"
"    font-weight: 600;\n"
"	color: rgb(0, 0, 0);\n"
"}\n"
""));
        lineEdit_4 = new QLineEdit(AirlineReservationScreen);
        lineEdit_4->setObjectName("lineEdit_4");
        lineEdit_4->setGeometry(QRect(120, 330, 441, 31));
        lineEdit_4->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
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
        pushButton = new QPushButton(AirlineReservationScreen);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(250, 370, 131, 31));
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

        retranslateUi(AirlineReservationScreen);

        QMetaObject::connectSlotsByName(AirlineReservationScreen);
    } // setupUi

    void retranslateUi(QDialog *AirlineReservationScreen)
    {
        AirlineReservationScreen->setWindowTitle(QCoreApplication::translate("AirlineReservationScreen", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("AirlineReservationScreen", "Airline Reservation System", nullptr));
        label_2->setText(QCoreApplication::translate("AirlineReservationScreen", "Full Name:", nullptr));
        label_4->setText(QCoreApplication::translate("AirlineReservationScreen", "Phone Number:", nullptr));
        label_7->setText(QCoreApplication::translate("AirlineReservationScreen", "Departure City:", nullptr));
        label_8->setText(QCoreApplication::translate("AirlineReservationScreen", "Arrival City:", nullptr));
        label_9->setText(QCoreApplication::translate("AirlineReservationScreen", "Departure Date:", nullptr));
        label_10->setText(QCoreApplication::translate("AirlineReservationScreen", "Class:", nullptr));
        label_11->setText(QCoreApplication::translate("AirlineReservationScreen", "Choose Airline:", nullptr));
        label_3->setText(QCoreApplication::translate("AirlineReservationScreen", "Flight No:", nullptr));
        label_5->setText(QCoreApplication::translate("AirlineReservationScreen", "Ticket Price:", nullptr));
        pushButton->setText(QCoreApplication::translate("AirlineReservationScreen", "Book Flight", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AirlineReservationScreen: public Ui_AirlineReservationScreen {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AIRLINERESERVATIONSCREEN_H
