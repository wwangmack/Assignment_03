#include <iostream>
#include"Date.h"
using namespace std;

Date::Date(int m,int d, int y)//define structor
{
    setMonth(m);
    setDay(d);
    setYear(y);
}
//define set&get functions
void Date::setMonth(int m)
{
    if(m>=1&&m<=12)
    Month=m;
    else
        Month=1;
}

void Date::setDay(int d)
{
    if(d>=1&&d<=12)
    Day=d;
    else
        Day=1;
}

void Date::setYear(int y)
{
    Year=y;
}

int Date::getMonth()
{
    return Month;
}

int Date::getDay()
{
    return Day;
}

int Date::getYear()
{
    return Year;
}

Date::displayDate()//put out messages
{
    cout<<Month<<"/"<<Day<<"/"<<Year;
}
