#include <iostream>
using namespace std;

#include "Date.h" // include definition of class Date

 Date::Date(int year,int month,int day)
 {
     setYear(year);
     setMonth(month);
     setDay(day);
 }

void Date::setYear(int n)
{
    year=n;
}

int Date::getYear()
{
    return year;
}

void Date::setMonth(int n)
{
    if(n>0&&n<13)
        month=n;
    else
        month=1;
}

int Date::getMonth()
{
    return month;
}

void Date::setDay(int n)
{
    day=n;
}

int Date::getDay()
{
    return day;
}

void Date::displayDate()
{
    cout<<getYear()<<"/"<<getMonth()<<"/"<<getDay()<<endl;
}
