#include <iostream>
#include "Database.hpp"

Database::Database(std::string localhost, std::string dbname, std::string postgres, std::string password){
    std::string connection_string("host=localhost dbname=cppProject user=postgres password=root");
    pqxx::connection con(connection_string.c_str());
    pqxx::work wrk(con);
}



bool Database::addNewPassword(std::vector<std::string> data){
    std::string username = data.at(0);
    std::string password = data.at(1);
    std::string app_name = data.at(2);
    std::string connection_string("host=localhost dbname=cppProject user=postgres password=root");
    pqxx::connection con(connection_string.c_str());
    pqxx::work wrk(con);
    pqxx::result res = wrk.exec("SELECT appname FROM PASSWORDS where userid = " + std::to_string(userid));
    for (int i=0; i<res.size();i++){
        // This application has already been exist.
        if(res[i][0].c_str() == app_name){
            return false;
        }
    }
    
    std::string query = "INSERT INTO PASSWORDS VALUES(DEFAULT,";
    query = query + std::to_string(userid) + ",";
    query = query + "'" + app_name + "'" + ",";
    query = query + "'" + username + "'" + ",";
    query = query + "'" + password + "'" + ")";

    wrk.exec(query);
    wrk.commit();
    return true;
}

bool Database::updatePassword(std::vector<std::string> data){
    std::string connection_string("host=localhost dbname=cppProject user=postgres password=root");
    pqxx::connection con(connection_string.c_str());
    pqxx::work wrk(con);
    std::string query = "update passwords set username = '";
    std::string username = data.at(0);
    std::string password = data.at(1);
    std::string appName = data.at(2);
    query = query + username + "', passwordhash = '" + password + "' where appname = '"+ appName + "' and userid = '"+std::to_string(userid) + "'";
    wrk.exec(query);
    wrk.commit();
    return true;
}

std::vector<std::string> Database::getPassword(std::string app_name){
    std::vector<std::string> result;
    std::string connection_string("host=localhost dbname=cppProject user=postgres password=root");
    pqxx::connection con(connection_string.c_str());
    pqxx::work wrk(con);
    std::string query = "SELECT username, passwordhash from PASSWORDS where appname = '";
    query = query + app_name + "' " + "and ";
    query = query + "userid = " + std::to_string(userid);
    pqxx::result res = wrk.exec(query);
    result.push_back(res[0][0].c_str());
    result.push_back(res[0][1].c_str());
    return result;
}


bool Database::signup(std::vector<std::string> data){
    std::string userName = data.at(0);
    std::string mail = data.at(1);
    std::string password = data.at(2);
    std::string connection_string("host=localhost dbname=cppProject user=postgres password=root");
    pqxx::connection con(connection_string.c_str());
    pqxx::work wrk(con);
    pqxx::result res = wrk.exec("SELECT username,email FROM USERS");
    // this username or mail already exist
    for (int i=0; i<res.size(); i++){
        if (res[i][0].c_str() == userName){
            return 0;
        }
        else if(res[i][1].c_str() == mail){
            return 0;
        }
    }
    std::string query = "INSERT INTO USERS VALUES(DEFAULT,";
    query = query + "'" + userName + "'" + ",";
    query = query + "'" + mail + "'" + ",";
    query = query + "'" + password + "'" + ")";
    wrk.exec(query);
    wrk.commit();
    return true;
}

bool Database::login( std::vector<std::string> data){
    std::string username = data.at(0);
    std::string password = data.at(1);
    std::string connection_string("host=localhost dbname=cppProject user=postgres password=root");
    pqxx::connection con(connection_string.c_str());
    pqxx::work wrk(con);
    std::string query = "SELECT id, passwordhash from users where username = '";
    query = query + username + "'";
    pqxx::result res = wrk.exec(query);
    if (res[0][1].c_str() == password){
        userid = std::stoi(res[0][0].c_str());
        return true;
    }
    return false;
}

bool Database::deletePassword(std::string app_name){
    std::string connection_string("host=localhost dbname=cppProject user=postgres password=root");
    pqxx::connection con(connection_string.c_str());
    pqxx::work wrk(con);
    pqxx::result res = wrk.exec("SELECT appname, id FROM PASSWORDS WHERE userid = " + std::to_string(userid));
    for (int i=0; i<res.size();i++){
        if (res[i][0].c_str() == app_name){
            std::string query ="DELETE FROM PASSWORDS WHERE ID = ";
            query = query + res[i][1].c_str();
            wrk.exec(query);
            wrk.commit();
            return 1;
        }
    }
    return 0;
}


std::vector<std::vector<std::string>> Database::userData(){
    std::vector<std::vector<std::string>> data;
    std::string connection_string("host=localhost dbname=cppProject user=postgres password=root");
    pqxx::connection con(connection_string.c_str());
    pqxx::work wrk(con);
    pqxx::result res = wrk.exec("SELECT username, passwordhash, appname  FROM PASSWORDS WHERE userid = " + std::to_string(userid));
    std::vector<std::string> temp;
    for (int i=0; i<res.size();i++){
        temp.push_back(res[i][0].c_str());            
        temp.push_back(res[i][1].c_str());            
        temp.push_back(res[i][2].c_str());            
        data.push_back(temp);
        temp.clear();
    }
    std::vector<std::vector<std::string>>::iterator row;
    std::vector<std::string>::iterator column;
    return data;
}
