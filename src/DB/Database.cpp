#include <iostream>
#include "Database.hpp"

Database::Database(std::string localhost, std::string dbname, std::string postgres, std::string password){
    std::string connection_string("host=localhost dbname=cppProject user=postgres password=root");
    pqxx::connection con(connection_string.c_str());
    pqxx::work wrk(con);
}



void Database::addNewPassword(std::string app_name,std::string username, std::string password){
    std::string connection_string("host=localhost dbname=cppProject user=postgres password=root");
    pqxx::connection con(connection_string.c_str());
    pqxx::work wrk(con);
    pqxx::result res = wrk.exec("SELECT appname FROM PASSWORDS where userid = " + std::to_string(userid));
    for (int i=0; i<res.size();i++){
        std::cout << res[1][0] <<"\n";
        if(res[i][0].c_str() == app_name){
            std::cout << "Bu uygulama da daha önce şifre kayitli\neğer mevcut değeri üzerine yeni değer eklemek istiyorsaniz lütfen 1 e basiniz" << "\n";
            int number = 0;
            std::cin>>number;
            if (number == 1){
                std::string query = "UPDATE PASSWORDS SET ";
                query = query + "appname = " + "'" + app_name + "'" + ",";
                query = query + "username = " + "'" + username + "'" + ",";
                query = query + "passwordhash = " + "'" + password + "'" + " ";
                query = query + "where appname = " + "'" + app_name + "'"; 
                wrk.exec(query);
                wrk.commit();
            }

            break;
        }
        if (i == res.size()-1){
            std::string query = "INSERT INTO PASSWORDS VALUES(DEFAULT,";
            query = query + std::to_string(userid) + ",";
            query = query + "'" + app_name + "'" + ",";
            query = query + "'" + username + "'" + ",";
            query = query + "'" + password + "'" + ")";
            std::cout<<query<<"\n";
            wrk.exec(query);
            wrk.commit();
        }
    }
}

void Database::getPassword(std::string app_name){
    std::string connection_string("host=localhost dbname=cppProject user=postgres password=root");
    pqxx::connection con(connection_string.c_str());
    pqxx::work wrk(con);
    std::string query = "SELECT username, passwordhash from PASSWORDS where appname = '";
    query = query + app_name + "' " + "and ";
    query = query + "userid = " + std::to_string(userid);
    pqxx::result res = wrk.exec(query);
    std::cout<<"Kullanici adi = " << res[0][0] << "\n" << "Şifre = " << res[0][1] << "\n";
}


bool Database::signup(std::string username, std::string mail, std::string password){
    std::string connection_string("host=localhost dbname=cppProject user=postgres password=root");
    pqxx::connection con(connection_string.c_str());
    pqxx::work wrk(con);
    pqxx::result res = wrk.exec("SELECT username,email FROM USERS");
    for (int i=0; i<res.size(); i++){
        if (res[i][0].c_str() == username){
            std::cout << "Bu kullanici adi adresi daha önce kayitli" <<"\n";
            return 0;
        }
        else if(res[i][1].c_str() == mail){
            std::cout << "Bu mail adresi daha önce kayitli" <<"\n";
            return 0;
        }
    }
    std::string query = "INSERT INTO USERS VALUES(DEFAULT,";
    query = query + "'" + username + "'" + ",";
    query = query + "'" + mail + "'" + ",";
    query = query + "'" + password + "'" + ")";
    wrk.exec(query);
    wrk.commit();
    return true;
}

bool Database::login(std::string username, std::string password){
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

bool Database::del(std::string app_name){
    std::string connection_string("host=localhost dbname=cppProject user=postgres password=root");
    pqxx::connection con(connection_string.c_str());
    pqxx::work wrk(con);
    pqxx::result res = wrk.exec("SELECT appname, id FROM PASSWORDS WHERE userid = " + std::to_string(userid));
    for (int i=0; i<res.size();i++){
        if (res[i][0].c_str() == app_name){
            std::string query ="DELETE FROM PASSWORDS WHERE ID = ";
            query = query + res[1][1].c_str();
            wrk.exec(query);
            wrk.commit();
            return 1;
        }
    }
    return 0;
}

std::vector<std::string> Database::appnames(){
    std::vector<std::string> names;
    std::string connection_string("host=localhost dbname=cppProject user=postgres password=root");
    pqxx::connection con(connection_string.c_str());
    pqxx::work wrk(con);
    pqxx::result res = wrk.exec("SELECT appname FROM PASSWORDS WHERE userid = " + std::to_string(userid));
    for( int i =0; i<res.size();i++){
        names.push_back(res[i][0].c_str());
    }
    return names;
}