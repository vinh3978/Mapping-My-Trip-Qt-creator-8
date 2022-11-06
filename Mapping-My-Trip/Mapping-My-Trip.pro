TARGET = Mapping-My-Trip
QT = core gui
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

HEADERS += \
    login.h \
    main.h \
    map.h

SOURCES += \
    login.cpp \
    main.cpp \
    map.cpp

FORMS += \
    login.ui \
    map.ui
