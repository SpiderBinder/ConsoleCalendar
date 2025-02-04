
#ifndef CONSOLECALENDAR_DATE_H
#define CONSOLECALENDAR_DATE_H

class Date
{
public:
    int seconds, day, month, year;

    Date();
    Date(int _day, int _month, int _year, int _seconds = 0);

    static long get_id(Date date);
    long get_id();

    static int get_weekday(Date date);
    static int get_mdays(int month);
    static bool is_leapyear(int year);
    static bool is_leapyear(Date date);
    bool is_leapyear();

    static int date_difference(Date date1, Date date2);
};

#endif // CONSOLECALENDAR_DATE_H