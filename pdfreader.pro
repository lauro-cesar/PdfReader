#-------------------------------------------------
#
# Project created by QtCreator 2011-09-19T11:46:04
#
#-------------------------------------------------

QT       += core gui

TARGET = pdfreader
TEMPLATE = app


unix:SOURCES += main.cpp
unix:SOURCES += pdfreader.cpp
unix:SOURCES += pagina.cpp


unix:HEADERS  += pdfreader.h
unix:HEADERS  += pagina.h

unix:FORMS    += pdfreader.ui


unix:RESOURCES += \
    virtualFS.qrc
