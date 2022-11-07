/********************************************************************************
** Form generated from reading UI file 'mapDisplay.ui'
**
** Created by: Qt User Interface Compiler version 6.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAPDISPLAY_H
#define UI_MAPDISPLAY_H

#include <QtCore/QVariant>
#include <QtQuickWidgets/QQuickWidget>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_mapDisplay
{
public:
    QWidget *centralwidget;
    QQuickWidget *quickWidget;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *mapDisplay)
    {
        if (mapDisplay->objectName().isEmpty())
            mapDisplay->setObjectName("mapDisplay");
        mapDisplay->resize(800, 600);
        centralwidget = new QWidget(mapDisplay);
        centralwidget->setObjectName("centralwidget");
        quickWidget = new QQuickWidget(centralwidget);
        quickWidget->setObjectName("quickWidget");
        quickWidget->setGeometry(QRect(30, 10, 671, 511));
        quickWidget->setResizeMode(QQuickWidget::SizeRootObjectToView);
        mapDisplay->setCentralWidget(centralwidget);
        menubar = new QMenuBar(mapDisplay);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 22));
        mapDisplay->setMenuBar(menubar);
        statusbar = new QStatusBar(mapDisplay);
        statusbar->setObjectName("statusbar");
        mapDisplay->setStatusBar(statusbar);

        retranslateUi(mapDisplay);

        QMetaObject::connectSlotsByName(mapDisplay);
    } // setupUi

    void retranslateUi(QMainWindow *mapDisplay)
    {
        mapDisplay->setWindowTitle(QCoreApplication::translate("mapDisplay", "MainWindow", nullptr));
    } // retranslateUi

};

namespace Ui {
    class mapDisplay: public Ui_mapDisplay {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAPDISPLAY_H
