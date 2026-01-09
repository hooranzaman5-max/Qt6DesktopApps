#include "registerscreen.h"
#include "ui_registerscreen.h"
#include "mainwindow.h"
#include "userstore.h"
#include <QMessageBox>


RegisterScreen::RegisterScreen(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::RegisterScreen)
{
    ui->setupUi(this);
    ui->lineEdit->setPlaceholderText("Enter Your Username");
    ui->lineEdit_2->setPlaceholderText("Enter Your Password");
    ui->lineEdit_3->setPlaceholderText("Enter Password Again");
    connect(ui->pushButton2,SIGNAL(clicked()),this,SLOT(login_button_registration_screen()));
    connect(ui->pushButton_2,SIGNAL(clicked()),this,SLOT(register_button_of_registration_screen()));

    this->setFixedSize(600, 290);
}

RegisterScreen::~RegisterScreen()
{
    delete ui;
}

void RegisterScreen::login_button_registration_screen()
{
    this->close();
    MainWindow *login = new MainWindow();
    login->show();
}


void RegisterScreen::register_button_of_registration_screen()
{
    QString uname = ui->lineEdit->text();
    QString password = ui->lineEdit_2->text();
    QString confirmpassword = ui->lineEdit_3->text();

    // 1️⃣ Empty field validation
    if (uname.isEmpty() || password.isEmpty() || confirmpassword.isEmpty())
    {
        QMessageBox::warning(this, "Error", "All fields are required");
        return;
    }

    // 2️⃣ Password match validation
    if (password != confirmpassword)
    {
        QMessageBox::warning(this, "Error", "Passwords do not match");
        return;
    }

    // 3️⃣ Duplicate username check
    if (usernames.contains(uname))
    {
        QMessageBox::warning(this, "Error", "Username already exists");
        return;
    }

    // 4️⃣ Append (NO LIMIT)
    usernames.append(uname);
    passwords.append(password);

    QMessageBox::information(this, "Success", "Registration Successful!");

    this->close();
    MainWindow *login = new MainWindow();
    login->show();
}

