
#include <iostream>
#include "Date.h"
using namespace std;

Date::Date(int a,int b,int c)
  :month(a),day(b),year(c)
{

}
void Date::setmonth(int a)
{
    month=a;
}
void Date::setday(int b)
{

    day=b;

}
void Date::setyear(int c)
{

    year=c;
}
int Date::getmonth()
{
    if(month<1||month>12)
        month=1;
    return month;
}
int Date::getday()const
{
    return day;
}
int Date::getyear()const
{
    return year;
}

void Date::displayDate()const
{

    cout<<month<<'/'<<day<<'/'<<year<<endl;
}
