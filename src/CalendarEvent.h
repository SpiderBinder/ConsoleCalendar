
#ifndef CONSOLECALENDAR_EVENT_H
#define CONSOLECALENDAR_EVENT_H

#include <string>

struct Date
{
    int seconds, day, month, year;
};

class CalendarEvent
{
public:
    const int id;
    const bool continuous;
    std::string title; // Title/description of a CalendarEvent shown on Calendar

    const Date start_date;
    const Date end_date;
    
    CalendarEvent(int _id, Date _start_date);
    CalendarEvent(int _id, Date _start_date, Date _end_date);
    ~CalendarEvent();
};

#endif // CONSOLECALENDAR_EVENT_H