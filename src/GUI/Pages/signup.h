#ifndef SIGNUP_H
#define SIGNUP_H
#include "../../DB/Database.hpp"
#include "login.h"
namespace Ui {
class signup;
}

class signup : public QDialog {
  Q_OBJECT

public:
  explicit signup(QWidget *parent = nullptr);
  void setDatabase(Database* db) {
      this->database = db;
  }
  QString appIconFilePath;
  ~signup();

private slots:
  void on_registerSubmit_clicked();
  void on_pushButton_clicked();

private:
  Database* database;
  Ui::signup *ui;
};

#endif // SIGNUP_H
