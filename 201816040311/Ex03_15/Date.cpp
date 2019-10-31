#include <iostream>
#include "Date.h"

using namespace std;

//Default constructor
Date::Date()
{

}

//constructor initializes year £¬month£¬day
Date::Date(int Years,int Months,int Days)
{
    setYear(Years);
    setDay(Days);
    setMonth(Months);
}
// function to set the days
void Date::setDay(int days)
{
    day=days;
}
//function to set the month
void Date::setMonth(int months)
{
    if(months >= 1&& months <= 12)
    {
        month=months;
    }
    else
    {
        month=1;
    }
}
//function to set the year
void Date::setYear(int years)
{
    year=years;
}
//function to retrieve the day
int Date::getDay()
{
    return day;
}
//function to retrieve the month
int Date::getMonth()
{
    return month;
}
//function to retrieve the year
int Date::getYear()
{
    return year;
}
//display date
void Date::displayDate()
{
    cout <<getYear()<<"/"<<getMonth()<<"/"<<getDay()<<endl;
}
