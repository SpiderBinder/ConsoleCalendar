
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

    // Creating default event map and calendar objects
    EventMap events_default = EventMap();
    Calendar calendar = Calendar();

    // NOTE: Test event(s) for testing to be removed later
    Date test_date = current_date;
    events_default.add_event(CalendarEvent(current_date, "Today"));
    events_default.add_event(CalendarEvent(current_date, "Today Again"));
    events_default.add_event(CalendarEvent(test_date++, "Tomorrow"));
    events_default.add_event(CalendarEvent(test_date++, "The Day After"));

    // Displays all events for current day
    //calendar.display_day(current_date, events_default);
    calendar.display_range(current_date, test_date++, events_default);

    return 0;
}