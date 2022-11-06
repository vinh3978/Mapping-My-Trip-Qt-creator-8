TARGET = Mapping-My-Trip
QT = core gui
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets quickwidgets positioning
CONFIG+=sdk_no_version_check

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

RESOURCES += \
    qml.qrc
