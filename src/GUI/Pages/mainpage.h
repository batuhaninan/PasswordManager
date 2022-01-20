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
    void setDataToTable();
    ~mainpage();

private slots:
    void tableItemClicked(int row, int column);
    void on_save_clicked();
    void updateData(int row);
    void updateDataInTable(int row,std::vector<std::string> editedData);
    void updateDataInVector(int row,std::vector<std::string> editedData);
    void openOrClosePassword(int row);
    void deleteData(int row);
    int showMessageBoxForDelete();
    std::vector<QString> getSelectedDataInTable(int row);
    QWidget* setIconForTable(QString iconFilePath);
    void throwFilePathOfIcons();
    void setGeneralPropertiesOfTable();

private:
    std::vector<std::vector<std::string>> data;
    QString hiddenEyeIconFilePath,eyeIconFilePath,editIconFilePath,deleteIconFilePath,appIconFilePath;
    enum colons{
        USERNAME,PASSWORD,DESCRIPTION
    };
    Ui::mainpage *ui;

};

#endif // MAINPAGE_H
