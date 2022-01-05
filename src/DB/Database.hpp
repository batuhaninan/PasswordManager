#include<pqxx/pqxx>
#include<vector>

class Database{
private:
    int userid;
public:
    void addNewPassword(std::string app_name,std::string, std::string password);
    void getPassword(std::string app_name);
    bool signup(std::string username, std::string mail, std::string password);
    bool login(std::string username, std::string password);
    bool del(std::string app_name);
    std::vector<std::string> appnames();
    //Database(std::string localhost, std::string dbname, std::string postgres, std::string password);
    Database(std::string localhost, std::string dbname, std::string postgres, std::string password);

};