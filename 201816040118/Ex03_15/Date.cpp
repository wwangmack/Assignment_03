#include<iostream>
using namespace std;
#include "Date.h"
Date::Date(int year,int month,int day)  //建立构造函数
{
    setDateYear(year);
    setDateMonth(month);
    setDateDay(day);      //初始化这三个变量
}
void Date::setDateYear(int year)
{
    DateYear=year;   //把传递的年份值赋给数据成员Dateyear
}
int Date::getDateYear()
{
    return DateYear; //返回DateYear的值
}
void Date::setDateMonth(int month)
{
    if(month>=1&&month<=12)
    DateMonth= month;     //如果提供的值正确,把传递的月份值传递给数据成员DateMonth
    else
        DateMonth=1;     //如果提供的值不正确,把数据成员DateMonth赋值为1
}
int Date::getDateMonth()
{
    return DateMonth; //返回DateMonth的值
}
void Date::setDateDay(int day)
{
    DateDay=day;   //把传递的日期赋值给DateDay
}
int Date::getDateDay()
{
    return DateDay; //返回DateDay的值
}
void Date::dispalyDate() //输出函数
{
    cout<<"日期为: "<<endl;
    cout<<getDateYear()<<"/"<<getDateMonth()<<"/"<<getDateDay()<<endl;
}
