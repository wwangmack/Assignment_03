//Date.cpp
#include<iostream>
#include "Date.h"

using namespace std;

Date::Date(int month,int day,int year)//constructor date member initialization
{
    setMonth(month);
    setDay(day);
    setYear(year);
}
void Date::setMonth(int Month)//function set date member of month
{
    if(Month>=1&&Month<=12)
        month=Month;
    else
        month=1;
}
void Date::setDay(int Day)//function set date member of day
{
    day=Day;
}
void Date::setYear(int Year)//function set date member of year
{
    year=Year;
}

int Date::getMonth()//function get date member of month
{
    return month;
}
int Date::getDay()//function get date member of day
{
    return day;
}
int Date::getYear()//function get date member of year
{
    return year;
}
void Date::disPlay()//output date information in format
{
    cout<<getMonth()<<"/"<<getDay()<<"/"<<getYear()<<endl;
}
