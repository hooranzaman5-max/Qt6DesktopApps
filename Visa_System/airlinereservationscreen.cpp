#include "airlinereservationscreen.h"
#include "ui_airlinereservationscreen.h"
#include <QMessageBox>
#include <QDate>
#include <QLayout>
#include <QStringList>
#include <QFile>
#include <QTextStream>
#include <QCoreApplication>


struct AirlineInfo
{
    QString airlineName;
    QString classType;      // Economy / Business / First
    double ticketPrice;
    QString flightNumber;
};

AirlineReservationScreen::AirlineReservationScreen(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::AirlineReservationScreen)
{
    ui->setupUi(this);
    connect(ui->pushButton, &QPushButton::clicked,
            this, &AirlineReservationScreen::book_flight);
    ui->lineEdit_4->setReadOnly(true);
    ui->lineEdit_2->setReadOnly(true);
    ui->dateEdit->setDate(QDate::currentDate());

    this->setFixedSize(600, 420);

    QVector<AirlineInfo> airlines = {

    // ================= PIA =================
    {"PIA", "Economy Class", 85000, "PK-301E"},
        {"PIA", "Business Class", 125000, "PK-301B"},
        {"PIA", "First Class", 165000, "PK-301F"},

        // ================= Emirates =================
        {"Emirates", "Economy Class", 180000, "EK-202E"},
        {"Emirates", "Business Class", 260000, "EK-202B"},
        {"Emirates", "First Class", 350000, "EK-202F"},

        // ================= Qatar Airways =================
        {"Qatar Airways", "Economy Class", 165000, "QR-410E"},
        {"Qatar Airways", "Business Class", 245000, "QR-410B"},
        {"Qatar Airways", "First Class", 330000, "QR-410F"},

        // ================= Turkish Airlines =================
        {"Turkish Airlines", "Economy Class", 155000, "TK-711E"},
        {"Turkish Airlines", "Business Class", 225000, "TK-711B"},
        {"Turkish Airlines", "First Class", 305000, "TK-711F"},

        // ================= British Airways =================
        {"British Airways", "Economy Class", 195000, "BA-178E"},
        {"British Airways", "Business Class", 275000, "BA-178B"},
        {"British Airways", "First Class", 360000, "BA-178F"},

        // ================= Lufthansa =================
        {"Lufthansa", "Economy Class", 170000, "LH-604E"},
        {"Lufthansa", "Business Class", 245000, "LH-604B"},
        {"Lufthansa", "First Class", 325000, "LH-604F"}
};

    auto updateFlightDetails = [=]() {
        QString selectedAirline = ui->comboBox_4->currentText();
        QString selectedClass = ui->comboBox_3->currentText();

        for (const AirlineInfo &airline : airlines)
        {
            if (airline.airlineName == selectedAirline &&
                airline.classType == selectedClass)
            {
                ui->lineEdit_4->setText(QString::number(airline.ticketPrice));
                ui->lineEdit_2->setText(airline.flightNumber);
                return;
            }
        }

        ui->lineEdit_4->clear();
        ui->lineEdit_2->clear();
    };

    connect(ui->comboBox_4, &QComboBox::currentTextChanged,
            this, [=]() { updateFlightDetails(); });

    connect(ui->comboBox_3, &QComboBox::currentTextChanged,
            this, [=]() { updateFlightDetails(); });


    ui->comboBox_4->addItem("-- Select Airline --");

    QStringList addedAirlines;
    for (const AirlineInfo &airline : airlines)
    {
        if (!addedAirlines.contains(airline.airlineName))
        {
            ui->comboBox_4->addItem(airline.airlineName);
            addedAirlines.append(airline.airlineName);
        }
    }

    // Connection for Book Flight Button

    connect(ui->comboBox_4, &QComboBox::currentTextChanged,
            this, [=](const QString &selectedAirline)
            {
                for (const AirlineInfo &airline : airlines)
                {
                    if (airline.airlineName == selectedAirline)
                    {
                        ui->lineEdit_4->setText(QString::number(airline.ticketPrice));
                        ui->lineEdit_2->setText(airline.flightNumber);
                        return;
                    }
                }

                // Reset if placeholder selected
                ui->lineEdit_4->clear();
                ui->lineEdit_2->clear();
            });


    // ===================== Cities Data =====================

    QStringList pakistanCities = {
        "Islamabad",
        "Lahore",
        "Karachi",
        "Peshawar",
        "Quetta",
        "Multan",
        "Faisalabad"
    };

    QStringList indiaCities = {
        "New Delhi",
        "Mumbai",
        "Chennai",
        "Bangalore",
        "Hyderabad",
        "Kolkata",
        "Amritsar"
    };

    QStringList bangladeshCities = {
        "Dhaka",
        "Chittagong",
        "Sylhet",
        "Rajshahi",
        "Khulna"
    };

    QStringList ukCities = {
        "London",
        "Manchester",
        "Birmingham",
        "Leeds",
        "Glasgow",
        "Edinburgh"
    };

    QStringList usaCities = {
        "New York",
        "Los Angeles",
        "Chicago",
        "Houston",
        "San Francisco",
        "Dallas",
        "Washington D.C."
    };

    QStringList canadaCities = {
        "Toronto",
        "Vancouver",
        "Montreal",
        "Calgary",
        "Ottawa",
        "Edmonton"
    };

    // ===================== Airline Class =====================

    QStringList airlineClasses = {
        "Economy Class",
        "Business Class",
        "First Class"
    };

    ui->comboBox->addItems(pakistanCities);
    ui->comboBox->addItems(indiaCities);
    ui->comboBox->addItems(bangladeshCities);
    ui->comboBox->addItems(ukCities);
    ui->comboBox->addItems(usaCities);
    ui->comboBox->addItems(canadaCities);

    ui->comboBox_2->addItems(usaCities);
    ui->comboBox_2->addItems(pakistanCities);
    ui->comboBox_2->addItems(indiaCities);
    ui->comboBox_2->addItems(bangladeshCities);
    ui->comboBox_2->addItems(ukCities);
    ui->comboBox_2->addItems(canadaCities);

    ui->comboBox_3->addItems(airlineClasses);
}

AirlineReservationScreen::~AirlineReservationScreen()
{
    delete ui;
}

void AirlineReservationScreen::book_flight()
{
    // Validation: check all fields
    if (ui->comboBox->currentText().isEmpty() ||
        ui->comboBox_2->currentText().isEmpty() ||
        ui->comboBox_3->currentText().isEmpty() ||
        ui->comboBox_4->currentIndex() == 0 ||
        ui->lineEdit_4->text().isEmpty() ||
        ui->lineEdit_2->text().isEmpty() ||
        ui->lineEdit_3->text().isEmpty() ||
        ui->lineEdit->text().isEmpty()
        )
    {
        QMessageBox::warning(
            this,
            "Missing Information",
            "All fields are required to book the flight."
            );
        return;
    }

    // Hide reservation screen
    this->hide();

    // =================== File Handling: Save Booking Details ===================

    // Absolute path to project folder
    QString filePath = "C:/Users/Shahwar/Documents/Visa_System/bookingdetails.txt";

    QFile file(filePath);

    // Open the file in append mode (create if not exists)
    if (file.open(QIODevice::Append | QIODevice::Text)) {
        QTextStream out(&file);

        out << "Flight Booking Details\n";
        out << "=====================\n";
        out << "Passenger Name: " << ui->lineEdit->text() << "\n";
        out << "Phone Number: " << ui->lineEdit_3->text() << "\n";
        out << "Departure City: " << ui->comboBox->currentText() << "\n";
        out << "Arrival City: " << ui->comboBox_2->currentText() << "\n";
        out << "Departure Date: " << ui->dateEdit->date().toString("dd MMM yyyy") << "\n";
        out << "Class: " << ui->comboBox_3->currentText() << "\n";
        out << "Airline: " << ui->comboBox_4->currentText() << "\n";
        out << "Flight Number: " << ui->lineEdit_2->text() << "\n";
        out << "Ticket Price: PKR " << ui->lineEdit_4->text() << "\n";
        out << "=====================\n\n";

        file.close(); // Close the file
    } else {
        QMessageBox::warning(this, "File Error", "Could not create or open bookingdetails.txt for writing.");
    }


    QMessageBox msgBox;
    msgBox.setWindowTitle("Booking Details");

    msgBox.setText(
        "<center><b>Flight Booking Successful!</b></center><br><br>"
        "<center>"
        "<b>Passenger Name:</b> " + ui->lineEdit->text() + "<br>"
        "<b>Phone Number:</b> " + ui->lineEdit_3->text() + "<br><br>"
        "<b>Departure City:</b> " + ui->comboBox->currentText() + "<br>"
        "<b>Arrival City:</b> " + ui->comboBox_2->currentText() + "<br>"
        "<b>Departure Date:</b> " + ui->dateEdit->date().toString("dd MMM yyyy") + "<br>"
        "<b>Class:</b> " + ui->comboBox_3->currentText() + "<br>"
        "<b>Airline:</b> " + ui->comboBox_4->currentText() + "<br>"
        "<b>Flight Number:</b> " + ui->lineEdit_2->text() + "<br>"
        "<b>Ticket Price:</b> PKR " + ui->lineEdit_4->text() +
        "</center>"
        );


    QPushButton *doneButton = msgBox.addButton("Done", QMessageBox::AcceptRole);

    // Size & alignment
    msgBox.adjustSize();
    msgBox.layout()->setAlignment(doneButton, Qt::AlignHCenter);

    msgBox.exec();
    qApp->quit();

}

