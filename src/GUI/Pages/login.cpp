#include "login.h"
#include "ui_login.h"


login::login(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::login)
{
    ui->setupUi(this);
}

login::~login()
{
    delete ui;
}

void login::on_logInSubmit_clicked()
{
    QString userNameData="e";
    QString passwordData="e";
    QString userName = ui->logInUserName->text();
    QString password = ui->logInPassword->text();
    if(userNameData==userName && passwordData==password){
        //QMessageBox::information(this,"Success","Login Success");
        this->hide();
        mainpage mainpage;
        mainpage.setModal(true);
        mainpage.exec();
    }else{
        QMessageBox::information(this,"Failed","Login Failed");
    }
}

void login::on_pushButton_clicked()
{
    //this->hide();
    signup signup;
    signup.setModal(true);
    signup.exec();
}
