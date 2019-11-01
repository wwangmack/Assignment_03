#include <iostream>

using namespace std;

#include "Date.h"

Date::Date(int year,int month,int day)
{
    setYear(year);//initialize year
    setMonth(month);//initialize month
    setDay(day);//initialize day
}

void Date::setYear(int year)
{
    Year=year;
}//functions to set year

int Date::getYear()
{
    return Year;
}//functions to retrieve year

void Date::setMonth(int month)
{
    if(month>0&&month<13)
    {
        Month=month;
    }
    else
    {
        Month=1;
    }
}//functions to set month

int Date::getMonth()
{
    return Month;
}//functions to retrieve month

void Date::setDay(int day)
{
    Day=day;
}//functions to set day

int Date::getDay()
{
    return Day;
}//functions to retrieve day

void Date::displayDate()
{
    cout<<getYear()<<"/"<<getMonth()<<"/"<<getDay()<<endl;
}//functions to output year,month,day
