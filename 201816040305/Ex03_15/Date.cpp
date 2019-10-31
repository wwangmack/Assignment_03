#include <iostream>
using namespace std;
//include the head File Date.h
#include "Date.h"
//Constructor
Date::Date(int mounth , int day , int year)
{
    setDay(day) ;
    setMounth(mounth) ;
    setYear(year) ;
}
//Set mounth
void Date::setMounth(int mounth)
{
    if (mounth >=1 && mounth<=12)
        Mounth = mounth;
    else
        Mounth = 1 ;
}
//Get mounth
int Date::getMounth()
{
    return Mounth ;
}
//Set day
void Date::setDay(int day)
{
    Day = day;
}
//Get day
int Date::getDay()
{
    return Day;
}
//Set year
void Date::setYear(int year)
{
    Year = year ;
}
//Get year
int Date::getYear()
{
    return Year ;
}
//Display all
void Date::DisplayDate()
{
    cout<<getMounth()<<"/"<<getDay()<<"/"<<getYear()<<endl ;
}
