#ifndef MAINPAGE_H
#define MAINPAGE_H
#include<QtDebug>
#include<QFileInfo>
#include <QDialog>
#include<iostream>
#include <QLabel>
#include <QHBoxLayout>
#include<QMessageBox>
#include <QMainWindow>
#include <QTableWidget>
#include "editpage.h"

namespace Ui {
class mainpage;
}

class mainpage : public QDialog
{
    Q_OBJECT

public:
    explicit mainpage(QWidget *parent = nullptr);
    void tableSetModel();

    ~mainpage();

private slots:
    void on_save_clicked();
    void tableItemClicked(int row, int column);
    void edit(int row);
    void openPassword(int row);
    void del(int row);
    QWidget* addItemIcon(QString item);

private:
    enum colons{
        USERNAME,PASSWORD,DESCRIPTION
    };
    Ui::mainpage *ui;

};

#endif // MAINPAGE_H
