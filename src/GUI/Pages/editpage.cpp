#include "editpage.h"
#include "../UI/ui_editpage.h"
#include <iostream>
editpage::editpage(QString username, QString password, QString description,
                   QWidget *parent)
    : QDialog(parent), ui(new Ui::editpage) {

  ui->setupUi(this);
  setWindowTitle("Edit");
  appIconFilePath = "C:/Users/emre_/Documents/passwordManager/password.png";
  setWindowIcon(QIcon(appIconFilePath));
  ui->username->setText(username);
  ui->password->setText(password);
  ui->description->setText(description);
}

void editpage::on_save_clicked() {
  QString username, password, description;
  username = ui->username->text();
  password = ui->password->text();
  description = ui->description->text();

  editedData = {username.toStdString(), password.toStdString(),
                description.toStdString()};

  this->close();
}
