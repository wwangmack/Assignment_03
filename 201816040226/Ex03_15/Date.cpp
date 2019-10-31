#include <iostream>
using namespace std;

// include definition of class Date from Date.h
#include "Date.h"
Date::Date(int month,int day,int year)
{
    setMonth( month ); // initializes Month
    setDay( day );
    setYear( year );
} // end Date constructor
// function to set the month
void Date::setMonth( int month )
{
   Month=month; // store the month
} // end function setMonth

// function to retrieve the month
int Date::getMonth()
{
   return Month;
} // end function getMonth
void Date::setDay(int day)
{
    Day=day;
}
int Date::getDay()
{
    return Day;
}
void Date::setYear(int year)
{
    if(year<1||year>12)
        Year=1;
    else
        Year=year;
}
int Date::getYear()
{
    return Year;
}
void Date::displayDate()//provides a member function
{
    cout<<"month: "<<getMonth()<<"/"<<"day: "<<getDay()<<"/"<<"year: "<<getYear()<<endl;
}//end function displayDat
