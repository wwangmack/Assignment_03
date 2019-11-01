//Ex03_15:Date.cpp
#include <iostream>
using namespace std;
#include "Date.h"//Date class definition

//constructor year, month, and day
Date::Date(int year, int month, int day)
{
    setYear(year);
    if(month >= 1 && month <= 12)
    {
        setMonth(month);
    }
    else
    {
        setMonth(1);
    }
    setDay(day);
}//end Date constructor

//fuction to set year
void Date::setYear(int y)
{
    year = y;
}

//fuction to retrieve year
int Date::getYear()
{
    return year;
}

//fuction to set month
void Date::setMonth(int m)
{
    month = m;
}

//fuction to retrieve month
int Date::getMonth()
{
    return month;
}

//fuction to set day
void Date::setDay(int d)
{
    day = d;
}

//fuction to retrieve day
int Date::getDay()
{
    return day;
}

//fuction to dispaly Date messages
void Date::displayDate()
{
    //display the date
    cout << "Date :" << getMonth() << "/" << getDay() << "/" << getYear() << endl;
}
