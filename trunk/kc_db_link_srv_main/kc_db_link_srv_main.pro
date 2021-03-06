#-------------------------------------------------
#
# Project created by QtCreator 2017-09-26T21:37:54
#
#-------------------------------------------------

QT       -= core gui

INCLUDEPATH += ../reference/include
INCLUDEPATH += ../include

DESTDIR += ../bin
TARGET = kc_db_link_srv_main
TEMPLATE = lib

DEFINES += KC_DB_LINK_SRV_MAIN_LIBRARY

# The following define makes your compiler emit warnings if you use
# any feature of Qt which as been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    activator.cpp \
    srv_main.cpp

HEADERS += \
    activator.h \
    stdm.h \
    srv_main.h

win32 {
    INCLUDEPATH += D:/library/boost_1_64_qt/include/
    LIBS += -L"D:/library/boost_1_64_qt/lib/"
    LIBS += -lboost_system-mgw53-mt-1_64 -lboost_thread-mgw53-mt-1_64 -lboost_filesystem-mgw53-mt-1_64
}
unix {
    target.path = /usr/lib
    INSTALLS += target
}
