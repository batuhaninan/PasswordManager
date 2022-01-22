QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    Pages/editpage.cpp \
    Pages/login.cpp \
    main.cpp \
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

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
