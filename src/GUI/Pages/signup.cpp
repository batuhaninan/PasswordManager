#include "signup.h"
#include "../UI/ui_signup.h"

signup::signup(QWidget *parent) : QDialog(parent), ui(new Ui::signup) {
  ui->setupUi(this);
  setWindowTitle("Create Account");
  appIconFilePath = "../src/GUI/icons/password.png";
  setWindowIcon(QIcon(appIconFilePath));
}

signup::~signup() { delete ui; }

void signup::on_registerSubmit_clicked() {

  QString userName, email, password, rePassword;
  userName = ui->userName->text();
  email = ui->email->text();
  password = ui->password->text();
  rePassword = ui->repassword->text();
  QMessageBox msgBox;
  bool result;
  msgBox.setWindowTitle("Password Manager");
  msgBox.setWindowIcon(QIcon(appIconFilePath));
  std::vector<std::string> newUserInfo = {
      userName.toStdString(), email.toStdString(), password.toStdString()};
  if (password.length() < 8 && password != rePassword) {
    msgBox.setText("Your password must be at least 8 characters.\nPasswords do "
                   "not match.");
    msgBox.setStandardButtons(QMessageBox::Ok);
    msgBox.exec();
  } else if (password.length() < 8) {
    msgBox.setText("Your password must be at least 8 characters");
    msgBox.setStandardButtons(QMessageBox::Ok);
    msgBox.exec();
  } else if (password != rePassword) {
    msgBox.setText("Passwords do not match");
    msgBox.setStandardButtons(QMessageBox::Ok);
    msgBox.exec();
  } else {
    result=database->signup(newUserInfo);
    if (result == 0) {
      msgBox.setText("There is a registered user with this username.");
      msgBox.setStandardButtons(QMessageBox::Ok);
      msgBox.exec();
    } else if (result) {
      msgBox.setText("Saved");
      msgBox.setStandardButtons(QMessageBox::Ok);
      msgBox.exec();
      this->close();
    }
  }
}

void signup::on_pushButton_clicked() { this->close(); }
