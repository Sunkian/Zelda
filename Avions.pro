#-------------------------------------------------
#
# Project created by QtCreator 2019-05-05T12:52:42
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Avions
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which has been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS \
           "WALL=\"1\"" \
           "DOOREASY=\"2\"" \
           "DOORHARD=\"3\"" \
           "KEY=\"4\"" \
           "ENNEMYEASY=\"5\"" \
           "ENNEMYHARD=\"6\"" \
           "LADDER=\"7\"" \
           "POTSMALL=\"8\"" \
           "POTBIG=\"9\"" \
           "PRINCESS=\"10\""


# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

CONFIG += c++11 \
          rtti

SOURCES += \
        bullet.cpp \
        doors.cpp \
        enemies.cpp \
        hero.cpp \
        key.cpp \
        ladder.cpp \
        main.cpp \
        mainwindow.cpp \
        map.cpp \
        map2.cpp \
        potion.cpp \
        princess.cpp \
        wall.cpp

HEADERS += \
        bullet.h \
        doors.h \
        enemies.h \
        hero.h \
        key.h \
        ladder.h \
        mainwindow.h \
        map.h \
        map2.h \
        potion.h \
        princess.h \
        wall.h

FORMS += \
        mainwindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    res.qrc
