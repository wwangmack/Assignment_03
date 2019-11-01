#include <iostream>
using namespace std;

#include "Date.h" // Employee class definition

/* Define the constructor. Assign each parameter value to the appropriate data
   member. Write code that validates the value of salary to ensure that it is
   not negative. */
   Date::Date(int month,int day,int year)
   {
       setMonth(month);
       setDay(day);
       setYear(year);
   }
  //月
  void Date::setMonth(int month)
   {
      Month=month;
   }
   int Date::getMonth()
   {
      return Month;
   }
   //日
   void Date::setDay(int day)
   {
      Day=day;
   }
   int Date::getDay()
   {
      return Day;
   }
   //年
   void Date::setYear(int year)
   {
    if(year>=1&&year<=12)
     Year=year;
    else
     Year=1;
   }
   int Date::getYear()
   {
      return Year;
   }
