#include "editpage.h"
#include "ui_editpage.h"
#include <iostream>
editpage::editpage(QString username,QString password,QString description,QWidget *parent) :
    QDialog(parent),
    ui(new Ui::editpage)
{

    ui->setupUi(this);
    //std::cout<<username<<"   "<<password<<"    "<<description;
    ui->username->setText(username);
    ui->password->setText(password);
    ui->description->setText(description);
}

editpage::~editpage()
{
    delete ui;
}

void editpage::on_save_clicked()
{
    QString username,password,description;
    username=ui->username->text();
    password=ui->password->text();
    description=ui->description->text();

    this->close();
}
