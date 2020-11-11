QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    files_functions.cpp \
    logicclass.cpp \
    logicclassparser.cpp \
    logicfunction.cpp \
    logicmodule.cpp \
    logicobject.cpp \
    logicobjectparser.cpp \
    main.cpp \
    mainwindow.cpp \
    masterversionwin.cpp \
    newclasswin.cpp \
    newprojectwin.cpp \
    newversionwin.cpp \
    objectinfo.cpp \
    project.cpp \
    projectinfowin.cpp \
    settings.cpp \
    utils.cpp \
    version.cpp \
    versionfileparser.cpp

HEADERS += \
    logicclass.h \
    logicclassparser.h \
    logicfunction.h \
    logicmodule.h \
    logicobject.h \
    logicobjectparser.h \
    mainwindow.h \
    masterversionwin.h \
    newclasswin.h \
    newprojectwin.h \
    newversionwin.h \
    objectinfo.h \
    project.h \
    projectinfowin.h \
    settings.h \
    version.h \
    versionfileparser.h

FORMS += \
    mainwindow.ui \
    masterversionwin.ui \
    newclasswin.ui \
    newprojectwin.ui \
    newversionwin.ui \
    projectinfowin.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    interface_icons.qrc

win32:CONFIG(release, debug|release): LIBS += -L$$PWD/build-logicelements-Desktop_Qt_5_15_1_MSVC2019_32bit-Debug/release/ -llogicelements
else:win32:CONFIG(debug, debug|release): LIBS += -L$$PWD/build-logicelements-Desktop_Qt_5_15_1_MSVC2019_32bit-Debug/debug/ -llogicelements
else:unix: LIBS += -L$$PWD/build-logicelements-Desktop_Qt_5_15_1_MSVC2019_32bit-Debug/ -llogicelements

INCLUDEPATH += $$PWD/build-logicelements-Desktop_Qt_5_15_1_MSVC2019_32bit-Debug/debug
DEPENDPATH += $$PWD/build-logicelements-Desktop_Qt_5_15_1_MSVC2019_32bit-Debug/debug
