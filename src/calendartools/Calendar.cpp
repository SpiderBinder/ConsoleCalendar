
#include "Calendar.h"

// Default constructor
Calendar::Calendar()
{

}

// Default destructor
Calendar::~Calendar()
{

}


// Displays CalendarEvent details for a given day
void Calendar::display_day(Date date, EventMap& events)
{
    std::vector<CalendarEvent*> day_events = events.get_day(date);
    
    // TODO: Change to support optional other date layouts
    std::cout 
        << "Events for " 
        << date.day << "/"
        << date.month << "/"
        << date.year << ":"
        << std::endl;
    
    for (int i = 0; i < day_events.size(); i++)
    {
        CalendarEvent event = *day_events[i];
        std::cout << event.title << " - " << event.description << std::endl;
        // TODO: Display hour, minute and second time of event
    }
}

// Displays all CalendarEvent details for a range of days (start_date inclusive; end_date exclusive)
void Calendar::display_range(Date start_date, Date end_date, EventMap& events)
{
    
}