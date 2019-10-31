#include <iostream>

using namespace std;
#include"Date.h"
Date::Date(int m,int d,int y)
{
    setAll(m,d,y);//initializes data
}
void Date::setAll(int m,int d,int y)
{
    setMonth(m);//set the month
    setDay(d);//set the day
    setYear(y);//set year
}
void Date::setMonth(int m)
{
    if(m>=1&&m<=12)
       month=m;//store the month
    else
        month=1;
}
int Date::getMonth()
{
    return month;
}
void Date::setDay(int d)
{
    day=d;//store the day
}
int Date::getDay()
{
    return day;
}
void Date::setYear(int y)
{
    year=y;//set the year
}
int Date::getYear()
{
    return year;
}
void Date::displayDate()
{
    cout <<month<<"/"<<day<<"/"<<year<<"\n\n";//output month,day and year
}
