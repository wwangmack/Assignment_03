#include <iostream>
#include "Date.h"
using namespace std;
Date::Date(int Month, int Day, int Year)
{
    setMonth(Month);
    setDay(Day);
    setYear(Year);
}
//function to set the month
void Date::setMonth(int Month)
{
    if(Month>=1&&Month<=12)
        month=Month;
    els
        month=1;
}
//get the month
int Date::getMonth()
{
    return month;
}
//function to set the day
void Date::setDay(int Day)
{
    day=Day;
}
//get the day
int Date::getDay()
{
    return day;
}
//function to set the year
void Date::setYear(int Year)
{
    year=Year;
}
//get the year
int Date::getYear()
{
    return year;
}
//function to dispalay the date message
void Date::displayDate()
{
    cout<<"output date is : "<<getMonth()<<"/"<<getDay()<<"/"<<getYear()<<endl;
} // end function displayDate
