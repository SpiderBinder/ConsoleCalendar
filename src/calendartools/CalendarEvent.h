
#ifndef CONSOLECALENDAR_CALENDAREVENT_H
#define CONSOLECALENDAR_CALENDAREVENT_H

#include <string>

#include "Date.h"

// Class for storing events to be displayed on a Calendar display
// Contains a Date for time of occurance as well as a title and description for details
// Can be used for Project/Task deadlines/events or as a standalone event
class CalendarEvent
{
public:
    Date date;
    std::string title;
    std::string description; // Description is optional and will be ommited if not included
    // NOTE: May be good to add a 'delete' flag/boolean to mark for deletion when running EventMap::remove_event or a seperate EventMap::remove_events
    
    CalendarEvent();
    CalendarEvent(Date _date, std::string _title, std::string _description = "");
    ~CalendarEvent();
};

#endif // CONSOLECALENDAR_CALENDAREVENT_H