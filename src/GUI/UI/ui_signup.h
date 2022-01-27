/********************************************************************************
** Form generated from reading UI file 'signup.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SIGNUP_H
#define UI_SIGNUP_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_signup
{
public:
    QGroupBox *registerGroupBox;
    QLineEdit *userName;
    QLineEdit *repassword;
    QLineEdit *email;
    QPushButton *registerSubmit;
    QLineEdit *password;
    QLabel *label;
    QPushButton *pushButton;

    void setupUi(QDialog *signup)
    {
        if (signup->objectName().isEmpty())
            signup->setObjectName(QString::fromUtf8("signup"));
        signup->resize(560, 568);
        signup->setStyleSheet(QString::fromUtf8("background-color:#1E1E1E"));
        registerGroupBox = new QGroupBox(signup);
        registerGroupBox->setObjectName(QString::fromUtf8("registerGroupBox"));
        registerGroupBox->setGeometry(QRect(50, 40, 461, 491));
        QFont font;
        font.setPointSize(24);
        registerGroupBox->setFont(font);
        registerGroupBox->setStyleSheet(QString::fromUtf8("color:white"));
        userName = new QLineEdit(registerGroupBox);
        userName->setObjectName(QString::fromUtf8("userName"));
        userName->setGeometry(QRect(110, 80, 241, 41));
        QFont font1;
        font1.setPointSize(14);
        userName->setFont(font1);
        userName->setStyleSheet(QString::fromUtf8("border: 2px solid #13E4E4;\n"
"border-radius:5px;\n"
"color:white"));
        repassword = new QLineEdit(registerGroupBox);
        repassword->setObjectName(QString::fromUtf8("repassword"));
        repassword->setGeometry(QRect(110, 290, 241, 41));
        repassword->setFont(font1);
        repassword->setStyleSheet(QString::fromUtf8("border: 2px solid #13E4E4;\n"
"border-radius:5px;\n"
"color:white"));
        repassword->setEchoMode(QLineEdit::Password);
        email = new QLineEdit(registerGroupBox);
        email->setObjectName(QString::fromUtf8("email"));
        email->setGeometry(QRect(110, 150, 241, 41));
        email->setFont(font1);
        email->setStyleSheet(QString::fromUtf8("border: 2px solid #13E4E4;\n"
"border-radius:5px;\n"
"color:white"));
        registerSubmit = new QPushButton(registerGroupBox);
        registerSubmit->setObjectName(QString::fromUtf8("registerSubmit"));
        registerSubmit->setEnabled(true);
        registerSubmit->setGeometry(QRect(140, 360, 181, 41));
        registerSubmit->setFont(font1);
        registerSubmit->setMouseTracking(false);
        registerSubmit->setAutoFillBackground(false);
        registerSubmit->setStyleSheet(QString::fromUtf8("border: 2px solid #13E4E4;\n"
"border-radius:5px;\n"
"color:white"));
        password = new QLineEdit(registerGroupBox);
        password->setObjectName(QString::fromUtf8("password"));
        password->setGeometry(QRect(110, 220, 241, 41));
        password->setFont(font1);
        password->setStyleSheet(QString::fromUtf8("border: 2px solid #13E4E4;\n"
"border-radius:5px;\n"
"color:white"));
        password->setEchoMode(QLineEdit::Password);
        label = new QLabel(registerGroupBox);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(110, 440, 161, 21));
        QFont font2;
        font2.setPointSize(9);
        label->setFont(font2);
        pushButton = new QPushButton(registerGroupBox);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(260, 430, 121, 31));
        QFont font3;
        font3.setPointSize(12);
        pushButton->setFont(font3);
        pushButton->setStyleSheet(QString::fromUtf8("border: 2px solid #13E4E4;\n"
"border-radius:5px;\n"
"color:white"));
        QWidget::setTabOrder(userName, email);
        QWidget::setTabOrder(email, password);
        QWidget::setTabOrder(password, repassword);
        QWidget::setTabOrder(repassword, registerSubmit);
        QWidget::setTabOrder(registerSubmit, pushButton);

        retranslateUi(signup);

        QMetaObject::connectSlotsByName(signup);
    } // setupUi

    void retranslateUi(QDialog *signup)
    {
        signup->setWindowTitle(QApplication::translate("signup", "Dialog", nullptr));
        registerGroupBox->setTitle(QApplication::translate("signup", "Create Account", nullptr));
        userName->setText(QString());
        userName->setPlaceholderText(QApplication::translate("signup", "Username", nullptr));
        repassword->setText(QString());
        repassword->setPlaceholderText(QApplication::translate("signup", "Password Again", nullptr));
        email->setText(QString());
        email->setPlaceholderText(QApplication::translate("signup", "Email Address", nullptr));
        registerSubmit->setText(QApplication::translate("signup", "SIGN UP", nullptr));
        password->setText(QString());
        password->setPlaceholderText(QApplication::translate("signup", "Password", nullptr));
        label->setText(QApplication::translate("signup", "Already have a account?", nullptr));
        pushButton->setText(QApplication::translate("signup", "Sign in", nullptr));
    } // retranslateUi

};

namespace Ui {
    class signup: public Ui_signup {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SIGNUP_H
