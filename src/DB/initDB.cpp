#include <iostream>
#include<pqxx/pqxx>
#include "Database.hpp"
#include "DB.hpp"

void initDB() {
    std::cout << "INIT DB" << std::endl;
    Database database("localhost","localhost","localhost","localhost");
    //database.getPassword("twitter");
    //database.signup("atilla52548","atillarbas5aran@gmail.com","atilla123");
    database.login("atilla5258","atilla123");
    //database.getPassword("FACEBOOK");
    //database.addNewPassword("twitter","atilla5202","adsf");
    database.del("twitter");
}

