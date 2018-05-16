TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
    src/fraction.cpp \
    src/main.cpp \
    src/monomial.cpp \
    src/student.cpp \
    src/array.cpp

HEADERS += \
    src/fraction.h \
    src/monomial.h \
    src/student.h \
    src/array.h

DISTFILES += \
    README.md
