#include<bits/stdc++.h>
#include"Date.h"
using namespace std;
Date::Date(int remonth,int reday,int reyear)///初始化
{
    setdate(remonth,reday,reyear);///设定
}
void Date::setdate(int remonth,int reday,int reyear)///设定
{
    setday(reday);
    setmonth(remonth);
    setyear(reyear);
}
void Date::setmonth(int remonth)///修改月份
{
    month=(remonth<=12&&remonth>=1)?remonth:1;///是否非法，若非法置1
}
void Date::setday(int reday)///修改日期
{
    day=reday;
}
void Date::setyear(int reyear)///修改年份
{
    year=reyear;
}
void Date::display()///显示
{
     cout<<"日期:"<<getmonth()<<"/"<<getday()<<"/"<<getyear()<<endl;
}
int Date::getmonth()///显示月份
{
    return month;
}
int Date::getday()///显示日期
{
    return day;
}
int Date::getyear()///显示年份
{
    return year;
}
