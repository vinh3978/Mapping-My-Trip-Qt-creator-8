#include "login.h"
#include "ui_login.h"
#include <QApplication>d
#include <QMessageBox>

login::login(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::login)
{
    ui->setupUi(this);
}

login::~login()
{
    delete ui;
}

void login::on_pushButton_login_clicked()
{
    QString username = ui->lineEdit_username->text();
    QString password = ui->lineEdit_password->text();

    if (username == "admin" && password=="admin") {
        hide();
        QMessageBox::information(this,"Login","Loggin successfully");
        map = new class map(this);
        map->show();
    } else {
        QMessageBox::warning(this,"Login","Username or password is wrong");
    }
}

