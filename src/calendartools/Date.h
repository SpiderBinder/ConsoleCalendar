
#ifndef CONSOLECALENDAR_DATE_H
#define CONSOLECALENDAR_DATE_H

class Date
{
public:
    int seconds, day, month, year;

    Date();
    Date(int _day, int _month, int _year, int _seconds = 0);

    static long get_id(Date date);
    static int get_weekday(Date date);
};

#endif // CONSOLECALENDAR_DATE_H