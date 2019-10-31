#include <iostream>
using namespace std;
#include "Date.h"

Date::Date(int month1, int day1, int year1)
{
    setMonth(month1);
    setDay(day1);
    setYear(year1);
}
void Date::setMonth(int name)
{
    if(name > 0 && name < 13)
        month = name;
    else
        month = 1;
}
int Date::getMonth()
{
    return month;
}
void Date::setDay(int name)
{
    day = name;
}
int Date::getDay()
{
    return day;
}
void Date::setYear(int name)
{
    year = name;
}
int Date::getYear()
{
    return year;
}
void Date::displayDate()
{
    cout<<month<<"/"<<day<<"/"<<year<<endl;
}
