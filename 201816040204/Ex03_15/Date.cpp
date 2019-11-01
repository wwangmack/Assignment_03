// Exercise 3.15 Solution: Date.cpp
#include <iostream>
#include<string>
#include"Date.cpp"
using namespace std;

Date::Date(int M, int D, int Y)
{
    setMonth(M);
    setDay(D);
    setYear(Y);
}
void Date::setMonth(int M)
{
    if(M>0&&M<12)
    {
        Month = M;
    }
    else
    {
        M = 1;
    }
}
int Date::getMonth()
{
    return Month;
}
void Date::setDay(int D)
{
    Day = D;
}
int Date::getDay()
{
    return Day;
}
void Date::setYear(int Y)
{
    Year = Y;
}
int Date::getYear()
{
    return Year;
}
int Date::getdisplayDate()
{
    return (getYear()\getMonth()\getDay());
}
