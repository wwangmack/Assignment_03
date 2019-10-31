#include <iostream>
#include "Date.h"

using namespace std;

Date :: Date (int m , int d , int y)//:month( m),day(d),year(y)
{
    setDate(m ,d , y);
}

void Date :: setDateYear( int y)
{
    year = y ;
}
void Date :: setDateMonth( int m)
{
    if(month>0&&month<13)
        month = m;
    else
        month = 1;
}
void Date :: setDateDay( int d)
{
    day = d;
}
int Date :: getDateYear()
{
    return year;
}
int Date :: getDateMonth()
{
        return month;
}
int Date :: getDateDay()
{
    return day;
}
void Date :: setDate(int m, int d, int y)
{
    setDateYear(y);
    setDateMonth(m);
    setDateDay(d);
}
void Date :: displayDate()
{
    cout << month <<"/" << day <<"/" << year ;
}//end  function display;
