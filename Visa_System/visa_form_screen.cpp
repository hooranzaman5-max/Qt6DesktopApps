#include "visa_form_screen.h"
#include "ui_visa_form_screen.h"
#include "airlinereservationscreen.h"
#include <QMessageBox>
#include <QDebug>

// Define the structure
struct VisaForm {
    QString fullName;
    QString fatherName;
    QString phoneNumber;
    QString address;
    QString nationality;
    QString cnicNumber;
    QString cnicValid;   // Yes/No
    QString passportNumber;
    QString passportValid; // Yes/No
    QString destination;
    int durationOfStay;
    QString criminalRecord;
    QString priorOverstay;
    QString taxPayer;
    QString deportation;
    QString previousVisaDenial;
    QString tiesToHomeCountry;
    double monthlyIncome;
    double estimatedTravelCost;
};

Visa_Form_Screen::Visa_Form_Screen(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Visa_Form_Screen)
{
    ui->setupUi(this);
    this->setFixedSize(600, 700);

    // Connect Submit button
    connect(ui->pushButton, SIGNAL(clicked()), this, SLOT(submit_button()));

    // Populate ComboBoxes
    ui->comboBox->addItems({"Pakistan","India","Bangladesh","UK","USA","Canada","Other"}); // Nationality
    ui->comboBox_2->addItems({"Yes","No"}); // Valid CNIC
    ui->comboBox_3->addItems({"Yes","No"}); // Valid Passport
    ui->comboBox_4->addItems({"Canada","Pakistan","India","Bangladesh","UK","USA","Other"}); // Destination
    ui->comboBox_5->addItems({"No","Yes"}); // Criminal Record
    ui->comboBox_6->addItems({"No","Yes"}); // Prior Overstay
    ui->comboBox_7->addItems({"No","Yes"}); // Any Deportation
    ui->comboBox_8->addItems({"No","Yes"}); // Previous Visa Denial
    ui->comboBox_9->addItems({"Yes","No"}); // Tax Payer
    ui->comboBox_10->addItems({"Employment","Business","Property","Family","School/College/University","None"}); // Ties to Home Country

    // Set duration spinbox limits
    ui->spinBox->setMinimum(1);             // Duration
    ui->spinBox->setMaximum(365);
    ui->doubleSpinBox->setMinimum(0.01);    // Monthly Income
    ui->doubleSpinBox_2->setMinimum(0.01);  // Estimated Travel Cost
}

Visa_Form_Screen::~Visa_Form_Screen()
{
    delete ui;
}

void Visa_Form_Screen::submit_button()
{
    // Step 1: Bind UI values into struct
    VisaForm form;
    form.fullName = ui->lineEdit->text().trimmed();
    form.fatherName = ui->lineEdit_2->text().trimmed();
    form.phoneNumber = ui->lineEdit_3->text().trimmed();
    form.address = ui->textEdit->toPlainText().trimmed();
    form.nationality = ui->comboBox->currentText().trimmed();
    form.cnicNumber = ui->lineEdit_4->text().trimmed();
    form.cnicValid = ui->comboBox_2->currentText().trimmed();
    form.passportNumber = ui->lineEdit_5->text().trimmed();
    form.passportValid = ui->comboBox_3->currentText().trimmed();
    form.destination = ui->comboBox_4->currentText().trimmed();
    form.durationOfStay = ui->spinBox->value();
    form.criminalRecord = ui->comboBox_5->currentText().trimmed();
    form.priorOverstay = ui->comboBox_6->currentText().trimmed();
    form.taxPayer = ui->comboBox_9->currentText().trimmed();
    form.deportation = ui->comboBox_7->currentText().trimmed();
    form.previousVisaDenial = ui->comboBox_8->currentText().trimmed();
    form.tiesToHomeCountry = ui->comboBox_10->currentText().trimmed();
    form.monthlyIncome = ui->doubleSpinBox->value();
    form.estimatedTravelCost = ui->doubleSpinBox_2->value();

    // Check that all fields in the struct are filled or selected
    if (form.fullName.isEmpty() || form.fatherName.isEmpty() || form.phoneNumber.isEmpty() ||
        form.address.isEmpty() || form.nationality.isEmpty() || form.cnicNumber.isEmpty() ||
        form.cnicValid.isEmpty() || form.passportNumber.isEmpty() || form.passportValid.isEmpty() ||
        form.destination.isEmpty() || form.durationOfStay <= 0 ||
        form.criminalRecord.isEmpty() || form.priorOverstay.isEmpty() || form.taxPayer.isEmpty() ||
        form.deportation.isEmpty() || form.previousVisaDenial.isEmpty() || form.tiesToHomeCountry.isEmpty() ||
        form.monthlyIncome <= 0 || form.estimatedTravelCost <= 0)
    {
        QMessageBox::warning(this, "Missing Information", "All fields are required. Please fill in all the details.");
        return; // Stop submission
    }


    // Step 2: Validation and Visa Acceptance/Rejection

    // 2a: Nationality and destination cannot be the same
    if(form.nationality == form.destination) {
        QMessageBox::warning(this, "Invalid Input", "Nationality and Destination Country cannot be the same. Please select different values.");
        return; // Stops the submit function without closing the form
    }


    // 2b: Visa Rejection Check
    QString rejectionReason = "";
    if(form.cnicValid == "No" || form.passportValid == "No")
        rejectionReason = "CNIC or Passport is InValid.";
    else if(form.criminalRecord == "Yes" || form.priorOverstay == "Yes" ||
             form.deportation == "Yes" || form.previousVisaDenial == "Yes" || form.taxPayer=="No")
        rejectionReason = "Application Rejected due to Criminal Record, Overstay, Deportation, Previous Visa Denial or Tax Payer.";
    else if(form.estimatedTravelCost > 0 && form.monthlyIncome < form.estimatedTravelCost)
        rejectionReason = "Insufficient Financial Resources to cover Travel Expenses.";
    else if(form.tiesToHomeCountry == "None")
        rejectionReason = "No Strong Ties to Home Country.";

    if(!rejectionReason.isEmpty()) {
        QMessageBox::critical(this, "Visa Denied", rejectionReason);
        return; // Stop submission without closing the form
    }

    // If all checks passed → Visa Approved
    QMessageBox *approvedMsg = new QMessageBox(QMessageBox::Information, "Visa Approved", "Your visa has been approved!", QMessageBox::Ok, this);
    approvedMsg->setModal(true);
    approvedMsg->show();

    // Navigate to Airline Reservation System Screen (assuming it is a QDialog named AirlineReservationScreen)
    connect(approvedMsg, &QMessageBox::buttonClicked, [=]() {
        approvedMsg->close();
        this->hide();
        AirlineReservationScreen *airlineScreen = new AirlineReservationScreen();
        airlineScreen->exec();
        this->close();
    });
}
