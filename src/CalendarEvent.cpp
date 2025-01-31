
#include "CalendarEvent.h"

CalendarEvent::CalendarEvent()
 : id(0), continuous(false), start_date(Date()), end_date(Date()) {}

CalendarEvent::CalendarEvent(int _id, bool _continuous, Date _start_date, Date _end_date = Date())
 : id(_id), continuous(_continuous), start_date(_start_date), end_date(_end_date) {}