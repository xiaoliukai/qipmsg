#-------------------------------------------------
#
# Project created by QtCreator 2013-12-04T11:52:55
#
#-------------------------------------------------

QT       += core gui network

TARGET = mytest
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    helper.cpp \
    lockfile.cpp \
    qipmsg.cpp \
    global.cpp \
    msgthread.cpp \
    sendfilemanager.cpp \
    preferences.cpp \
    transfercodec.cpp \
    fileserver.cpp \
    soundthread.cpp \
    usermanager.cpp \
    windowmanager.cpp \
    systray.cpp \
    msgserver.cpp \
    msg.cpp \
    msgbase.cpp \
    owner.cpp \
    recvmsg.cpp \
    sendmsg.cpp \
    setupwindow.cpp

HEADERS  += mainwindow.h \
    helper.h \
    lockfile.h \
    qipmsg.h \
    global.h \
    msgthread.h \
    sendfilemanager.h \
    preferences.h \
    transfercodec.h \
    fileserver.h \
    soundthread.h \
    usermanager.h \
    windowmanager.h \
    systray.h \
    msgserver.h \
    msg.h \
    constants.h \
    ipmsg.h \
    msgbase.h \
    owner.h \
    recvmsg.h \
    sendmsg.h \
    setupwindow.h

FORMS    += mainwindow.ui

RESOURCES += \
    icons.qrc
