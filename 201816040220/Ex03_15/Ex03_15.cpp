#include <iostream>
using namespace std;

// include definition of class GradeBook from Date.h
#include "Date.h"

Date::Date( int day,int month,int year)
{
   setDay(day); // initializes day
   setMonth( month ); // initialiZes month
   setYear( year ); // initialiZes month
} // end Date constructor


void Date::setDay( int day )       // function to set the day
{
   day1 = day;
}

void Date::setMonth( int month )       // function to set the month
{
    if(month>12||month<1)
        month=1;
   month1 = month;
}

void Date::setYear( int year )       // function to set the year
{
   year1 = year;
}


int Date::getDay()     // function to retrieve the day
{
   return day1;
}

int Date::getMonth()     // function to retrieve the month
{
   return month1;
}

int Date::getYear()     // function to retrieve the year
{
   return year1;
}

void Date::displayDate()
{
    cout<< month1<<"/"<<day1<<"/"<<year1;
} // end function displayDate
