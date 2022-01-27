/********************************************************************************
** Form generated from reading UI file 'mainpage.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINPAGE_H
#define UI_MAINPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>

QT_BEGIN_NAMESPACE

class Ui_mainpage {
public:
  QGroupBox *addnew;
  QPushButton *save;
  QLineEdit *username;
  QLineEdit *description;
  QLineEdit *password;
  QTableWidget *tableWidget;

  void setupUi(QDialog *mainpage) {
    if (mainpage->objectName().isEmpty())
      mainpage->setObjectName(QString::fromUtf8("mainpage"));
    mainpage->resize(1048, 700);
    mainpage->setStyleSheet(QString::fromUtf8("background-color:#1E1E1E\n"
                                              ""));
    addnew = new QGroupBox(mainpage);
    addnew->setObjectName(QString::fromUtf8("addnew"));
    addnew->setGeometry(QRect(30, 40, 341, 371));
    QFont font;
    font.setPointSize(23);
    addnew->setFont(font);
    addnew->setStyleSheet(QString::fromUtf8("color:white;"));
    save = new QPushButton(addnew);
    save->setObjectName(QString::fromUtf8("save"));
    save->setEnabled(true);
    save->setGeometry(QRect(110, 280, 121, 41));
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
    username->setGeometry(QRect(50, 80, 241, 41));
    username->setFont(font1);
    username->setStyleSheet(QString::fromUtf8("border: 2px solid #13E4E4;\n"
                                              "border-radius:5px;\n"
                                              "color:white"));
    description = new QLineEdit(addnew);
    description->setObjectName(QString::fromUtf8("description"));
    description->setGeometry(QRect(50, 220, 241, 41));
    description->setFont(font1);
    description->setStyleSheet(QString::fromUtf8("border: 2px solid #13E4E4;\n"
                                                 "border-radius:5px;\n"
                                                 "color:white"));
    password = new QLineEdit(addnew);
    password->setObjectName(QString::fromUtf8("password"));
    password->setGeometry(QRect(50, 150, 241, 41));
    password->setFont(font1);
    password->setStyleSheet(QString::fromUtf8("border: 2px solid #13E4E4;\n"
                                              "border-radius:5px;\n"
                                              "color:white"));
    password->setEchoMode(QLineEdit::Normal);
    tableWidget = new QTableWidget(mainpage);
    tableWidget->setObjectName(QString::fromUtf8("tableWidget"));
    tableWidget->setGeometry(QRect(420, 60, 591, 581));
    QFont font2;
    font2.setBold(true);
    tableWidget->setFont(font2);
    tableWidget->setAutoFillBackground(false);
    tableWidget->setStyleSheet(
        QString::fromUtf8("QWidget{\n"
                          "background-color:#ffffff;\n"
                          "\n"
                          "}\n"
                          "\n"
                          "QTableWidget {\n"
                          "border:2px solid #13E4E4;\n"
                          "border-radius:5px;\n"
                          "color:black;\n"
                          "background-color: #ffffff;\n"
                          "\n"
                          "}\n"
                          "QHeaderView::section {\n"
                          "    background-color: #DDDDDD;\n"
                          "    padding: 4px;\n"
                          "    font-size: 12pt;\n"
                          "    border-style: none;\n"
                          "	border-bottom:2px solid #13E4E4;\n"
                          "};\n"
                          "color:black;\n"
                          "background-color:#7E8279;\n"
                          "border-radius:3px;\n"
                          ""));
    tableWidget->setVerticalScrollBarPolicy(Qt::ScrollBarAsNeeded);
    tableWidget->setHorizontalScrollBarPolicy(Qt::ScrollBarAsNeeded);
    tableWidget->setSizeAdjustPolicy(QAbstractScrollArea::AdjustIgnored);
    tableWidget->horizontalHeader()->setMinimumSectionSize(48);
    tableWidget->horizontalHeader()->setDefaultSectionSize(125);
    tableWidget->horizontalHeader()->setProperty("showSortIndicator",
                                                 QVariant(false));
    tableWidget->horizontalHeader()->setStretchLastSection(false);
    tableWidget->verticalHeader()->setVisible(false);
    tableWidget->verticalHeader()->setCascadingSectionResizes(true);
    tableWidget->verticalHeader()->setMinimumSectionSize(30);
    tableWidget->verticalHeader()->setProperty("showSortIndicator",
                                               QVariant(false));
    tableWidget->verticalHeader()->setStretchLastSection(false);
    QWidget::setTabOrder(username, password);
    QWidget::setTabOrder(password, description);
    QWidget::setTabOrder(description, save);
    QWidget::setTabOrder(save, tableWidget);

    retranslateUi(mainpage);

    QMetaObject::connectSlotsByName(mainpage);
  } // setupUi

  void retranslateUi(QDialog *mainpage) {
    mainpage->setWindowTitle(
        QApplication::translate("mainpage", "Dialog", nullptr));
    addnew->setTitle(QApplication::translate("mainpage", "Add", nullptr));
    save->setText(QApplication::translate("mainpage", "Add", nullptr));
    username->setText(QString());
    username->setPlaceholderText(
        QApplication::translate("mainpage", "Username", nullptr));
    description->setText(QString());
    description->setPlaceholderText(
        QApplication::translate("mainpage", "Description", nullptr));
    password->setText(QString());
    password->setPlaceholderText(
        QApplication::translate("mainpage", "Password", nullptr));
  } // retranslateUi
};

namespace Ui {
class mainpage : public Ui_mainpage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINPAGE_H
