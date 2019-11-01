
#include <iostream>
#include <string>
#include "Date.h"

using namespace std;


Date::Date(int y,int m,int d)
{
    setYear(y);//initialize Year
    setMonth(m);//initialize Month
    setDay(d);//initialize Day
}

//set functions
void Date::setYear(int y)
{
    year = y;
}
void Date::setMonth(int m)
{
    if(m > 0 && m<13)
        month = m;
    else
    {
        cout<<"The month must be 1-12. Now the month is initialized to 1\n"<<endl;
        month = 1;
    }

}
void Date::setDay(int d)
{
    day = d;
}

//get functions
int Date::getYear()
{
    return year;
}
int Date::getMonth()
{
    return month;
}

int Date::getDay()
{
    return day;
}

//display function
void Date::displayDate()
{
    cout<<"\nthe date is: \n"<<month<<"/"<<day<<"/"<<year;
}

