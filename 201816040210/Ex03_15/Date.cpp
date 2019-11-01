
#include <iostream>
using namespace std;

#include "Date.h"

//constructor initializes year,month and day
Date::Date( int y,int m,int d )
{
    setYear( y );//initializes year
    setMonth( m );//initializes month
    setDay( d );//initializes day
}//end Date constructor

//function to set year
void Date::setYear( int year )
{
    Year = year;//store the year
}//end function

//function to receive year
int Date::getYear()
{
    return Year;
}//end function

//function to set month
void Date::setMonth( int month )
{
    if( month>=1&&month<=12 )
    {
        Month = month;//if 1<=month<=12,store month
    }
    else
        Month = 1;//store 1
}//end function

//function to receive month
int Date::getMonth()
{
    return Month;
}//end function

//function to set day
void Date::setDay( int day )
{
    Day = day;//store day
}//end function

//function to receive day
int Date::getDay()
{
    return Day;
}//end function

//function to display Date
void Date::displayDate()
{
    cout<<Month<<"/"<<Day<<"/"<<Year<<endl;
}//end function
