#include <iostream>
using namespace std;

#include"Date.h"

Date::Date(int yea,int mont,int da)//initalization function
{
    SetYear(yea);
    SetMonth(mont);
    SetDay(da);
}
void Date::SetYear(int num)//initalization year
{
    year=num;
}
int Date::GetYear()//reciver year
{
    return year;
}
void Date::SetMonth(int descripe)//initalization month
{
    month=descripe;
}
int Date::GetMonth()//reciver month
{
    if(month<1||month>12)
        month=1;
    return month;
}
void Date::SetDay(int pri)//initalization day
{
    day=pri;
}
int Date::GetDay()//reciver day
{
    return day;
}
void Date::DisPlay()//display all message
{
    cout<<GetMonth()<<"/"<<GetDay()<<"/"<<GetYear()<<endl;
}
