// Lab 3: Employee.cpp
// Employee class member-function definitions.
#include <iostream>
using namespace std;

#include "Data.h" // Employee class definition

Data::Data(int month,int day,int year)
{
    setMonth(month);
    setDay(day);
    setYear(year);
}

 void Data::setMonth(int month)//引入参数并加以判断 
 {
    // int month;
     if(month<1||month>12)
     {
         month=1;
     }
     datamonth=month;
 }

int Data::getMonth()
{
    return datamonth;
}

void Data::setDay(int day)
 {
     dataday=day;
 }

int Data::getDay()
{
    return dataday;
}

void Data::setYear(int year)
{
    datayear=year;
}

int Data::getYear()
{
    return datayear;
}

