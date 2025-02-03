
#include <iostream>
#include <ctime>

#include "calendartools/Calendar.h"
#include "calendartools/EventMap.h"

int main(int argc, char *argv[])
{
    // Gets current date as a Date object through ctime functions
    std::time_t timestamp = std::time(nullptr);
    struct tm datetime = *std::localtime(&timestamp);
    Date current_date = Date(datetime.tm_mday, datetime.tm_mon + 1, datetime.tm_year + 1900);

    // Creating devault event map and calendar objects
    EventMap events_default = EventMap();
    Calendar calendar = Calendar();

    // NOTE: Test event for testing to be removed later
    events_default.add_event(CalendarEvent(Date(3, 2, 2025), "Today"));

    // Displays all events for current day
    calendar.display_day(current_date, events_default);

    return 0;
}