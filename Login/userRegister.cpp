#include "userRegister.h"
#include "ui_userRegister.h"
#include "userInfo.h"
#include <QMessageBox>
using namespace std;
std::map<std::string,std::string>allUser;

userRegister::userRegister(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::userRegister)
{
    ui->setupUi(this);
}

userRegister:: userRegister(string x){
    newUserName = x;
    dir = "myTrip.db";

    string sql = "create table if not exists " + newUserName + " (userName varchar(255), password varchar(255));";
    try{
        int exit = 0;
        exit = sqlite3_open(dir,&db);
        exit = sqlite3_exec(db, sql.c_str(), NULL, 0, &messageError);
                if (exit != SQLITE_OK) {
                    QMessageBox::information(this,"Error","Error in createTable function");
                    sqlite3_free(messageError);
                }
                else{
                    QMessageBox::information(this,"Success","Table created successfully");
                    //sqlite3_close(db);
                }
            }
            catch (const exception& e)
            {
                QMessageBox::information(this,"Eception","eception was catched");
            }
}

void userRegister::write(string y,string m){
    class userInfo newUser(y,m); // create a userinfo object and initialize it
    userInfoList.push_back(newUser);// add userInfo obejcts to the vector
    string sql = "insert into "+ newUserName+" values ('"+ newUser.getName() +"'" + "," +"'" + newUser.getPassword()+"')";
        int exit = sqlite3_open(dir, &db);
        /* An open database, SQL to be evaluated, Callback function, 1st argument to callback, Error msg written here */
        exit = sqlite3_exec(db, sql.c_str(), NULL, 0, &messageError);
        if (exit != SQLITE_OK) {
            QMessageBox::information(this,"Error","Error in writting into the table");
            sqlite3_free(messageError);
        }
        else
            QMessageBox::information(this,"Success","password wrote successfully");

}

void userRegister::on_register_2_clicked()
{
    QString username = ui ->RnameInput -> text(); // get user name from register form
    QString password = ui ->RpassInput -> text(); // get passwork from register form
    if(allUser.find(username.toStdString()) != allUser.end()){ // if the user name is found before the end of the map
        QMessageBox::information(this,"Error","User name is already HERE!");
    }
    else{
        userRegister regis(username.toStdString()); // create a new table named as the user name
        allUser[username.toStdString()] = password.toStdString();// insert the new user into map
        regis.write(username.toStdString(),password.toStdString());
    }

}

/**userRegister::~userRegister()
{
    delete ui;
}
**/

