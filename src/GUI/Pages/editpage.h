#ifndef EDITPAGE_H
#define EDITPAGE_H

#include <QDialog>
#include "mainpage.h"
namespace Ui {
class editpage;
}

class editpage : public QDialog
{
    Q_OBJECT

public:

    explicit editpage(QString username,QString password,QString description,QWidget *parent = nullptr);
    std::vector<std::string> editedData={};
    QString appIconFilePath;
    ~editpage();

private slots:
    void on_save_clicked();


private:
    QString username,password,description;
    Ui::editpage *ui;
};

#endif // EDITPAGE_H
