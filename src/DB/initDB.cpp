#include "initDB.hpp"
#include "Database.hpp"
#include <iostream>
#include <pqxx/pqxx>

void initDB() {
  std::vector<std::string> signup;
  signup.push_back("atilla");
  signup.push_back("atilla5202@gmail.com");
  signup.push_back("atilla5202");
  std::vector<std::string> login;
  login.push_back("atilla5258");
  login.push_back("atilla123");
  std::vector<std::string> newPassword;
  newPassword.push_back("atilla523258");
  newPassword.push_back("15986");
  newPassword.push_back("qwdferq");

  Database database("localhost", "localhost", "localhost", "localhost");
  database.signup(signup);
  database.login(login);
  database.userData();
  // database.addNewPassword(newPassword);
  // database.updatePassword(newPassword);
  // database.deletePassword("qwdferq");
}
