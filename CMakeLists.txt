cmake_minimum_required(VERSION 3.28)
project(ptracker)

set(SOURCE_FILES
    src/main.cpp#
    src/Project.cpp
    src/Project.h
    src/Task.cpp
    src/Task.h
    src/Calendar.cpp
    src/Calendar.h
    src/CalendarEvent.cpp
    src/CalendarEvent.h)

add_executable(ptracker ${SOURCE_FILES})