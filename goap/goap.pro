TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        main.cpp \
        src/finitestate.cpp \
        src/finitestatemachine.cpp \
        src/gameobject.cpp

HEADERS += \
    src/finitestate.h \
    src/finitestatemachine.h \
    src/gameobject.h
