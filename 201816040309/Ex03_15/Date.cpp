
#include <iostream>

using namespace std;

#include "Date.h"

Date::Date(int year_1,int month_1,int day_1)
{
    set_year(year_1);
    set_month(month_1);
    set_day(day_1);
}
void Date::set_day(int day_1)
{
    day = day_1;
}
void Date::set_year(int year_1)
{
    year = year_1;
}
void Date::set_month(int month_1)
{
    if(month_1>12||month_1<1)
    {
        month =1;
    }
    else
        month = month_1;
}
void Date::displayDate()
{
    cout<<year<<"/"<<month<<"/"<<day<<endl;
}
