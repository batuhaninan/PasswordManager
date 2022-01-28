#pragma once

#include <QApplication>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QString>
#include <string>
#include <vector>
#include "SimpleCrypt.hpp"
#include "SHA256.hpp"
#include <iostream>

class Database {
private:
  int userid;
  QSqlDatabase database;
  SimpleCrypt encryption;

public:
  bool signup(std::vector<std::string>);
  bool login(std::vector<std::string>);

  void setUserID(int userid) {
    this->userid = userid;
  }


  bool addNewPassword(std::vector<std::string>);
  bool deletePassword(std::string);
  bool updatePassword(std::vector<std::string>);
  std::vector<std::string> getPassword(std::string);

  std::vector<std::vector<std::string>> userData();

  QSqlDatabase getDatabase();

  Database(std::string, std::string, std::string, std::string);
  ~Database() {
    database.close();
  }
};
