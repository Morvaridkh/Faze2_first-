QT       += core gui sql
QT       += sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    comment1.cpp \
    content1.cpp \
    directmessage1.cpp \
    like1.cpp \
    main.cpp \
    page1.cpp \
    page10_comments.cpp \
    page11_mpost.cpp \
    page12_mjob.cpp \
    page13_company.cpp \
    page14_viewprofile.cpp \
    page15_notification.cpp \
    page2.cpp \
    page3.cpp \
    page4.cpp \
    page5.cpp \
    page6_mynetworks.cpp \
    page7_jobs.cpp \
    page8_messaging.cpp \
    page9_me.cpp \
    post1.cpp \
    time1.cpp

HEADERS += \
    comment1.h \
    content1.h \
    directmessage1.h \
    like1.h \
    page1.h \
    page10_comments.h \
    page11_mpost.h \
    page12_mjob.h \
    page13_company.h \
    page14_viewprofile.h \
    page15_notification.h \
    page2.h \
    page3.h \
    page4.h \
    page5.h \
    page6_mynetworks.h \
    page7_jobs.h \
    page8_messaging.h \
    page9_me.h \
    post1.h \
    time1.h

FORMS += \
    page1.ui \
    page10_comments.ui \
    page11_mpost.ui \
    page12_mjob.ui \
    page13_company.ui \
    page14_viewprofile.ui \
    page15_notification.ui \
    page2.ui \
    page3.ui \
    page4.ui \
    page5.ui \
    page6_mynetworks.ui \
    page7_jobs.ui \
    page8_messaging.ui \
    page9_me.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    project-image.qrc
