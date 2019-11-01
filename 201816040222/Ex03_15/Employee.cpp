#include <iostream>

using namespace std;
#include "Employee.h"

Employee::Employee(int year, int month , int day)//定义1个含3个int类型的对象，分别赋初始值
{
    setYear(year);
    setMonth(month);
    setDay(day);
}
void Employee::setYear(int year1)
{
    year=year1;
}
int Employee::getYear()
{
    return year;
}
void Employee::setMonth(int month1)
{
    if (month1<1||month1>12)
    {
        month1=1;
    }
    month=month1;
}
int Employee::getMonth()
{
    return month;
}
void Employee::setDay(int day1)
{
    day=day1;
}
int Employee::getDay()
{
    return day;
}
void Employee::displayDate()
{
    cout <<"the date is :" <<getYear()<<"/"<<getMonth()<< "/" << getDay() << endl;
}
