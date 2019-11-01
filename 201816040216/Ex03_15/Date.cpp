// Date class member-function definitions.
#include <iostream>
using namespace std;

#include "Date.h" // Employee class definition
Date::Date(unsigned int month,unsigned int day,unsigned int year)
{
    setmonth(month);
    setday(day);
    setyear(year);
}

void Date::setmonth(unsigned int month)
{
    if(month>0&&month<=12)
        Month=month;
    else
        Month=1;
    //end judgement

}//end function setmonth

unsigned int Date::getmonth()
{
    return Month;
}//end function getmonth

void Date::setday(unsigned int day)
{
    Day=day;
}//end function setday

unsigned int Date::getday()
{
    return Day;
}//end function getday

void Date::setyear(unsigned int year)
{
    Year=year;
}//end function setyear
unsigned int Date::getyear()
{
    return Year;
}//end function getyear

void Date::displaymessage()
{
    cout<<getmonth()<<"/"<<getday()<<"/"<<getyear();
}//end function displaymessage
