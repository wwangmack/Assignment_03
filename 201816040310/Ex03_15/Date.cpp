#include <iostream>
using namespace std;

#include "Date.h"

Date::Date(int m, int d, int y)
    : year(y), day(d)
{
    setMonth(m);
}

void Date::setDate(int mo, int dy, int yr)
{
    setMonth(mo); 
    setDay(dy);  
    setYear(yr); 
} 
void Date::setDay(int d)
{
    day = d;
}

void Date::setMonth(int m)
{
    month = m <= 12 && m >= 1 ? m : 1;
}

void Date::setYear(int y)
{
    year = y;
}

int Date::getDay()
{
    return day;
}

int Date::getMonth()
{
    return month;
}

int Date::getYear()
{
    return year;
}

void Date::displayDate()
{
    cout << month << '/' << day << '/' << year << '\n'; // outputs date
}
