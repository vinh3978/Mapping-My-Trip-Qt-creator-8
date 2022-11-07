/********************************************************************************
** Form generated from reading UI file 'login.ui'
**
** Created by: Qt User Interface Compiler version 6.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGIN_H
#define UI_LOGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_login
{
public:
    QWidget *centralwidget;
    QLabel *title;
    QLabel *nameText;
    QLineEdit *nameInput;
    QLabel *passwordText;
    QLineEdit *passInput;
    QPushButton *login_1;
    QPushButton *register_1;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *login)
    {
        if (login->objectName().isEmpty())
            login->setObjectName("login");
        login->resize(800, 600);
        centralwidget = new QWidget(login);
        centralwidget->setObjectName("centralwidget");
        title = new QLabel(centralwidget);
        title->setObjectName("title");
        title->setGeometry(QRect(280, 80, 201, 31));
        QFont font;
        font.setFamilies({QString::fromUtf8("Al Bayan")});
        font.setPointSize(24);
        title->setFont(font);
        nameText = new QLabel(centralwidget);
        nameText->setObjectName("nameText");
        nameText->setGeometry(QRect(70, 160, 81, 16));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Al Bayan")});
        font1.setPointSize(14);
        nameText->setFont(font1);
        nameInput = new QLineEdit(centralwidget);
        nameInput->setObjectName("nameInput");
        nameInput->setGeometry(QRect(70, 180, 181, 31));
        passwordText = new QLabel(centralwidget);
        passwordText->setObjectName("passwordText");
        passwordText->setGeometry(QRect(480, 160, 81, 16));
        passwordText->setFont(font1);
        passInput = new QLineEdit(centralwidget);
        passInput->setObjectName("passInput");
        passInput->setGeometry(QRect(480, 180, 181, 31));
        login_1 = new QPushButton(centralwidget);
        login_1->setObjectName("login_1");
        login_1->setGeometry(QRect(340, 290, 100, 32));
        register_1 = new QPushButton(centralwidget);
        register_1->setObjectName("register_1");
        register_1->setGeometry(QRect(340, 340, 100, 32));
        login->setCentralWidget(centralwidget);
        menubar = new QMenuBar(login);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 22));
        login->setMenuBar(menubar);
        statusbar = new QStatusBar(login);
        statusbar->setObjectName("statusbar");
        login->setStatusBar(statusbar);

        retranslateUi(login);

        QMetaObject::connectSlotsByName(login);
    } // setupUi

    void retranslateUi(QMainWindow *login)
    {
        login->setWindowTitle(QCoreApplication::translate("login", "login", nullptr));
        title->setText(QCoreApplication::translate("login", "Mapping My Trip", nullptr));
        nameText->setText(QCoreApplication::translate("login", "User Name:", nullptr));
        passwordText->setText(QCoreApplication::translate("login", "Password:", nullptr));
        login_1->setText(QCoreApplication::translate("login", "Login", nullptr));
        register_1->setText(QCoreApplication::translate("login", "Register", nullptr));
    } // retranslateUi

};

namespace Ui {
    class login: public Ui_login {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_H
