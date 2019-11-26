TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        main.cpp \
        src/finitestate.cpp \
        src/finitestatemachine.cpp \
        src/gameobject.cpp \
        src/goapaction.cpp \
        src/goapagent.cpp \
        src/goapplaner.cpp \
        src/igoap.cpp

HEADERS += \
    src/finitestate.h \
    src/finitestatemachine.h \
    src/gameobject.h \
    src/goapaction.h \
    src/goapagent.h \
    src/goapplaner.h \
    src/igoap.h
