#include "login.h"
#include "ui_login.h"
#include "userRegister.h"
#include "mapDisplay.h"
#include <vector>
#include <QMessageBox>

using namespace std;

login::login(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::login)
{
    ui->setupUi(this);

}

login::login(string name){
    userName = name;
}

void login::on_register_1_clicked()
{
    //open register window
    userRegister userRegister;
    userRegister.setModal(true);
    userRegister.exec();
}

vector<userInfo>login:: read_all(){
    dir = "myTrip.db";
    vector<userInfo> readResult;
    string sql = "select * from " + userName +";";
    char* cSql = &sql[0];
    sqlite3_stmt *stmt;
    int exit = sqlite3_open(dir,&db);
    sqlite3_prepare_v2(db, cSql, -1, &stmt, NULL);
    while(sqlite3_step(stmt) != SQLITE_DONE){ // when next row is available
        string password(reinterpret_cast<char const*>(sqlite3_column_text(stmt,1)));
        string name(reinterpret_cast<char const*>(sqlite3_column_text(stmt,0)));
        userInfo read(name,password);
        readResult.push_back(read);

    }

    return readResult;
}


void login::on_login_1_clicked()
{
    QString username = ui ->nameInput -> text(); // get user name from login form
    QString password = ui ->passInput -> text(); // get passwork from login form



    if(allUser.find(username.toStdString()) != allUser.end()){// if the user name is found before the end of the map
        if(password.toStdString() == allUser.find(username.toStdString()) -> second){ // if the password match
            // open login window
            mapDisplay display;
            display.setModal(true);
            display.exec();
        }else{
            QMessageBox::information(this,"Error","Wrong password");
        }
    }else{  // user not exist
        QMessageBox::information(this,"Error","User not here");
    }
}


login::~login()
{
    delete ui;
}

