#include <iostream>
using namespace std;
#include "Invoice.h"
Date::Date( int mouth1,int year1,int day1)
{
    setcyear(year1);
    setcmouth(mouth1);
    setcday(day1);

}
void Date::setcyear(int year1)
{

     if(year1>=13)
       year1=1;
       year=year1;
        if(0<year1<13) year=year1;
}
int Date::getcyear()
{
    return year;

}
void Date::setcmouth(int mouth1)
{

     if(mouth1>=13)
      mouth1=1;
       mouth=mouth1;
        if(0<mouth1<13) mouth=mouth1;

}
int Date::getcmouth()
{

    return mouth;


}

void Date::setcday(int day1)
{

     if(day1>=13)
       day1=1;
       day=day1;
        if(0<day1<13) day=day1;
}
int Date::getcday()
{
    return day;


}


int Date::displayDate()
{

   cout<<"the date is :"<<getcyear()<<"/"<<getcmouth()<<"/"<<getcday()<<endl;
}
