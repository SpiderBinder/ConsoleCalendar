
#ifndef CONSOLECALENDAR_DATE_H
#define CONSOLECALENDAR_DATE_H

class Date
{
public:
    int seconds, day, month, year;

    Date();
    Date(int _day, int _month, int _year, int _seconds = 0);

    static long get_id(Date date)
    {
        // Bit of a silly implementation but just creating a unique date id from giving each part of the date it's own digits
        // eg: 21/12/2027 at 36213 seconds in would have an id of '2027122136213'
        //long id = 
    }
};

#endif // CONSOLECALENDAR_DATE_H