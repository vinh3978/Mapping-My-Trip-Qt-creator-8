#include <QApplication>
#include <QPushButton>
#include "login.h"

int main(int argc, char**argv)
{
    QApplication app(argc,argv);

    //open loggin panel ->codes in login.cpp
    login login;
    login.show();
    return app.exec();
}

