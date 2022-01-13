#ifndef LOGIN_H
#define LOGIN_H
#include "mainpage.h"
#include "signup.h"

namespace Ui {
class login;
}


class login : public QMainWindow
{
    Q_OBJECT

public:
    explicit login(QWidget *parent = nullptr);
    ~login();

private slots:

    void on_logInSubmit_clicked();

    void on_pushButton_clicked();
private:
    Ui::login *ui;
};
#endif // LOGIN_H
