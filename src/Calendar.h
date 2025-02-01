
#ifndef CONSOLECALENDAR_CALENDAR_H
#define CONSOLECALENDAR_CALENDAR_H

#include <iostream>
#include <vector>

#include "CalendarEvent.h"

class Calendar
{
public:
    std::vector<CalendarEvent*> events; // List of CalendarEvent pointers to events from Project deadlines and tasks

    Calendar();
    ~Calendar();

    void display_day(Date date);
    void display_month(Date date);

};

#endif // CONSOLECALENDAR_CALENDAR_H