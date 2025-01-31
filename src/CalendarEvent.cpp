
#include "CalendarEvent.h"

CalendarEvent::CalendarEvent()
 : continuous(false), start_date(Date()), end_date(Date()) {}

CalendarEvent::CalendarEvent(bool _continuous, Date _start_date, Date _end_date = Date())
 : continuous(_continuous), start_date(_start_date), end_date(_end_date) {}