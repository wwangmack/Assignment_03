#include <iostream>
#include "Date.h"

using namespace std;
//Date constructor
Date::Date(int y, int m, int d)
    :year(y), month(m), day(d)
{

}
// set and get year, month, day
void Date::setYear(int y)
{
    year = y;
}

int Date::getYear() const
{
    return year;
}

void Date::setMonth(int m)
{
    month = m;
}

int Date::getMonth() const
{
    return month;
}

void Date::setDay(int d)
{
    day = d;
}

int Date::getDay() const
{
    return day;
}
//if month>12 or month<1 , it will output year, month, day
void Date::displayDate()
{
    if(getMonth()>12||getMonth()<1)
    {
        setMonth(1);
    }
    cout << getYear() << "/" << getMonth() << "/" << getDay() <<endl;
}
