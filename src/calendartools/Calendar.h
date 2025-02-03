
#ifndef CONSOLECALENDAR_CALENDAR_H
#define CONSOLECALENDAR_CALENDAR_H

#include <iostream>

#include "CalendarEvent.h"
#include "EventMap.h"

class Calendar
{
private:
    
public:
    // Preset date info
    // TODO: Add strings for weekday and month names

    Calendar();
    ~Calendar();

    void display_day(Date date, EventMap& events);
    void display_range(Date start_date, Date end_date, EventMap& events);
};

#endif // CONSOLECALENDAR_CALENDAR_H