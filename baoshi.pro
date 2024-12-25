QT       += core gui
QT       += core sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    gem.cpp \
    help.cpp \
    hoverbutton.cpp \
    ingame.cpp \
    login.cpp \
    main.cpp \
    record.cpp \
    rigist.cpp \
    userManager.cpp \
    widget.cpp \
    users.cpp

HEADERS += \
    gem.h \
    help.h \
    hoverbutton.h \
    ingame.h \
    login.h \
    record.h \
    rigist.h \
    userManager.h \
    users.h \
    widget.h

FORMS += \
    help.ui \
    ingame.ui \
    login.ui \
    record.ui \
    rigist.ui \
    widget.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    background.qrc \
    botton.qrc

