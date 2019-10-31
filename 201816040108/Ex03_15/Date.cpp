#include<iostream>
#include"Date.h"
using namespace std;

Date::Date(int month,int day,int year)
{
    setmonth(month);
    setday(day);
    setyear(year);
}
void Date::setmonth(int m)
{
    if(m>=1&&m<=12)
        month=m;
    else
        month=1;
}
void Date::setday(int d)
{
    day=d;
}
void Date::setyear(int y)
{
    year=y;
}
int Date::getmonth()
{
    return month;
}
int Date::getday()
{
    return day;
}
int Date::getyear()
{
    return year;
}
void Date::displayDate()//Show the performance of the Date class
{
    cout<<"Date:"<<getmonth()<<"/"<<getday()<<"/"<<getyear()<<endl;
}
