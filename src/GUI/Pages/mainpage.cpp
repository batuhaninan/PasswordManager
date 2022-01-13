#include "mainpage.h"
#include "ui_mainpage.h"

mainpage::mainpage(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::mainpage)
{
    ui->setupUi(this);
    setWindowTitle("Main page");

    QStringList titles;
    ui->tableWidget->setColumnCount(6);
    titles<<"Username"<<"Password"<<"Description"<<""<<""<<"";
    ui->tableWidget->setHorizontalHeaderLabels(titles);
    ui->tableWidget->horizontalHeader()->setDefaultSectionSize(93);
    ui->tableWidget->verticalHeader()->setDefaultSectionSize(39);
    connect(ui->tableWidget, SIGNAL(cellClicked(int,int)), this, SLOT(tableItemClicked(int,int)));
    tableSetModel();
}

mainpage::~mainpage()
{
    delete ui;
}

void mainpage::tableItemClicked(int row, int column)
{
    if(column==3){
        openPassword(row);
    }
    else if(column==4){
        edit(row);
    }
    else if(column==5){
        del(row);
    }

}

void mainpage::edit(int row){
    QTableWidgetItem *usernameItem = ui->tableWidget->item(row,0);
    QTableWidgetItem *passwordItem = ui->tableWidget->item(row,1);
    QTableWidgetItem *descriptionItem = ui->tableWidget->item(row,2);
    editpage editpage(usernameItem->text(),passwordItem->text(),descriptionItem->text());
    editpage.setModal(true);
    editpage.setWindowTitle("Edit");
    editpage.exec();
}

void mainpage::openPassword(int row){
    QTableWidgetItem *passwordItem = ui->tableWidget->item(row,1);
    QString passwordata=passwordItem->text();
    QString stars="*********";
    if(passwordata==stars){
        //passwordItem->setText("emre1234");
        ui->tableWidget->setItem(row,1,new QTableWidgetItem("emre123"));
    }else{
        //passwordItem->setText("*********");
        ui->tableWidget->setItem(row,1,new QTableWidgetItem("*********"));
    }
}

void mainpage::del(int row){
    QTableWidgetItem *usernameItem = ui->tableWidget->item(row,0);
    QTableWidgetItem *passwordItem = ui->tableWidget->item(row,1);
    QTableWidgetItem *descriptionItem = ui->tableWidget->item(row,2);
    QString username,password,description;
    username=usernameItem->text();
    password=passwordItem->text();
    description=descriptionItem->text();
    QMessageBox msgBox;
    msgBox.setText("Do you want to delete?");
    msgBox.setStandardButtons(QMessageBox::Yes|QMessageBox::No);
    msgBox.setDefaultButton(QMessageBox::Yes);
    int ret = msgBox.exec();
    switch (ret) {
      case QMessageBox::Yes:
          ui->tableWidget->removeRow(row);
          break;
      case QMessageBox::No:
          break;
    }

}

QWidget* mainpage::addItemIcon(QString item){
    QSize sizeIcon(20, 20);
    QWidget *pWidget = new QWidget();
    QLabel *label = new QLabel;
    label->setMaximumSize(sizeIcon);
    label->setScaledContents(true);
    label->setPixmap(QPixmap(item));
    QHBoxLayout *pLayout = new QHBoxLayout(pWidget);
    pLayout->addWidget(label);
    pLayout->setAlignment(Qt::AlignCenter);
    pLayout->setContentsMargins(0,0,0,0);
    pWidget->setLayout(pLayout);
    return pWidget;
}

void mainpage::tableSetModel(){
    // vectordeki bilgileri tabloya yerleştriyor
    std::vector<std::vector<std::string>> vect
    {
        {"emreyasin","emre123","instagram"},
        {"emreyasin","emre123","facebook"},
        {"emreyasin","123456","twitter"}
    };


    int order;
    QString eyeIcon = "C:/Users/emre_/Documents/passwordManager/visibility.png";
    QString editIcon = "C:/Users/emre_/Documents/passwordManager/editing.png";
    QString deleteIcon = "C:/Users/emre_/Documents/passwordManager/bin.png";
    QString element;

    for (int i = 0; i <vect.size(); i++){
         ui->tableWidget->insertRow(ui->tableWidget->rowCount());
        for (int j = 0; j < vect[i].size()+3; j++){
            order=ui->tableWidget->rowCount()-1;
            if(j<=2){
                element=QString::fromStdString(vect[i][j]);
            }
            if(j==0){

                ui->tableWidget->setItem(order,USERNAME,new QTableWidgetItem(element));
            }
            else if(j==1){

                ui->tableWidget->setItem(order,PASSWORD,new QTableWidgetItem(QString::fromStdString(std::string(element.size(),'*'))));
            }
            else if(j==2){

                ui->tableWidget->setItem(order,DESCRIPTION,new QTableWidgetItem(element));
            }
            else if(j==3)
            {
                QWidget *pWidget = addItemIcon(eyeIcon);
                ui->tableWidget->setCellWidget(i, j, pWidget);
            }
            else if(j==4)
            {
                QWidget *pWidget = addItemIcon(editIcon);
                ui->tableWidget->setCellWidget(i, j, pWidget);
            }
            else if(j==5){
                QWidget *pWidget = addItemIcon(deleteIcon);
                ui->tableWidget->setCellWidget(i, j, pWidget);
            }

        }
    }
}

void mainpage::on_save_clicked()
{
    // kullanıcının kaydetmek için girdiği username,password,description bilgilerini tabloya ekliyor
    QString username,password,description;
    username=ui->username->text();
    password=ui->password->text();
    description=ui->description->text();


    int order;
    QString eyeIcon = "C:/Users/emre_/Documents/passwordManager/visibility.png";
    QString editIcon = "C:/Users/emre_/Documents/passwordManager/editing.png";
    QString deleteIcon = "C:/Users/emre_/Documents/passwordManager/bin.png";

     ui->tableWidget->insertRow(ui->tableWidget->rowCount());
    for (int j = 0; j < 6; j++){
        order=ui->tableWidget->rowCount()-1;
        if(j==0){
            ui->tableWidget->setItem(order,USERNAME,new QTableWidgetItem(username));
        }
        else if(j==1){
            ui->tableWidget->setItem(order,PASSWORD,new QTableWidgetItem("*********"));
        }
        else if(j==2){
            ui->tableWidget->setItem(order,DESCRIPTION,new QTableWidgetItem(description));
        }
        else if(j==3)
        {
            QWidget *pWidget = addItemIcon(eyeIcon);
            ui->tableWidget->setCellWidget(order, j, pWidget);
        }
        else if(j==4)
        {
            QWidget *pWidget = addItemIcon(editIcon);
            ui->tableWidget->setCellWidget(order, j, pWidget);
        }
        else if(j==5){
            QWidget *pWidget = addItemIcon(deleteIcon);
            ui->tableWidget->setCellWidget(order, j, pWidget);
        }

    }

    QMessageBox msgBox;
    if(true){
        msgBox.setText("Saved");
        msgBox.setStandardButtons(QMessageBox::Ok);
        msgBox.exec();
    }else{
        msgBox.setText("Not saved");
        msgBox.setStandardButtons(QMessageBox::Ok);
        msgBox.exec();

    }
}
