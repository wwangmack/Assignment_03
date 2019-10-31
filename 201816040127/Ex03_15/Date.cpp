#include <iostream>
using namespace std;

#include "Date.h" // Date class definition
Date::Date(int monthnum,int daynu,int yearnumber)//Define the constructor.
{
    setYearNumber(yearnumber);
    setMonthNum(monthnum);
    setDayNu(daynu);//Assign each parameter value to the appropriate data member.
}
void Date::setYearNumber(int number)
{

    yearNumber=number;
}
// function to set the yearNumber data member.
int Date::getYearNumber()
{
    return yearNumber;
}
// function to get the yearNumber data member.
void Date::setMonthNum(int num)
{
    if(num>=1&&num<=12)
    {
         monthNum=num;
    }
    else{
        num=1;
    }

}
// function to set the monthNum data member.
int Date::getMonthNum()
{
    return monthNum;
}
//function to get the monthNum data member.
void Date::setDayNu(int nu)
{
    dayNu=nu;

}
//function to set the dayNu data member
int Date::getDayNu()
{
    return dayNu;
}
// function to get the dayNu data member.
void Date::displayDate()
{
   // display a date
   cout << getMonthNum() << "/"  <<getDayNu()<<"/"<< getYearNumber()<<endl;
}
