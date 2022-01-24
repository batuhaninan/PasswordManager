#include "login.h"
#include "../UI/ui_login.h"

login::login(QWidget *parent) : QMainWindow(parent), ui(new Ui::login) {
  ui->setupUi(this);
  setWindowTitle("Password Manager");
  appIconFilePath = "C:/Users/emre_/Documents/passwordManager/password.png";
  setWindowIcon(QIcon(appIconFilePath));
  // Database database;
}

login::~login() { delete ui; }

void login::on_logInSubmit_clicked() {

  QString logInUserName = ui->logInUserName->text();
  QString logInPassword = ui->logInPassword->text();
  QMessageBox msgBox;
  bool result;
  msgBox.setWindowTitle("Password Manager");
  msgBox.setWindowIcon(QIcon(appIconFilePath));
  std::vector<std::string> userInfo = {logInUserName.toStdString(),
                                       logInPassword.toStdString()};
  // result=database.login(userInfo);
  if (result == true) {
    this->hide();
    mainpage mainpage;
    mainpage.setModal(true);
    mainpage.exec();
  } else {
    msgBox.setText("Login Failed");
    msgBox.setStandardButtons(QMessageBox::Ok);
    msgBox.exec();
  }
}

void login::on_pushButton_clicked() {
  // this->hide();
  signup signup;
  signup.setModal(true);
  signup.exec();
}
