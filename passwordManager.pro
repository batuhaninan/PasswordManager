QT       += core gui sql
LIBS     += -lpq

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

SOURCES += \
    main.cpp \
    src/DB/Database.cpp \
    src/DB/initDB.cpp \
    src/DB/SimpleCrypt.cpp \
    src/DB/SHA256.cpp \
    src/GUI/Pages/editpage.cpp \
    src/GUI/Pages/login.cpp \
    src/GUI/initGUI.cpp \
    src/GUI/Pages/mainpage.cpp \
    src/GUI/Pages/signup.cpp 



HEADERS += \
    main.hpp \
    src/DB/Database.hpp \
    src/DB/initDB.hpp \
    src/DB/SimpleCrypt.hpp \
    src/DB/SHA256.hpp \
    src/GUI/Pages/editpage.h \
    src/GUI/Pages/login.h \
    src/GUI/Pages/mainpage.h \
    src/GUI/Pages/signup.h 



FORMS += \
    src/GUI/UI/editpage.ui \
    src/GUI/UI/login.ui \
    src/GUI/UI/mainpage.ui \
    src/GUI/UI/signup.ui

qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
