#include <iostream>
#include <iomanip>
#include "Date.h" // include definition of class Date
using namespace std;

Date::Date( int m, int d, int y )
{
    setMonth( m ); // invokes function setMonth
    setDay( d ); // invokes function setDay
    setYear( y );
} // end Date constructor

void Date::setDay( int d )
{
   if ( month == 2 && leapYear() )
      day = ( d <= 29 && d >= 1 ) ? d : 1;
   else
      day = ( d <= monthDays() && d >= 1 ) ? d : 1;
} // end function setDay

void Date::setMonth( int m )
{
   month = m <= 12 && m >= 1 ? m : 1; // sets month
} // end function setMonth

void Date::setYear( int y )
{
   year = y >= 0 ? y : 1; // sets year
} // end function setYear

int Date::getDay()
{
   return day;
} // end function getDay

int Date::getMonth()
{
   return month;
} // end function getMonth

int Date::getYear()
{
   return year;
} // end function getYear

void Date::displayDate()
{

   cout <<setw(5)<< month << " "<<'/'<<setw(5) << day<< " " << '/'<<setw(5) << year << "\n"<<endl; // outputs date
} // end function print

/* Write code to define member function nextDay;
   make sure to check if the new day is the start of
   a new month or a new year */

bool Date::leapYear()
{
   if ( getYear() % 400 == 0 || ( getYear() % 4 == 0 && getYear() % 100 != 0 ) )
         return true; // is a leap year
      else
         return false; // is not a leap year
} // end function leapYear

int Date::monthDays()
{
   const int days[ 12 ] =
     { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

   return getMonth() == 2 && leapYear() ? 29 : days[ getMonth() - 1 ];
} // end function monthDays
