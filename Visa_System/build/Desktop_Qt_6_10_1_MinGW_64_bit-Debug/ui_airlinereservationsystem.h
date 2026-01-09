/********************************************************************************
** Form generated from reading UI file 'airlinereservationsystem.ui'
**
** Created by: Qt User Interface Compiler version 6.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_AIRLINERESERVATIONSYSTEM_H
#define UI_AIRLINERESERVATIONSYSTEM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>

QT_BEGIN_NAMESPACE

class Ui_AirlineReservationSystem
{
public:

    void setupUi(QDialog *AirlineReservationSystem)
    {
        if (AirlineReservationSystem->objectName().isEmpty())
            AirlineReservationSystem->setObjectName("AirlineReservationSystem");
        AirlineReservationSystem->resize(542, 300);

        retranslateUi(AirlineReservationSystem);

        QMetaObject::connectSlotsByName(AirlineReservationSystem);
    } // setupUi

    void retranslateUi(QDialog *AirlineReservationSystem)
    {
        AirlineReservationSystem->setWindowTitle(QCoreApplication::translate("AirlineReservationSystem", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AirlineReservationSystem: public Ui_AirlineReservationSystem {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AIRLINERESERVATIONSYSTEM_H
