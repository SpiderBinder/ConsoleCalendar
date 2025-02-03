cmake_minimum_required(VERSION 3.28)
project(ptracker)

set(SOURCE_FILES
    src/main.cpp

    src/projecttools/Project.cpp 
    src/projecttools/Project.h 
    src/projecttools/Task.cpp 
    src/projecttools/Task.h 

    src/calendartools/Calendar.cpp 
    src/calendartools/Calendar.h 
    src/calendartools/EventMap.cpp 
    src/calendartools/EventMap.h 
    src/calendartools/CalendarEvent.cpp 
    src/calendartools/CalendarEvent.h 

    src/calendartools/Date.cpp 
    src/calendartools/Date.h)

add_executable(ptracker ${SOURCE_FILES})