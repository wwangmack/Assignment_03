#include <iostream>
#include "Date.h"
using namespace std;
Date::Date(int month1,int day1,int year1)//构造函数初始化
{
    setMonth(month1);
    setDay(day1);
    setYear(year1);
}
void Date::setMonth(int month2)//月的set函数
    {
       month=month2;
    }
int Date::getMonth()//月的get函数
{
    if(month<1||month>12)//如果月不在1到12内则输出1
    return 1;
    return month;
}
    void Date::setDay(int day2)//日的set函数
    {
        day=day2;
    }
int Date::getDay()//日的get函数
    {
        return day;
    }
void Date::setYear(int year2)//年的set函数
{
    year=year2;
}

int Date::getYear()//年的get函数
{
    return year;
}
void Date::displayDate()//输出显示数据
{
    cout<<"月"<<"/"<<"日"<<"/"<<"年: "<<getMonth()<<"/"<<getDay()<<"/"<<getYear();
}
