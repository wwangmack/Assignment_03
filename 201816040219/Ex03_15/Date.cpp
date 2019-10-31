#include <iostream>
using namespace std;
#include "Date.h" // Employee class definition

Date::Date(int year,int month,int day)
{
    //initializes some data
    setyear( year);
    setmonth( month);
    setday(day);
}
/* Define a set function for the year data member. */
void Date::setyear(int year)
{
    yearr=year;
}
/* Define a get function for the year data member. */
int Date::getyear()
{
    return yearr;
}
/* Define a set function for the month data member. */
void Date::setmonth(int month)
{

    if(month<1||month>12)
    {
        monthh=1;
    }
    else
        monthh=month;
}
/* Define a get function for the month data member. */
int Date::getmonth()
{
    return monthh;
}
/* Define a set function for the day data member. */
void Date::setday(int day)
{
    dayy=day;
}
/* Define a get function for the day data member. */
int Date::getday()
{
    return dayy;
}
//Print out the date
void Date::displayDate()
{

    cout<<getmonth()<<"/"<<getday()<<"/"<<getyear()<<endl;
}
