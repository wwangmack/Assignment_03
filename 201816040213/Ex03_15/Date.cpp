// Date class definition.
#include <iostream>
#include "Date.h"  // include definition of class Date
using namespace std;

Date::Date(int month, int day, int year)
{
    // initializes Month, Day and Year
    setMonth(month);
    setDay(day);
    setYear(year);
} // end Date constructor

//function to set the month
void Date::setMonth(int month)
{
    if(month>=1&&month<=12)
        Month=month;
    else
        Month=1;
} // end function setMonth

//get the month
int Date::getMonth() const
{
    return Month;
} // end function getMonth

//function to set the day
void Date::setDay(int day)
{
    Day=day;
} // end function setDay

//get the day
int Date::getDay() const
{
    return Day;
} // end function getDay

//function to set the year
void Date::setYear(int year)
{
    Year=year;
} // end function setYear

//get the year
int Date::getYear() const
{
    return Year;
} // end function getYear

//function to dispalay the date message
void Date::displayDate() const
{
    //Output month, day, year
    cout<<"output date is : "<<getMonth()<<"/"<<getDay()<<"/"<<getYear()<<endl;
} // end function displayDate
