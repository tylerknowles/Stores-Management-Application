#-------------------------------------------------
#
# Project created by QtCreator 2019-12-20T14:52:24
#
#-------------------------------------------------

QT       += sql
QT       += axcontainer
QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = StoresManagement
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which has been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0


SOURCES += \
        main.cpp \
        userinterface.cpp \
    departments.cpp \
    product.cpp \
    stockhistory.cpp \
    users.cpp \
    orderheader.cpp \
    orderline.cpp \
    database.cpp \
    excel.cpp \
    report.cpp \
    shrinkagerow.cpp \
    salesrow.cpp \
    productcontroller.cpp \
    reportcontroller.cpp \
    usercontroller.cpp \
    databaseconnection.cpp \
    expenditurerow.cpp \
    standardreportrow.cpp \
    standardfunctions.cpp \
    ordercontroller.cpp \
    email.cpp \
    standardtypes.cpp \
    amendtypes.cpp \
    usertypes.cpp \
    unittests.cpp

HEADERS += \
        userinterface.h \
    departments.h \
    usertypes.h \
    amendtypes.h \
    product.h \
    stockhistory.h \
    users.h \
    orderheader.h \
    orderline.h \
    database.h \
    excel.h \
    report.h \
    shrinkagerow.h \
    salesrow.h \
    productcontroller.h \
    reportcontroller.h \
    usercontroller.h \
    databaseconnection.h \
    expenditurerow.h \
    standardreportrow.h \
    standardfunctions.h \
    ordercontroller.h \
    email.h \
    standardtypes.h \
    unittests.h

FORMS += \
        userinterface.ui


# Location of SMTP Library
SMTP_LIBRARY_LOCATION = $$PWD/SmtpClient-for-Qt-1.1/build

LIBS += -L$$SMTP_LIBRARY_LOCATION/release/ -lSMTPEmail

INCLUDEPATH += $$SMTP_LIBRARY_LOCATION
DEPENDPATH += $$SMTP_LIBRARY_LOCATION

DISTFILES +=

RESOURCES += \
    resource.qrc
