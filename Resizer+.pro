CONFIG += console qt release warn_on
HEADERS = src/mainwindowimpl.h src/resizer_lib.h src/infoimpl.h
DESTDIR = bin
FORMS = ui/mainwindow.ui ui/info.ui
SOURCES = src/main.cpp src/mainwindowimpl.cpp src/resizer_lib.cpp src/infoimpl.cpp
MOC_DIR = compilar
OBJECTS_DIR = compilar
QT = core gui
TEMPLATE = app
UI_DIR = compilar
