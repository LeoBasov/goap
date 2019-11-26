TEMPLATE = app
CONFIG += console c++17
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        ../../src/finitestate.cpp \
        ../../src/finitestatemachine.cpp \
        ../../src/gameobject.cpp \
        ../../src/goapaction.cpp \
        ../../src/goapagent.cpp \
        ../../src/goapplaner.cpp \
        ../../src/idlestate.cpp \
        ../../src/igoap.cpp \
        ../../src/movetostate.cpp \
        ../../src/performactionstate.cpp \
        main.cpp \
        src/labourer.cpp

HEADERS += \
    ../../src/finitestate.h \
    ../../src/finitestatemachine.h \
    ../../src/gameobject.h \
    ../../src/goapaction.h \
    ../../src/goapagent.h \
    ../../src/goapplaner.h \
    ../../src/idlestate.h \
    ../../src/igoap.h \
    ../../src/movetostate.h \
    ../../src/performactionstate.h \
    src/labourer.h
