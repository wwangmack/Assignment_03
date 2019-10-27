
#include <iostream>
#include "Date.h"

using namespace std;

//constructor initializes Date with int as argument
Date::Date(int yue,int ri,int nian)
:month(yue),day(ri),year(nian)
{
    //empty body
}//end this function

//function to set the month
void Date::setMonth(int y)
{
    month = y;
    if(month < 1 || month > 12)
        month = 1;
}//end this function

//function to set the day
void Date::setDay(int r)
{
    day = r;
}//end this function

//function to set the year
void Date::setYear(int n)
{
    year = n;
}//end this function

//function to get the month
int Date::getMonth() const
{
    return month;
}//end this function

//function to get the day
int Date::getDay() const
{
    return day;
}//end this function

//function to get the year
int Date::getYear() const
{
    return year;
}//end this function
void Date::displayDate() const
{
    cout<<getMonth()<<"/"<<getDay()<<"/"<<getYear()<<endl;
}
