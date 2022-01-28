/********************************************************************************
** Form generated from reading UI file 'editpage.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDITPAGE_H
#define UI_EDITPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_editpage
{
public:
    QGroupBox *addnew;
    QPushButton *save;
    QLineEdit *username;
    QLineEdit *description;
    QLineEdit *password;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;

    void setupUi(QDialog *editpage)
    {
        if (editpage->objectName().isEmpty())
            editpage->setObjectName(QString::fromUtf8("editpage"));
        editpage->resize(443, 480);
        editpage->setStyleSheet(QString::fromUtf8("background-color:#1E1E1E"));
        addnew = new QGroupBox(editpage);
        addnew->setObjectName(QString::fromUtf8("addnew"));
        addnew->setGeometry(QRect(50, 30, 341, 411));
        QFont font;
        font.setPointSize(23);
        addnew->setFont(font);
        addnew->setStyleSheet(QString::fromUtf8("color:white"));
        save = new QPushButton(addnew);
        save->setObjectName(QString::fromUtf8("save"));
        save->setEnabled(true);
        save->setGeometry(QRect(120, 350, 111, 41));
        QFont font1;
        font1.setPointSize(14);
        save->setFont(font1);
        save->setMouseTracking(false);
        save->setAutoFillBackground(false);
        save->setStyleSheet(QString::fromUtf8("border: 2px solid #13E4E4;\n"
"border-radius:5px;\n"
"color:white"));
        username = new QLineEdit(addnew);
        username->setObjectName(QString::fromUtf8("username"));
        username->setGeometry(QRect(50, 110, 241, 41));
        username->setFont(font1);
        username->setStyleSheet(QString::fromUtf8("border: 2px solid #13E4E4;\n"
"border-radius:5px;\n"
"color:white"));
        description = new QLineEdit(addnew);
        description->setObjectName(QString::fromUtf8("description"));
        description->setEnabled(false);
        description->setGeometry(QRect(50, 290, 241, 41));
        description->setFont(font1);
        description->setStyleSheet(QString::fromUtf8("border: 2px solid #13E4E4;\n"
"border-radius:5px;\n"
"color:white"));
        description->setDragEnabled(false);
        description->setClearButtonEnabled(false);
        password = new QLineEdit(addnew);
        password->setObjectName(QString::fromUtf8("password"));
        password->setGeometry(QRect(50, 200, 241, 41));
        password->setFont(font1);
        password->setStyleSheet(QString::fromUtf8("border: 2px solid #13E4E4;\n"
"border-radius:5px;\n"
"color:white"));
        password->setEchoMode(QLineEdit::Normal);
        label = new QLabel(addnew);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(50, 70, 111, 31));
        QFont font2;
        font2.setPointSize(13);
        label->setFont(font2);
        label_2 = new QLabel(addnew);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(50, 160, 111, 31));
        label_2->setFont(font2);
        label_3 = new QLabel(addnew);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(50, 250, 111, 31));
        label_3->setFont(font2);
        QWidget::setTabOrder(username, password);
        QWidget::setTabOrder(password, description);
        QWidget::setTabOrder(description, save);

        retranslateUi(editpage);

        QMetaObject::connectSlotsByName(editpage);
    } // setupUi

    void retranslateUi(QDialog *editpage)
    {
        editpage->setWindowTitle(QApplication::translate("editpage", "Dialog", nullptr));
        addnew->setTitle(QApplication::translate("editpage", "Edit", nullptr));
        save->setText(QApplication::translate("editpage", "Save", nullptr));
        username->setText(QString());
        username->setPlaceholderText(QApplication::translate("editpage", "Username", nullptr));
        description->setText(QString());
        description->setPlaceholderText(QApplication::translate("editpage", "Description", nullptr));
        password->setText(QString());
        password->setPlaceholderText(QApplication::translate("editpage", "Password", nullptr));
        label->setText(QApplication::translate("editpage", "Username", nullptr));
        label_2->setText(QApplication::translate("editpage", "Password", nullptr));
        label_3->setText(QApplication::translate("editpage", "Description", nullptr));
    } // retranslateUi

};

namespace Ui {
    class editpage: public Ui_editpage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDITPAGE_H
