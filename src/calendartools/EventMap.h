
#ifndef CONSOLECALENDAR_EVENTMAP_H
#define CONSOLECALENDAR_EVENTMAP_H

#include <map>
#include <vector>

#include "CalendarEvent.h"

// Contains a map of CalendarEvents with their Date id to find when searching for specific dates
// The map contains CalendarEvents that are pointed to by other methods and functions to be edited
class EventMap
{
private:
    // Map of CalendarEvent pointers for Project and Task deadlines or standalone events
    std::map<long, CalendarEvent> events;

public:
    EventMap();

    std::vector<CalendarEvent*> get_day(Date date);
    CalendarEvent* add_event(CalendarEvent event);
    bool remove_event(CalendarEvent* event);

};

#endif // CONSOLECALENDAR_EVENTMAP_H