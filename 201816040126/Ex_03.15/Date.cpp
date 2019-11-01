#include <iostream>
using namespace std;

#include "Date.h" // Date class definition


Date::Date( int month ,int day , int year )
{
    setMonth( month );
    setDay( day );
    setYear( year );
}

void Date::setMonth( int month )
{
    Month = month;
}
/* Define a set function for the month. */

int Date::getMonth()
{
    if ( 1 <= Month && Month <= 11)
        return Month;
    else
        return 1;
    }/* Define a get function for the month. */

void Date::setDay(int day )
{
    Day = day;
}
/* Define a set function for the day. */

int Date::getDay()
{
    return Day;
}
/* Define a get function for the day. */

void Date::setYear( int year )
{
    Year = year;
}/* Define a set function for the year. */


int Date::getYear()
{
    return Year;
}/* Define a set function for the year. */

void Date::displayDate()
{
    cout << getMonth() << "/" << getDay() << "/" << getYear() << endl;
}
