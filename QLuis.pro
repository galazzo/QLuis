#-------------------------------------------------
#
# Project created by QtCreator 2016-08-24T10:51:06
#
#-------------------------------------------------

QT       += network

QT       -= gui

TARGET = QLuis
TEMPLATE = lib

DEFINES += QLUIS_LIBRARY

DEPENDPATH += .

SOURCES += qluis.cpp\
            WebClient/webclient.cpp \
    qluisentity.cpp \
    qluisintent.cpp \
    qluisaction.cpp \
    qluisactionparameter.cpp \
    qluisactionparametervalue.cpp \
    qluisresult.cpp

HEADERS += qluis.h\
        qluis_global.h \    
    WebClient/webclient.h \
    qluisentity.h \
    qluisintent.h \
    qluisaction.h \
    qluisactionparameter.h \
    qluisactionparametervalue.h \
    qluisresult.h

unix {
    target.path = /usr/lib
    INSTALLS += target
}
