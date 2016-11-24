QT += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = PushButtonExample
TEMPLATE = app


SOURCES += main.cpp \
	mainwindow.cpp

CFLAGS = `pkg-config gstreamer-1.0 --cflags`

LIBS = ./libs/*
LIBS += `pkg-config gstreamer-1.0 --libs`

HEADERS += mainwindow.h
HEADERS += ./include/scanner.h ./include/player.h
