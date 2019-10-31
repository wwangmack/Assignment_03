#include <iostream>
using namespace std;

#include "Date.h"

Date::Date(int m, int d, int y) // Date constructor
{
   setDate(m,d,y); // use member function setDate to initalize Date
}

void Date::setDate(int mo, int dy, int yr) 
{
    setMonth(mo);  //set Date  using member functions
    setDay(dy);
    setYear(yr);
}

void Date::setDay(int d) // set Day
{
    day = d; // store day
}

void Date::setMonth(int m) // set Month 
{
    month = m <= 12 && m >= 1 ? m : 1; // if month is not in [1,12],set month 1
}

void Date::setYear(int y) // set year
{
    year = y;
}

int Date::getDay() // member function getDay
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

void Date::displayDate() // show Date use a stable form
{
    cout << month << '/' << day << '/' << year << '\n'; // outputs date
}
