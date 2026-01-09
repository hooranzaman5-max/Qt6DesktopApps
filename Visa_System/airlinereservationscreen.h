#ifndef AIRLINERESERVATIONSCREEN_H
#define AIRLINERESERVATIONSCREEN_H

#include <QDialog>

namespace Ui {
class AirlineReservationScreen;
}

class AirlineReservationScreen : public QDialog
{
    Q_OBJECT

public:
    explicit AirlineReservationScreen(QWidget *parent = nullptr);
    ~AirlineReservationScreen();

private slots:
    void book_flight();

private:
    Ui::AirlineReservationScreen *ui;
};

#endif // AIRLINERESERVATIONSCREEN_H
