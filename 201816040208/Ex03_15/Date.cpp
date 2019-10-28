#include<iostream>
#include"Date.h"
using namespace std;

    Date::Date(int month, int day, int year) //初始化年月日
        : dateMonth(month), dateDay(day), dateYear(year)
    {

    }

    void Date::setDateMonth(int month)    //设定月
    {
        if(month >= 1 && month <= 12)
            dateMonth = month;
        else
            dateMonth = 1;
    }

    int Date::getDateMonth()  //返回月
    {
        return dateMonth;
    }

    void Date::setDateDay(int day)    //设定日
    {
        dateDay = day;
    }

    int Date::getDateDay()    //返回日
    {
        return dateDay;
    }

    void Date::setDateYear(int year)  //设定年
    {
        dateYear = year;
    }

    int Date::getDateYear()   //返回年
    {
        return dateYear;
    }

    void Date::displayMessage()   //输出信息
    {
        cout << dateMonth << "/" << dateDay << "/" << dateYear << endl;
    }

