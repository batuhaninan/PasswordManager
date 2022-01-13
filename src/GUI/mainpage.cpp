#include "mainpage.h"
#include "ui_mainpage.h"

mainpage::mainpage(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::mainpage)
{
    ui->setupUi(this);
}

mainpage::~mainpage()
{
    delete ui;
}

void mainpage::on_mainpage_accepted()
{

}
