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
        src/idlestate.cpp \
        src/igoap.cpp \
        src/movetostate.cpp \
        src/performactionstate.cpp

HEADERS += \
    src/finitestate.h \
    src/finitestatemachine.h \
    src/gameobject.h \
    src/goapaction.h \
    src/goapagent.h \
    src/goapplaner.h \
    src/idlestate.h \
    src/igoap.h \
    src/movetostate.h \
    src/performactionstate.h
