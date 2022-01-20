#include "mainpage.h"
#include "ui_mainpage.h"

mainpage::mainpage(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::mainpage)
{
    // anasayfanın kurucu fonksiyonu constrcutor
    ui->setupUi(this);
    throwFilePathOfIcons();
    setWindowTitle("Password Manager");
    setWindowIcon(QIcon(appIconFilePath));
    setGeneralPropertiesOfTable();
    //Database database;
    //data=database.userData();
    setDataToTable();
}

mainpage::~mainpage()
{
    delete ui;
}

void mainpage::throwFilePathOfIcons(){
    // değişkenlere iconların dosya yolları atanıyor
    appIconFilePath="C:/Users/emre_/Documents/passwordManager/password.png";
    hiddenEyeIconFilePath = "C:/Users/emre_/Documents/passwordManager/hidden.png";
    eyeIconFilePath = "C:/Users/emre_/Documents/passwordManager/visibility.png";
    editIconFilePath = "C:/Users/emre_/Documents/passwordManager/editing.png";
    deleteIconFilePath = "C:/Users/emre_/Documents/passwordManager/bin.png";
}

void mainpage::setGeneralPropertiesOfTable(){
    // tablonun genel özellikleri ayarlanıyor
    QStringList titles;
    ui->tableWidget->setColumnCount(6);
    titles<<"Username"<<"Password"<<"Description"<<""<<""<<"";
    ui->tableWidget->setHorizontalHeaderLabels(titles);
    ui->tableWidget->horizontalHeader()->setDefaultSectionSize(97);
    ui->tableWidget->verticalHeader()->setDefaultSectionSize(39);
    connect(ui->tableWidget, SIGNAL(cellClicked(int,int)), this, SLOT(tableItemClicked(int,int)));

}

void mainpage::tableItemClicked(int row, int column){
    // kullanıcının seçimine göre uygun fonksiyonu çalıştırıyor
    if(column==3){
        openOrClosePassword(row);
    }
    else if(column==4){
        updateData(row);
    }
    else if(column==5){
        deleteData(row);
    }

}

std::vector<QString> mainpage::getSelectedDataInTable(int row){
    // tablodan kullanıcının seçtiği işleme göre verileri döndürüyor
    QTableWidgetItem *usernameItem = ui->tableWidget->item(row,0);
    QTableWidgetItem *passwordItem = ui->tableWidget->item(row,1);
    QTableWidgetItem *descriptionItem = ui->tableWidget->item(row,2);
    QString username,password,description;
    username=usernameItem->text();
    password=passwordItem->text();
    description=descriptionItem->text();
    std::vector<QString> selectedData={username,password,description};
    return selectedData;
}

void mainpage::updateData(int row){
    // kullanıcının değiştirdiği veriyi güncelliyor
    QString password;
    std::vector<QString> selectedData=getSelectedDataInTable(row);
    size_t vectorSize=data.size();
    for (size_t i = 0; i <vectorSize; i++){
        if(QString::fromStdString(data[i][0])==selectedData[0] && QString::fromStdString(data[i][2])==selectedData[2]){
               password=QString::fromStdString(data[i][1]);
        }
    }
    editpage editpage(selectedData[0],password,selectedData[2]);
    editpage.setModal(true);
    editpage.exec();
    std::vector<std::string> editedData=editpage.editedData;
    if(editedData.size()==0)
        return;

    updateDataInVector(row,editedData);
    updateDataInTable(row,editedData);
    //database.updatePassword(editedData);
    editedData.clear();
}

void mainpage::updateDataInVector(int row,std::vector<std::string> editedData){
    // kullanıcının değiştirdiği veriyi kayıtta güncelliyor
    size_t vectorSize=data.size();
    std::vector<QString> selectedData=getSelectedDataInTable(row);
    for (size_t i = 0; i <vectorSize; i++){
        //&& QString::fromStdString(datas[i][1])==selectedData[1]
        if(QString::fromStdString(data[i][0])==selectedData[0]  && QString::fromStdString(data[i][2])==selectedData[2]){
              data[i][0]=editedData[0];
              data[i][1]=editedData[1];
              data[i][2]=editedData[2];
              break;
        }
    }
}

void mainpage::updateDataInTable(int row,std::vector<std::string> editedData){
    // kullanıcının değiştirdiği veriyi tabloda güncelliyor
    QString element;
    size_t vectorSize=editedData.size();
    for (size_t i = 0; i <= vectorSize; i++){
        if(i<=2){
            element=QString::fromStdString(editedData[i]);
        }
        if(i==0){
            ui->tableWidget->setItem(row,0,new QTableWidgetItem(element));
        }
        else if(i==1){
            ui->tableWidget->setItem(row,1,new QTableWidgetItem(QString::fromStdString(std::string(element.size(),'*'))));
        }
        else if(i==2){
            ui->tableWidget->setItem(row,2,new QTableWidgetItem(element));
        }
        else if(i==3){
            QWidget *pWidget = setIconForTable(eyeIconFilePath);
            ui->tableWidget->setCellWidget(row, 3, pWidget);
        }
    }
}

void mainpage::openOrClosePassword(int row){
    // kullanıcının isteğine göre şifreyi gösteriyor veya kapatıyor
    std::vector<QString> selectedData=getSelectedDataInTable(row);
    size_t vectorSize=data.size();
    for (size_t i = 0; i <vectorSize; i++){
        if(QString::fromStdString(data[i][0])==selectedData[0] && QString::fromStdString(data[i][2])==selectedData[2]){
            if(QString::fromStdString(data[i][1])==selectedData[1]){
                QWidget *pWidget = setIconForTable(eyeIconFilePath);
                ui->tableWidget->setItem(row,1,new QTableWidgetItem(QString::fromStdString(std::string(selectedData[1].size(),'*'))));
                ui->tableWidget->setCellWidget(row, 3, pWidget);
                break;
            }else{
                QWidget *pWidget = setIconForTable(hiddenEyeIconFilePath);
                ui->tableWidget->setItem(row,1,new QTableWidgetItem(QString::fromStdString(data[i][1])));
                ui->tableWidget->setCellWidget(row, 3, pWidget);
                break;
            }
        }
    }
}

int mainpage::showMessageBoxForDelete(){
    // kullanıcının silme isteiğini doğrulama mesaj kutusunu gösteriyor
    QMessageBox msgBox;
    msgBox.setWindowIcon(QIcon(appIconFilePath));
    msgBox.setWindowTitle("Password Manager");
    msgBox.setText("Do you want to delete?");
    msgBox.setStandardButtons(QMessageBox::Yes|QMessageBox::No);
    msgBox.setDefaultButton(QMessageBox::Yes);
    int result = msgBox.exec();
    return result;
}

void mainpage::deleteData(int row){
    // kullanıcının silmek istediği veriyi tablodan ve kayıtlardan siliyor
    int result=showMessageBoxForDelete();
    std::vector<QString> selectedData=getSelectedDataInTable(row);
    switch (result) {
      case QMessageBox::Yes:
        for (int i = 0; i < static_cast<int>(data.size()); i++){
            if(QString::fromStdString(data[i][0])==selectedData[0] && QString::fromStdString(data[i][2])==selectedData[2]){
                    data.erase(data.begin()+i);
            }
        }
        // database.deletePassword(selectedData[2].toStdString());
        ui->tableWidget->removeRow(row);
        break;
      case QMessageBox::No:
          break;
    }
}

QWidget* mainpage::setIconForTable(QString iconFilePath){
    QSize sizeIcon(20, 20);
    QWidget *pWidget = new QWidget();
    QLabel *label = new QLabel;
    label->setMaximumSize(sizeIcon);
    label->setScaledContents(true);
    label->setPixmap(QPixmap(iconFilePath));
    QHBoxLayout *pLayout = new QHBoxLayout(pWidget);
    pLayout->addWidget(label);
    pLayout->setAlignment(Qt::AlignCenter);
    pLayout->setContentsMargins(0,0,0,0);
    pWidget->setLayout(pLayout);
    return pWidget;
}

void mainpage::setDataToTable(){
    // verileri tabloya yerleştriyor

    int order;
    QString element;
    size_t vectorSize=data.size(),vectorSizeInside;
    for (size_t i = 0; i <vectorSize; i++){
         ui->tableWidget->insertRow(ui->tableWidget->rowCount());
         vectorSizeInside=data[i].size();
        for (size_t j = 0; j < vectorSizeInside+3; j++){
            order=ui->tableWidget->rowCount()-1;
            if(j<=2){
                element=QString::fromStdString(data[i][j]);
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
                QWidget *pWidget = setIconForTable(eyeIconFilePath);
                ui->tableWidget->setCellWidget(static_cast<int>(i), static_cast<int>(j), pWidget);
            }
            else if(j==4)
            {
                QWidget *pWidget = setIconForTable(editIconFilePath);
                ui->tableWidget->setCellWidget(static_cast<int>(i), static_cast<int>(j), pWidget);
            }
            else if(j==5){
                QWidget *pWidget = setIconForTable(deleteIconFilePath);
                ui->tableWidget->setCellWidget(static_cast<int>(i), static_cast<int>(j), pWidget);
            }

        }
    }
}

void mainpage::on_save_clicked()
{
    // kullanıcının kaydetmek için girdiği username, password, description bilgilerini kaydediyor ve tabloya ekliyor
    QString username,password,description;
    username=ui->username->text();
    password=ui->password->text();
    description=ui->description->text();
    if(username=="" || password=="" || description=="")
        return;
    std::vector<std::string> newData;
    newData={username.toStdString(),password.toStdString(),description.toStdString()};
    data.push_back(newData);
    //database.addNewPassword(newData);
    int order;
    ui->tableWidget->insertRow(ui->tableWidget->rowCount());
    for (int j = 0; j < 6; j++){
        order=ui->tableWidget->rowCount()-1;
        if(j==0){
            ui->tableWidget->setItem(order,USERNAME,new QTableWidgetItem(username));
        }
        else if(j==1){
            ui->tableWidget->setItem(order,PASSWORD,new QTableWidgetItem(QString::fromStdString(std::string(password.size(),'*'))));
        }
        else if(j==2){
            ui->tableWidget->setItem(order,DESCRIPTION,new QTableWidgetItem(description));
        }
        else if(j==3)
        {
            QWidget *pWidget = setIconForTable(eyeIconFilePath);
            ui->tableWidget->setCellWidget(order, j, pWidget);
        }
        else if(j==4)
        {
            QWidget *pWidget = setIconForTable(editIconFilePath);
            ui->tableWidget->setCellWidget(order, j, pWidget);
        }
        else if(j==5){
            QWidget *pWidget = setIconForTable(deleteIconFilePath);
            ui->tableWidget->setCellWidget(order, j, pWidget);
        }

    }

    QMessageBox msgBox;
    msgBox.setWindowTitle("Password Manager");
    msgBox.setWindowIcon(QIcon(appIconFilePath));
    if(true){
        ui->username->setText("");
        ui->password->setText("");
        ui->description->setText("");
        msgBox.setText("Saved");
        msgBox.setStandardButtons(QMessageBox::Ok);
        msgBox.exec();
    }else{
        msgBox.setText("Not saved");
        msgBox.setStandardButtons(QMessageBox::Ok);
        msgBox.exec();

    }
}
