#include "login.h"
#include "../UI/ui_login.h"
#include <cstdlib>

login::login(QWidget *parent) : QMainWindow(parent), ui(new Ui::login) {
  ui->setupUi(this);
  setWindowTitle("Password Manager");
  appIconFilePath = "../icons/password.png";
  setWindowIcon(QIcon(appIconFilePath));

  std::string env_hostname = std::getenv("PM_HOST");
  std::string user_db = std::getenv("PM_USER_DB");
  std::string password = std::getenv("PM_PASSWORD");

  Database* db = new Database(env_hostname, user_db, user_db, password);

  this->database = db;
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
  result = this->database->login(userInfo);
  if (result == true) {
    this->hide();
    mainpage mainpage;
    mainpage.setModal(true);
    mainpage.setDatabase(this->database);
    mainpage.setDataToTable();
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
  signup.setDatabase(this->database);
  signup.exec();
}
