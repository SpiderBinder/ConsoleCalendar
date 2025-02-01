
#include "CalendarEvent.h"

CalendarEvent::CalendarEvent(int _id, Date _start_date)
 : id(_id), continuous(false), start_date(_start_date), end_date() {}

CalendarEvent::CalendarEvent(int _id, Date _start_date, Date _end_date)
 : id(_id), continuous(false), start_date(_start_date), end_date(_end_date) {}

CalendarEvent::~CalendarEvent()
{
    
}