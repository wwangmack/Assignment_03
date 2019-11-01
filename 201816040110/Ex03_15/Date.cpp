#include <iostream>
using namespace std;

#include "Date.h"
Date::Date( int Month , int Day , int Year )
{
    setMonth( Month );
    setDay( Day );
    setYear( Year );
}
void Date::setMonth( int Month)
{
    if(  Month <1 ||Month > 12)
    {
        Month = 1;
    }
    month = Month;
}
void Date::setDay( int Day)
{
    day = Day;
}
void Date::setYear( int Year)
{
    year = Year;
}
int Date::getMonth()
{
    return month;
}
int Date::getDay()
{
    return day;
}
int Date::getYear()
{
    return year;
}
void Date::displayDate()
{
    cout << getMonth() <<"/"<<getDay() <<"/"<< getYear() << endl;
}



