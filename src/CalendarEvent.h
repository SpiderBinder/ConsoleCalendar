
#ifndef CONSOLECALENDAR_EVENT_H
#define CONSOLECALENDAR_EVENT_H

class CalendarEvent
{
public:
    const int id;
    const bool continuous;
    //char title[32]; // Title/description of a CalendarEvent shown on Calendar
    const struct Date
    {
        int seconds, day, month, year;
        Date() : seconds(0), day(0), month(0), year(0) {}
    } start_date, end_date;
    
    CalendarEvent();
    CalendarEvent(int _id, bool _continuous, Date _start_date, Date _end_date = Date());
};

#endif // CONSOLECALENDAR_EVENT_H