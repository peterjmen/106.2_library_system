QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    admintest.cpp \
    adminwindow.cpp \
    bookmodal.cpp \
    filemanager.cpp \
    main.cpp \
    mainwindow.cpp \
    suclogin.cpp

HEADERS += \
    admintest.h \
    adminwindow.h \
    bookmodal.h \
    filemanager.h \
    mainwindow.h \
    suclogin.h

FORMS += \
    admintest.ui \
    adminwindow.ui \
    bookmodal.ui \
    mainwindow.ui \
    suclogin.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    QtResources.qrc
