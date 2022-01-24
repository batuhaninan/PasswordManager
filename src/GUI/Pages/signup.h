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
  QString appIconFilePath;
  ~signup();

private slots:
  void on_registerSubmit_clicked();
  void on_pushButton_clicked();

private:
  Ui::signup *ui;
};

#endif // SIGNUP_H
