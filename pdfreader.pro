#-------------------------------------------------
#
# Project created by QtCreator 2011-09-19T11:46:04
#
#-------------------------------------------------

win32:INCLUDEPATH  +=  "C:\\Arquivos de programas\\KDE\\include\\poppler\\qt4"
win32:LIBS         += -L"C:\\Arquivos de programas\\KDE\\lib" -lpoppler-qt4
unix:INCLUDEPATH  += /usr/include/poppler/qt4
unix:LIBS         += -L/usr/lib -lpoppler-qt4


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

OTHER_FILES += \
    Readme.txt
