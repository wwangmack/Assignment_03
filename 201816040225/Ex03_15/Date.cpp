#include <iostream>
using namespace std;

#include "Date.h"
Date::Date(int year,int month,int day)//constructor initialization
   :Year(year),Month(month),Day(day)
{

}
void Date::setYear(int year)//about the function of setyear
{
    Year=year;
}
int Date::getYear()//about the function of getyear
{
    return Year;
}
void Date::setMonth(int month)//about the function of setmonth
{
    Month=month;
}
int Date::getMonth()//about the function of getmonth
{
    return Month;
}
void Date::setDay(int day)//about the function of setday
{
    Day=day;
}
int Date::getDay()//about the function of getday
{
    return Day;
}
void Date::displayDate(int ,int, int)//about the function of displaydate
{
    cout<<"The day,month,year is: "<<getDay()
    <<"/"<<getMonth()<<"/"<<getYear()<<endl;
}

