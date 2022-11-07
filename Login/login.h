#ifndef LOGIN_H
#define LOGIN_H

#include <QMainWindow>
#include "userInfo.h"
#include <sqlite3.h>
#include <vector>

QT_BEGIN_NAMESPACE
namespace Ui { class login; }
QT_END_NAMESPACE

class login : public QMainWindow
{
    Q_OBJECT

public:
    login(QWidget *parent = nullptr);
    login(std::string x);
    ~login();
    std::vector<userInfo> read_all();

private:
    sqlite3 * db;
    const char * dir;
    std::string userName;

private slots:
    void on_register_1_clicked(); // open register window

    void on_login_1_clicked(); // login to map wondow

private:
    Ui::login *ui;
};
#endif // LOGIN_H
