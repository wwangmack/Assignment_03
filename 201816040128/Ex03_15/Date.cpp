#include <iostream>
#include "Date.h"
#include<string>
using namespace std;


    //定义构造函数进行传参数
    Date::Date(int month1, int day1, int year1)
        : month(month1), day(day1),year(year1)
    {

    }


    void Date::setMonth(int month1)
    {
        month=month1;
    }
    int Date::getMonth() const
    {
        return month;
    }


     void Date::setDay(int day1)
    {
        day=day1;
    }
    int Date::getDay() const
    {
        return day;
    }


     void Date::setYear(int year1)
    {
        year=year1;
    }
    int Date::getYear() const
    {
        return year;
    }

    void Date::displayDate()
    {
        cout<<getMonth()<<"/"<<getDay()<<"/"<<getYear();
    }




