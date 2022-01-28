#include "Database.hpp"


Database::Database(std::string hostname, std::string dbname, std::string username, std::string password) {

  QSqlDatabase db = QSqlDatabase::addDatabase("QPSQL");

  db.setHostName(QString::fromStdString(hostname));
  db.setDatabaseName(QString::fromStdString(dbname));
  db.setUserName(QString::fromStdString(username));
  db.setPassword(QString::fromStdString(password));


  QStringList tables = db.tables();

  db.open();

  SimpleCrypt crypto(Q_UINT64_C(0x0c2ad4a4acb9f023));

  this->encryption = crypto;
  this->database = db;
}


QSqlDatabase Database::getDatabase() {
  return database;
}


bool Database::addNewPassword(std::vector<std::string> data) {

  std::string username = data.at(0);
  std::string password = data.at(1);
  std::string app_name = data.at(2);

  QSqlQuery sql_query(getDatabase());

  sql_query.prepare("SELECT appname FROM PASSWORDS where userid = ?");

  sql_query.addBindValue(QVariant(QString::fromStdString(std::to_string(userid))));
  
  sql_query.exec();
  
  while (sql_query.next()) {
    if (sql_query.value(0).toString().toStdString() == app_name) {
      return false;
    }
  }

  QSqlQuery insert_query(getDatabase());

  insert_query.prepare("INSERT INTO PASSWORDS VALUES(DEFAULT, ?, ?, ?, ?)");

  std::string encrypted_password = this->encryption.encryptToString(QString::fromStdString(password)).toStdString();

  insert_query.addBindValue(QVariant(QString::fromStdString(std::to_string(userid))));
  insert_query.addBindValue(QVariant(QString::fromStdString(app_name)));
  insert_query.addBindValue(QVariant(QString::fromStdString(username)));
  insert_query.addBindValue(QVariant(QString::fromStdString(encrypted_password)));

  insert_query.exec();

  getDatabase().commit();
   
  return true;
}


bool Database::updatePassword(std::vector<std::string> data) {
  QSqlQuery sql_query(getDatabase());

  sql_query.prepare("update passwords set username = ?, passwordhash = ? where appname = ? and userid = ?");

  sql_query.addBindValue(QVariant(QString::fromStdString(data.at(0))));

  std::string encrypted_password = this->encryption.encryptToString(QString::fromStdString(data.at(1))).toStdString();

  sql_query.addBindValue(QVariant(QString::fromStdString(encrypted_password)));
  sql_query.addBindValue(QVariant(QString::fromStdString(data.at(2))));
  sql_query.addBindValue(QVariant(QString::fromStdString(std::to_string(userid))));

  sql_query.exec();

  getDatabase().commit();
  return true;
}


std::vector<std::string> Database::getPassword(std::string app_name) {
  std::vector<std::string> result;

  QSqlQuery sql_query(getDatabase());

  sql_query.prepare("SELECT username, passwordhash from PASSWORDS where appname = ? and userid = ?");

  sql_query.addBindValue(QVariant(QString::fromStdString(app_name)));
  sql_query.addBindValue(QVariant(QString::fromStdString(std::to_string(userid))));

  sql_query.exec();

  result.push_back(sql_query.value(0).toString().toStdString());

  std::string password = sql_query.value(1).toString().toStdString();

  std::string encrypted_password = this->encryption.decryptToString(QString::fromStdString(password)).toStdString();

  result.push_back(sql_query.value(1).toString().toStdString());

  return result;
}


bool Database::signup(std::vector<std::string> data) {
  std::string userName = data.at(0);
  std::string mail = data.at(1);
  std::string password = data.at(2);

  SHA256 hashed_password;
  hashed_password.update(password);

  password = SHA256::toString(hashed_password.digest());

  QSqlQuery sql_query(getDatabase());

  QString select_query = QString::fromStdString("SELECT username, email from USERS");
  sql_query.exec(select_query);

  while (sql_query.next()) {
    if (sql_query.value(0).toString().toStdString() == userName) {
      return 0;
    } else if (sql_query.value(1).toString().toStdString() == mail) {
      return 0;
    }
  }

  sql_query.prepare("INSERT INTO USERS VALUES(DEFAULT, ?, ?, ?)");

  sql_query.addBindValue(QVariant(QString::fromStdString(userName)));
  sql_query.addBindValue(QVariant(QString::fromStdString(mail)));
  sql_query.addBindValue(QVariant(QString::fromStdString(password)));

  sql_query.exec();

  getDatabase().commit();

  return true;
}


bool Database::login(std::vector<std::string> data) {
  std::string username = data.at(0);
  std::string password = data.at(1);

  SHA256 hashed_password;
  hashed_password.update(password);

  password = SHA256::toString(hashed_password.digest());

  QSqlQuery sql_query(getDatabase());

  sql_query.prepare("SELECT id, passwordhash from users where username = ?");

  sql_query.addBindValue(QVariant(QString::fromStdString(username)));

  sql_query.exec();

  while (sql_query.next()) {
    if (sql_query.value(1).toString().toStdString() == password) {
      setUserID(std::stoi(sql_query.value(0).toString().toStdString()));

      SHA256 double_hashed_password;
      double_hashed_password.update(sql_query.value(1).toString().toStdString());

      std::string key = SHA256::toString(double_hashed_password.digest());

      quint64 numberBack{1};

      numberBack = static_cast<quint64>(QString::fromStdString(key).toULongLong());

      this->encryption.setKey(numberBack);
      return true;
    }
  }

  return false;
}


bool Database::deletePassword(std::string app_name) {

  QSqlQuery sql_query(getDatabase());

  sql_query.prepare("SELECT appname, id FROM PASSWORDS WHERE userid = ?");

  sql_query.addBindValue(QVariant(QString::fromStdString(std::to_string(userid))));

  sql_query.exec();

  while (sql_query.next()) {
    if (sql_query.value(0).toString().toStdString() == app_name) {
      QSqlQuery delete_query(getDatabase());
      delete_query.prepare("DELETE FROM PASSWORDS WHERE ID = ?");
      delete_query.addBindValue(QVariant(sql_query.value(1).toString()));

      delete_query.exec();

      getDatabase().commit();
      return 1;
    }
  }

  return 0;
}


std::vector<std::vector<std::string>> Database::userData() {
  std::vector<std::vector<std::string>> data;

  QSqlQuery sql_query(getDatabase());

  sql_query.prepare("SELECT username, passwordhash, appname  FROM PASSWORDS WHERE userid = ?");

  sql_query.addBindValue(QVariant(QString::fromStdString(std::to_string(userid))));
  sql_query.exec();

  std::vector<std::string> temp;

  while (sql_query.next()) {
    temp.push_back(sql_query.value(0).toString().toStdString());
    
    std::string decrypted_password = this->encryption.decryptToString(QString::fromStdString(sql_query.value(1).toString().toStdString())).toStdString();

    temp.push_back(decrypted_password);
    temp.push_back(sql_query.value(2).toString().toStdString());

    data.push_back(temp);
    temp.clear();
  }




  return data;
}
