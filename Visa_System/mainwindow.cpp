#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include "visa_form_screen.h"
#include "registerscreen.h"
#include "userstore.h"


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->setFixedSize(600, 290);
    connect(ui->pushButton,SIGNAL(clicked()),this,SLOT(login_button()));
    connect(ui->pushButton2,SIGNAL(clicked()),this,SLOT(register_button()));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::login_button()
{
    QString username = ui->lineEdit_2->text();
    QString password = ui->lineEdit_3->text();

    for (int i = 0; i < usernames.size(); i++)
    {
        if (username == usernames[i] && password == passwords[i])
        {
            // Close login window
            this->close();

            // Create visa form on heap
            Visa_Form_Screen *visaForm = new Visa_Form_Screen();

            // Show visa application form
            visaForm->show();

            return;
        }
    }

    QMessageBox::warning(
        this,
        "Error",
        "Invalid Username or Password"
        );
}


void MainWindow::register_button()
{
    this->close();
    RegisterScreen *registration = new RegisterScreen();
    registration->show();
}

