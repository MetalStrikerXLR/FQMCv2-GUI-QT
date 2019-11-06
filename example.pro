#-------------------------------------------------
#
# Project created by QtCreator 2013-09-24T17:03:18
#
#-------------------------------------------------

QT       += core gui svg serialport network

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets printsupport

TARGET = FQMC_display
TEMPLATE = app

#-------------------------------------------------

win32: DEFINES += WIN32 _WINDOWS _USE_MATH_DEFINES

win32:CONFIG(release, debug|release):    DEFINES += NDEBUG
else:win32:CONFIG(debug, debug|release): DEFINES += _DEBUG

#-------------------------------------------------

INCLUDEPATH += ./ ./example

#-------------------------------------------------

HEADERS += \
    MainWindow.h \
    ltankwidget.h \
    qcgaugewidget.h \
    rtankwidget.h \
    tcpsoketconnect.h \
    DarkStyle.h


SOURCES += \
    ltankwidget.cpp \
    main.cpp \
    MainWindow.cpp \
    qcgaugewidget.cpp \
    rtankwidget.cpp \
    tcpsoketconnect.cpp \
    DarkStyle.cpp


FORMS += \
    MainWindow.ui \
    ltankwidget.ui \
    rtankwidget.ui

RESOURCES += \
    darkstyle.qrc
