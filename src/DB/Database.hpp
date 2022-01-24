#pragma once

#include <pqxx/pqxx>
#include <vector>

class Database {
private:
  int userid;

public:
  bool signup(std::vector<std::string> data);
  bool login(std::vector<std::string> data);

  bool addNewPassword(std::vector<std::string> data);
  bool deletePassword(std::string app_name);
  bool updatePassword(std::vector<std::string> data);
  std::vector<std::string> getPassword(std::string app_name);

  std::vector<std::vector<std::string>> userData();

  Database(std::string localhost, std::string dbname, std::string postgres,
           std::string password);
};
