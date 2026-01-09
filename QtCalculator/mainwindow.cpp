#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QPushButton>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    //  SIMPLE  THEME
    this->setStyleSheet(R"(
        QMainWindow { background-color: #FFFAF0; }          /* light cream */
        QLineEdit#display {
            background-color: #FFFFFF;
            color: #2E3A59; border: 2px solid #A8DADC;
            border-radius: 8px; font-size: 28pt; padding: 8px;
        }
        QPushButton {
            background-color: #A8DADC; color: #1D3557;
            font-size: 16pt; border-radius: 12px; padding: 10px;
        }
        QPushButton:pressed { background-color: #457B9D; color: #FFFFFF; }
    )");


    ui->display->setText("0");

    firstNumber = 0;
    operation = "";
    isNewNumber = true;

    // DIGITS
    connect(ui->btn_0, &QPushButton::released, this, &MainWindow::digit_pressed);
    connect(ui->btn_1, &QPushButton::released, this, &MainWindow::digit_pressed);
    connect(ui->btn_2, &QPushButton::released, this, &MainWindow::digit_pressed);
    connect(ui->btn_3, &QPushButton::released, this, &MainWindow::digit_pressed);
    connect(ui->btn_4, &QPushButton::released, this, &MainWindow::digit_pressed);
    connect(ui->btn_5, &QPushButton::released, this, &MainWindow::digit_pressed);
    connect(ui->btn_6, &QPushButton::released, this, &MainWindow::digit_pressed);
    connect(ui->btn_7, &QPushButton::released, this, &MainWindow::digit_pressed);
    connect(ui->btn_8, &QPushButton::released, this, &MainWindow::digit_pressed);
    connect(ui->btn_9, &QPushButton::released, this, &MainWindow::digit_pressed);

    // OPERATORS
    connect(ui->btn_add, &QPushButton::released, this, &MainWindow::operator_pressed);
    connect(ui->btn_sub, &QPushButton::released, this, &MainWindow::operator_pressed);
    connect(ui->btn_mul, &QPushButton::released, this, &MainWindow::operator_pressed);
    connect(ui->btn_div, &QPushButton::released, this, &MainWindow::operator_pressed);

    // CONTROL
    connect(ui->btn_equals, &QPushButton::released, this, &MainWindow::equals_pressed);
    connect(ui->btn_clear, &QPushButton::released, this, &MainWindow::clear_pressed);
}

MainWindow::~MainWindow()
{
    delete ui;
}

//all functions

//  DIGITS
void MainWindow::digit_pressed()
{
    QPushButton *btn = qobject_cast<QPushButton*>(sender());

    if (isNewNumber) {
        ui->display->setText(btn->text());
        isNewNumber = false;
    } else {
        ui->display->setText(ui->display->text() + btn->text());
    }
}

//  OPERATORS
void MainWindow::operator_pressed()
{
    QPushButton *btn = qobject_cast<QPushButton*>(sender());

    firstNumber = ui->display->text().toDouble();
    operation = btn->text();
    isNewNumber = true;
}

//  EQUALS
void MainWindow::equals_pressed()
{
    double secondNumber = ui->display->text().toDouble();
    double result = 0;

    if (operation == "+")
        result = firstNumber + secondNumber;
    else if (operation == "-")
        result = firstNumber - secondNumber;
    else if (operation == "*")
        result = firstNumber * secondNumber;
    else if (operation == "/") {
        if (secondNumber == 0) {
            ui->display->setText("Error");
            return;
        }
        result = firstNumber / secondNumber;
    }

    ui->display->setText(QString::number(result));
    isNewNumber = true;
}


void MainWindow::clear_pressed()
{
    ui->display->setText("0");
    firstNumber = 0;
    operation = "";
    isNewNumber = true;
}
