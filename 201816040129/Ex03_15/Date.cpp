// Lab 1: Date.cpp
// Member-function definitions for class Date.
#include <iostream>
using namespace std;

#include "Date.h" // include definition of class Date

Date::Date(int year,int month,int day)
{
   setYear(year);// initializes Year
   setMonth(month);// initializes Month
   setDay(day);// initializes Day
} // end Date constructor

// function to set the year
void Date::setYear(int year)
{
   Year=year; //store the data
}
// function to retrieve the data
int Date::getYear()
{
    return Year;//return the data
}

// function to set the month
void Date::setMonth(int month)
{
    if(month>12||month<1)//if the month is negative
        Month=1;//set to 1
    else
        Month=month;
}
// function to retrieve the data
int Date::getMonth()
{
    return Month;
}
// function to set the day
void Date::setDay(int day)
{
    Day=day;
}
// function to retrieve the data
int Date::getDay()
{
    return Day;
}
// display the date
void Date::displayDate()
{
    cout<<getMonth()<<"/"<<getDay()<<"/"<<getYear()<<endl;//output the date
}
