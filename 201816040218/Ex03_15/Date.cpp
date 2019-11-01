#include<iostream>
#include "Date.h"

using namespace std;

Date::Date(int month, int day, int year)
{
    setMonth(month);
    setDay(day);
    setYear(year);
}

void Date::setMonth(int month)
{
    if(month>=1&&month<=12)
        Month=month;
    else
        Month=1;
}

int Date::getMonth()
{
    return Month;
}

void Date::setDay(int day){
    Day=day;
}
int Date::getDay()
{
    return Day;
}

void Date::setYear(int year)
{
    Year=year;
}
int Date::getYear()
{
    return Year;
}

void Date::displayDatr()
{
    cout<<getMonth()<< "/"<<getDay()<< "/"<<getYear()<<endl;
}
