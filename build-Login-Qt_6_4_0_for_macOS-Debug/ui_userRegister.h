/********************************************************************************
** Form generated from reading UI file 'userRegister.ui'
**
** Created by: Qt User Interface Compiler version 6.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_USERREGISTER_H
#define UI_USERREGISTER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_userRegister
{
public:
    QLabel *label;
    QLineEdit *RnameInput;
    QLabel *RnameText;
    QLabel *RpassText;
    QLineEdit *RpassInput;
    QPushButton *register_2;

    void setupUi(QDialog *userRegister)
    {
        if (userRegister->objectName().isEmpty())
            userRegister->setObjectName("userRegister");
        userRegister->resize(421, 329);
        label = new QLabel(userRegister);
        label->setObjectName("label");
        label->setGeometry(QRect(80, 50, 261, 31));
        QFont font;
        font.setFamilies({QString::fromUtf8("Al Bayan")});
        font.setPointSize(24);
        label->setFont(font);
        RnameInput = new QLineEdit(userRegister);
        RnameInput->setObjectName("RnameInput");
        RnameInput->setGeometry(QRect(140, 120, 131, 31));
        RnameText = new QLabel(userRegister);
        RnameText->setObjectName("RnameText");
        RnameText->setGeometry(QRect(140, 100, 81, 16));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Al Bayan")});
        font1.setPointSize(14);
        RnameText->setFont(font1);
        RpassText = new QLabel(userRegister);
        RpassText->setObjectName("RpassText");
        RpassText->setGeometry(QRect(140, 170, 81, 16));
        RpassText->setFont(font1);
        RpassInput = new QLineEdit(userRegister);
        RpassInput->setObjectName("RpassInput");
        RpassInput->setGeometry(QRect(140, 190, 131, 31));
        register_2 = new QPushButton(userRegister);
        register_2->setObjectName("register_2");
        register_2->setGeometry(QRect(150, 260, 100, 32));

        retranslateUi(userRegister);

        QMetaObject::connectSlotsByName(userRegister);
    } // setupUi

    void retranslateUi(QDialog *userRegister)
    {
        userRegister->setWindowTitle(QCoreApplication::translate("userRegister", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("userRegister", "Register As A New User", nullptr));
        RnameText->setText(QCoreApplication::translate("userRegister", "User Name:", nullptr));
        RpassText->setText(QCoreApplication::translate("userRegister", "Password:", nullptr));
        register_2->setText(QCoreApplication::translate("userRegister", "Register", nullptr));
    } // retranslateUi

};

namespace Ui {
    class userRegister: public Ui_userRegister {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USERREGISTER_H
