#-------------------------------------------------
#
# Project created by QtCreator 2016-06-29T16:16:25
#
#-------------------------------------------------

QT += core gui opengl
TARGET = Processing
TEMPLATE = lib

CONFIG += c++11

win:{
QMAKE_CXXFLAGS += -std=c++11 -opengl
QMAKE_LFLAGS   += -std=c++11 -opengl
}
unix: !macx {
QMAKE_CXXFLAGS += -std=c++11 -opengl -std=gnu++11
}

DEFINES += PROCESSING_LIBRARY

SOURCES += processing.cpp \
           processingtool.cpp \
           drawassist.cpp \
    graphicwindow.cpp \
    primalwindow.cpp

HEADERS += processing.h\
           processing_global.h \
           processingtool.h \
           drawassist.h \
    graphicwindow.h \
    primalwindow.h

unix {
    target.path = /usr/lib
    INSTALLS += target
}

FORMS += \
    graphicwindow.ui
