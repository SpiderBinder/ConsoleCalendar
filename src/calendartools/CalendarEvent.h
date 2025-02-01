
#ifndef CONSOLECALENDAR_EVENT_H
#define CONSOLECALENDAR_EVENT_H

#include <string>

#include "Date.h"

class CalendarEvent
{
public:
    const int id;
    std::string title; // Title/description of a CalendarEvent shown on Calendar
    const Date date;
    
    CalendarEvent(Date _date);
    ~CalendarEvent();

    
};

#endif // CONSOLECALENDAR_EVENT_H