#-------------------------------------------------
#
# Project created by QtCreator 2016-03-11T13:41:40
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Histogram
TEMPLATE = app


SOURCES += main.cpp\
        histogram.cpp

HEADERS  += histogram.h

FORMS    += histogram.ui
#------------- THIS IS A PATH FOR LIB OPENCV----------------------------------#

INCLUDEPATH += /usr/local/include/opencv
LIBS += -L/usr/lib/x86_64-linux-gnu/ -lopencv_calib3d -lopencv_contrib -lopencv_core -lopencv_features2d -lopencv_flann -lopencv_gpu -lopencv_highgui -lopencv_imgproc -lopencv_legacy -lopencv_ml -lopencv_objdetect -lopencv_ocl -lopencv_photo -lopencv_stitching -lopencv_superres -lopencv_ts -lopencv_video -lopencv_videostab
