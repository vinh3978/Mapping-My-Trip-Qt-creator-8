TARGET = Mapping-My-Trip
QT = core gui sql
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets quickwidgets
CONFIG+= c++11

HEADERS += \
    clickablelabel.h \
    dbhelper.h \
    editdialog.h \
    logindialog.h \
    mapdialog.h \
    picturedialog.h \
    pictureentity.h \
    pointentity.h \
    profiledialog.h \
    profileentity.h \
    registerdialog.h \
    userentity.h

SOURCES += \
    clickablelabel.cpp \
    dbhelper.cpp \
    editdialog.cpp \
    logindialog.cpp \
    main.cpp \
    mapdialog.cpp \
    picturedialog.cpp \
    pictureentity.cpp \
    pointentity.cpp \
    profiledialog.cpp \
    profileentity.cpp \
    registerdialog.cpp \
    userentity.cpp

FORMS += \
    editdialog.ui \
    logindialog.ui \
    mapdialog.ui \
    picturedialog.ui \
    profiledialog.ui \
    registerdialog.ui

RESOURCES += \
    qml.qrc
