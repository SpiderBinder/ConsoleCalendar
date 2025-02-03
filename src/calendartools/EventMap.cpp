
#include "EventMap.h"

EventMap::EventMap()
{

}

std::vector<CalendarEvent*> EventMap::get_day(Date date)
{
    long id = Date::get_id(date);
    std::vector<CalendarEvent*> day_events;

    for (int i = 0; i < 1000; i++)
    {
        if (events.count(id + i) == 1)
        {
            day_events.push_back(&events[id + i]);
        }
        else
        {
            break;
        }
    }

    return day_events;
}

CalendarEvent* EventMap::add_event(CalendarEvent event)
{
    long id = Date::get_id(event.date);
    for (int i = 0; i < 1000; i++)
    {
        if (events.count(id + i) == 0)
        {
            events[id + i] = event;
            return &events[id + i];
        }
    }

    return nullptr;
}

bool EventMap::remove_event(CalendarEvent* event)
{
    

    return false;
}