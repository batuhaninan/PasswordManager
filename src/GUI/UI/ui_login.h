/********************************************************************************
** Form generated from reading UI file 'login.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGIN_H
#define UI_LOGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_login {
public:
  QWidget *centralwidget;
  QLabel *title;
  QGroupBox *logInGroupBox;
  QLineEdit *logInUserName;
  QPushButton *logInSubmit;
  QLineEdit *logInPassword;
  QPushButton *pushButton;
  QLabel *label;
  QMenuBar *menubar;
  QStatusBar *statusbar;

  void setupUi(QMainWindow *login) {
    if (login->objectName().isEmpty())
      login->setObjectName(QString::fromUtf8("login"));
    login->resize(552, 532);
    login->setStyleSheet(QString::fromUtf8("background-color:#1E1E1E"));
    centralwidget = new QWidget(login);
    centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
    title = new QLabel(centralwidget);
    title->setObjectName(QString::fromUtf8("title"));
    title->setGeometry(QRect(30, 20, 471, 121));
    QFont font;
    font.setPointSize(29);
    font.setBold(true);
    title->setFont(font);
    title->setLayoutDirection(Qt::LeftToRight);
    title->setStyleSheet(QString::fromUtf8("color:white;\n"
                                           "\n"
                                           ""));
    title->setTextFormat(Qt::PlainText);
    title->setAlignment(Qt::AlignCenter);
    logInGroupBox = new QGroupBox(centralwidget);
    logInGroupBox->setObjectName(QString::fromUtf8("logInGroupBox"));
    logInGroupBox->setGeometry(QRect(50, 140, 451, 341));
    QFont font1;
    font1.setPointSize(24);
    logInGroupBox->setFont(font1);
    logInGroupBox->setStyleSheet(QString::fromUtf8("color:white"));
    logInGroupBox->setAlignment(Qt::AlignLeading | Qt::AlignLeft |
                                Qt::AlignVCenter);
    logInUserName = new QLineEdit(logInGroupBox);
    logInUserName->setObjectName(QString::fromUtf8("logInUserName"));
    logInUserName->setGeometry(QRect(110, 90, 241, 41));
    QFont font2;
    font2.setPointSize(14);
    logInUserName->setFont(font2);
    logInUserName->setStyleSheet(
        QString::fromUtf8("border: 2px solid #13E4E4;\n"
                          "border-radius:5px;\n"
                          "color:white"));
    logInUserName->setAlignment(Qt::AlignLeading | Qt::AlignLeft |
                                Qt::AlignVCenter);
    logInSubmit = new QPushButton(logInGroupBox);
    logInSubmit->setObjectName(QString::fromUtf8("logInSubmit"));
    logInSubmit->setEnabled(true);
    logInSubmit->setGeometry(QRect(140, 220, 181, 41));
    logInSubmit->setFont(font2);
    logInSubmit->setMouseTracking(false);
    logInSubmit->setAutoFillBackground(false);
    logInSubmit->setStyleSheet(QString::fromUtf8("border: 2px solid #13E4E4;\n"
                                                 "border-radius:5px;\n"
                                                 "color:white"));
    logInPassword = new QLineEdit(logInGroupBox);
    logInPassword->setObjectName(QString::fromUtf8("logInPassword"));
    logInPassword->setGeometry(QRect(110, 150, 241, 41));
    logInPassword->setFont(font2);
    logInPassword->setStyleSheet(
        QString::fromUtf8("border: 2px solid #13E4E4;\n"
                          "border-radius:5px;\n"
                          "color:white"));
    logInPassword->setEchoMode(QLineEdit::Password);
    pushButton = new QPushButton(logInGroupBox);
    pushButton->setObjectName(QString::fromUtf8("pushButton"));
    pushButton->setGeometry(QRect(260, 290, 121, 31));
    QFont font3;
    font3.setPointSize(12);
    pushButton->setFont(font3);
    pushButton->setStyleSheet(QString::fromUtf8("border: 2px solid #13E4E4;\n"
                                                "border-radius:5px;\n"
                                                "color:white"));
    label = new QLabel(logInGroupBox);
    label->setObjectName(QString::fromUtf8("label"));
    label->setGeometry(QRect(110, 300, 161, 21));
    QFont font4;
    font4.setPointSize(9);
    label->setFont(font4);
    logInSubmit->raise();
    logInPassword->raise();
    logInUserName->raise();
    label->raise();
    pushButton->raise();
    login->setCentralWidget(centralwidget);
    menubar = new QMenuBar(login);
    menubar->setObjectName(QString::fromUtf8("menubar"));
    menubar->setGeometry(QRect(0, 0, 552, 26));
    login->setMenuBar(menubar);
    statusbar = new QStatusBar(login);
    statusbar->setObjectName(QString::fromUtf8("statusbar"));
    login->setStatusBar(statusbar);
    QWidget::setTabOrder(logInUserName, logInPassword);
    QWidget::setTabOrder(logInPassword, logInSubmit);
    QWidget::setTabOrder(logInSubmit, pushButton);

    retranslateUi(login);

    QMetaObject::connectSlotsByName(login);
  } // setupUi

  void retranslateUi(QMainWindow *login) {
    login->setWindowTitle(QApplication::translate("login", "login", nullptr));
    title->setText(
        QApplication::translate("login", "Password Manager", nullptr));
    logInGroupBox->setTitle(QApplication::translate("login", "Login", nullptr));
    logInUserName->setText(QString());
    logInUserName->setPlaceholderText(
        QApplication::translate("login", "Username", nullptr));
    logInSubmit->setText(QApplication::translate("login", "LOGIN", nullptr));
    logInPassword->setText(QString());
    logInPassword->setPlaceholderText(
        QApplication::translate("login", "Password", nullptr));
    pushButton->setText(QApplication::translate("login", "Sign up", nullptr));
    label->setText(
        QApplication::translate("login", "Don't have an account?", nullptr));
  } // retranslateUi
};

namespace Ui {
class login : public Ui_login {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_H
