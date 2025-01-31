cmake_minimum_required(VERSION 3.28)
project(ConsoleCalendar)

set(SOURCE_FILES
    src/main.cpp#
    src/Project.cpp
    src/Project.h
    src/Task.cpp
    src/Task.h
    src/Event.cpp
    src/Event.h
    src/Calendar.cpp
    src/Calendar.h)

add_executable(ConsoleCalendar ${SOURCE_FILES})

