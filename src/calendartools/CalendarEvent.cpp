
#include "CalendarEvent.h"

CalendarEvent::CalendarEvent()
 : date(Date(0, 0, 0)), title(""), description("") {}

CalendarEvent::CalendarEvent(Date _date, std::string _title, std::string _description /* = "" */)
 : date(_date), title(_title), description(_description) {}

CalendarEvent::~CalendarEvent()
{
    
}