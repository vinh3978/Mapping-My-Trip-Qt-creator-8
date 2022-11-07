#include "userInfo.h"
#include <sqlite3.h>
#include <vector>
#ifndef USERREGISTER_H
#define USERREGISTER_H

#include <QDialog>
#include <map>
#include <string>
//global varibale contains all registered users

extern std::map<std::string,std::string>allUser;
namespace Ui {
class userRegister;
}

class userRegister : public QDialog
{
    Q_OBJECT
private:
    sqlite3 * db;
    char * messageError;
    const char * dir;
    std:: string newUserName;
    std:: vector<userInfo> userInfoList; // initliza a vector contains userInfo object
    void createDB(char*s);
    void createTable(char*s);

public:
    explicit userRegister(QWidget *parent = nullptr);
    userRegister(std::string x);
    //~userRegister();
    void write(std:: string y,std::string m);

private slots:
    void on_register_2_clicked();

private:
    Ui::userRegister *ui;
};

#endif // USERREGISTER_H
