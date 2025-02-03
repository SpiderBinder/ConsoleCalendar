
#include "Date.h"

Date::Date()
 : day(0), month(0), year(0), seconds(0) {}

// TODO: Add clamping for invalid dates
Date::Date(int _day, int _month, int _year, int _seconds /* = 0 */)
 : day(_day), month(_month), year(_year), seconds(_seconds) {}


long Date::get_id(Date date)
{
    // Bit of a silly implementation but just creating a unique date id from giving each part of the date it's own digits
    // Three digits are left free for multiple events on the same day
    long id = date.day * 1000000000;
    id += date.month * 10000000;
    id += date.year * 1000;

    return id;
}

int Date::get_weekday(Date date)
{
    int weekday = 0;

    // TODO: write code to get the weekday number of any date

    return weekday;
}