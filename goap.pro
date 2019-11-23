TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        main.cpp \
        src/gameobject.cpp \
        src/goapaction.cpp \
        src/goapagent.cpp \
        src/goapplaner.cpp \
        src/igoap.cpp \
        src/state.cpp

HEADERS += \
    src/gameobject.h \
    src/goapaction.h \
    src/goapagent.h \
    src/goapplaner.h \
    src/igoap.h \
    src/state.h
