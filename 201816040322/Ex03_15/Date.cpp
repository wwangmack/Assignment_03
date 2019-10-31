// Assignment02 Date.cpp
// Date class member-function definitions.

#include <iostream>
#include <iomanip>

#include "Date.h"

using namespace std;

Date::Date(int tyear,int tmonth,int tday)
{
    setYear(tyear);
    setMonth(tmonth);
    setDay(tday);
}
void Date::setYear(int year)
{
    Year=year;
}
int Date::getYear()const
{
    return Year;
}
void Date::setMonth(int month)
{
    if(month>=1&&month<=12)
        Month=month;
    else
        Month=1;
}
int Date::getMonth()const
{
    return Month;
}
void Date::setDay(int day)
{
    Day=day;
}
int Date::getDay()const
{
    return Day;
}
void Date::displayDate()const
{
    cout << "The time is " << setfill('0') << setw(4) << getYear()
    << "/" << setw(2) << getMonth()
    << "/" << setw(2) << getDay() << endl;
}
