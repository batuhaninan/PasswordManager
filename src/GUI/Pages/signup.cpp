#include "signup.h"
#include "ui_signup.h"

signup::signup(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::signup)
{
    ui->setupUi(this);
}

signup::~signup()
{
    delete ui;
}

void signup::on_registerSubmit_clicked()
{
    QMessageBox msgBox;
    QString firstName,lastName,userName,email,password,rePassword;
    firstName = ui->firstName->text();
    lastName = ui->lastName->text();
    userName = ui->userName->text();
    email = ui->email->text();
    password = ui->password->text();
    rePassword = ui->repassword->text();
    if(password.length()<=8){
        msgBox.warning(this,"Warning","Your password must be at least 8 characters");
        this->close();
    }
    if(password!=rePassword){
        msgBox.warning(this,"Warning","Passwords do not match");
    }

    //ui->registerLabel->setText(firstName);
}

void signup::on_pushButton_clicked(){
    this->close();
}
