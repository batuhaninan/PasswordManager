#ifndef LOGIN_H
#define LOGIN_H
#include "../../DB/Database.hpp"
#include "mainpage.h"
#include "signup.h"
namespace Ui {
class login;
}

class login : public QMainWindow {
  Q_OBJECT

public:
  explicit login(QWidget *parent = nullptr);
  QString appIconFilePath;
  ~login();

private slots:

  void on_logInSubmit_clicked();
  void on_pushButton_clicked();

private:
  Ui::login *ui;
};
#endif // LOGIN_H
