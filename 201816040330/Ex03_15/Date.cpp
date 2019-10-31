#include "Date.h"//include definition of class Date
#include <iostream>
using namespace std;

Date:: Date(int year,int month,int day)
{
    setYear(year);
    setMonth(month);
    setDay(day);
}//end function date


void Date::setYear(int year1)
{
    year=year1;
}//end function setyear


int Date::getYear()const
{
    return year;
}//end function getyear


void Date::setMonth(int month1)
{
    month=month1;
}//end function setmonth


int Date::getMonth()const
{
    return month;
}//end function getmonth


void Date::setDay(int day1)
{
    day=day1;
}//end function setday


int Date::getDay()const
{
    return day;
}//end function getday

void Date::displayDate(int year1,int month1,int day1)
{
    if(month1>12||month1<1)//adjust and test
    {
        month1=1;
    }
    cout<<year1<<"/"<<month1<<"/"<<day1;
}//end function displaydate
