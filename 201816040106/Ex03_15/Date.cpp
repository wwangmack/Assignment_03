#include "Date.h"
#include<iomanip>
using namespace std;
Date::Date(int y, int m, int d)//实现构造函数
{
    setYear(y);
    setMonth(m);
    setDay(d);
}
void Date::setMonth(int m)//改变月份
{
    if(m>12||m<1) month=1;//判断是否月份合理
    else month=m;
}
int Date::getMonth(){//改变月份
    return month;
}
void Date::setDay(int d)//改变天数
{
    day=d;
}
int Date::getDay()//返回天数
{
    return day;
}
void Date::setYear(int y)//改变年份
{
    year=y;
}
int Date::getYear()//返回年份
{
    return year;
}
void Date::displayDate()//展示代码实现
{
    cout<<setfill('0')<<setw(2)<<getYear()<<"/"<<setw(2)<<getMonth()<<"/"<<setw(2)<<getDay()<<endl;;
}
