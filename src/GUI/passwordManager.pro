QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

SOURCES += \
    Pages/editpage.cpp \
    Pages/login.cpp \
    initGUI.cpp \
    Pages/mainpage.cpp \
    Pages/signup.cpp

HEADERS += \
    Pages/editpage.h \
    Pages/login.h \
    Pages/mainpage.h \
    Pages/signup.h

FORMS += \
    UI/editpage.ui \
    UI/login.ui \
    UI/mainpage.ui \
    UI/signup.ui

qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
