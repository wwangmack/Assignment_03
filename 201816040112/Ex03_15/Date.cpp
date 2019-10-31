#include <iostream>
#include "headers.h"
using namespace std;

Date::Date(int day,int month,int year):elday(day),elyear(year)
{
    setelmonth(month); //进入月份判断
}//初始化
void Date::setelday(int day)
{
    elday=day;
}
void Date::setelmonth(int month)
{   if(month>=1&&month<=12)
        elmonth=month;
    else
        {cout<<"月份输入错误，其已自动变为1，请输入1到12的数字"<<endl;
        elmonth=1;} //月份判断
}
void Date::setelyear(int year)
{
    elyear=year;
}
int Date::getelday() const
{
    return elday;
}
int Date::getelmonth() const
{
    return elmonth;
}
int Date::getelyear() const
{
    return elyear;
}
void Date::display()
{
    cout<<"当前日期为:"<<getelyear()<<"年"<<getelmonth()<<"月"<<getelday()<<"日";
}
