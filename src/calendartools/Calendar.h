
#ifndef CONSOLECALENDAR_CALENDAR_H
#define CONSOLECALENDAR_CALENDAR_H

#include <iostream>
#include <vector>

#include "CalendarEvent.h"

class Calendar
{
public:
    std::vector<CalendarEvent*> events; // List of CalendarEvent pointers to events from Project deadlines and tasks

    // Preset date info


    Calendar();
    ~Calendar();

    void display_day(Date date);
    void display_range(Date start_date, Date end_date);

    static std::string get_weekday(Date date);
};

#endif // CONSOLECALENDAR_CALENDAR_H