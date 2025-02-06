
#include "Date.h"

Date::Date()
 : day(0), month(0), year(0), seconds(0) {}

// TODO: Add clamping for invalid dates
Date::Date(int _day, int _month, int _year, int _seconds /* = 0 */)
 : day(_day), month(_month), year(_year), seconds(_seconds)
{

}

// Returns the date id for a given date
long Date::get_id(Date date)
{
    // Bit of a silly implementation but just creating a unique date id from giving each part of the date it's own digits
    // Three digits are left free for multiple events on the same day
    long id = date.day * 1000000000;
    id += date.month * 10000000;
    id += date.year * 1000;

    return id;
}

// Returns the date id for the Date object
long Date::get_id()
{
    return Date::get_id(*this);
}


// Returns the number of the week for a given Date (Mon -> 0 etc)
int Date::get_weekday(Date date)
{
    int weekday = 0;

    // TODO: write code to get the weekday number of any date

    return weekday;
}

// Returns the number of days in a given month (takes 1-12)
// TODO: Account for leap years
int Date::get_mdays(int month)
{
    if (month < 1 || month > 12)
    {
        return -1;
    }

    int mdays[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    return mdays[month - 1];
}

// Returns if given year is a leap year
// NOTE: This is very silly but it's here now
bool Date::is_leapyear(int year)
{
    return (year % 4) == 0;
}

bool Date::is_leapyear(Date date)
{
    return Date::is_leapyear(date.year);
}

bool Date::is_leapyear()
{
    return Date::is_leapyear(*this);
}


// Returns the difference in days between two dates
int Date::date_difference(Date date1, Date date2)
{
    int difference = 0;

    // TODO: Write code for finding the difference in days

    return difference;
}

bool Date::operator<(const Date& date)
{
    if (this->year != date.year)
    {
        return (this->year < date.year);
    }
    if (this->month != date.month)
    {
        return (this->month < date.month);
    }
    if (this->day != date.day)
    {
        return (this->day < date.day);
    }
    if (this->seconds != date.seconds)
    {
        return (this->seconds < date.seconds);
    }

    return false;
}

Date Date::operator++(int)
{
    day++;
    if (day > Date::get_mdays(month))
    {
        day = 1;
        month++;
        if (month > 12)
        {
            month = 1;
            year++;
        }
    }

    return *this;
}