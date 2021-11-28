#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <QMessageBox>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_registerSubmit_clicked()
{
    QMessageBox msgBox;
    msgBox.setStyleSheet("background-color: white");
    QString firstName = ui->firstName->text();
    QString lastName = ui->lastName->text();
    QString userName = ui->userName->text();
    QString email = ui->email->text();
    QString password = ui->password->text();
    QString rePassword = ui->repassword->text();
    if(password.length()<=8){
        msgBox.warning(this,"Warning","Your password must be at least 8 characters");
    }
    if(password!=rePassword){
        msgBox.warning(this,"Warning","Passwords do not match");
    }
    //ui->registerLabel->setText(firstName);
}

void MainWindow::on_logInSubmit_clicked()
{
    QString userNameData="emreyasin";
    QString passwordData="emre123";
    QString userName = ui->logInUserName->text();
    QString password = ui->logInPassword->text();
    if(userNameData==userName && passwordData==password){
        QMessageBox::information(this,"Success","Login Success");
    }else{
        QMessageBox::information(this,"Failed","Login Failed");
    }
}
