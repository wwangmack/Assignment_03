//Date.cpp
//Member-function definitions for class Date

#include<iostream>
#include"Date.h"    //include definition of class date

using namespace std;

//Date constructor initializes data member date
Date::Date(int Month,int Day,int Year)
{
    setMonth(Month);
    setDay(Day);
    setYear(Year);
}

//function to set month
//make sure normal formal of month
void Date::setMonth(int Month)
{
    if(Month>=1&&Month<=12)
    {
        month=Month;
    }
    else
    {
        month=1;
    }

}

//function to set day
void Date::setDay(int Day)
{
    day=Day;
}

//function to set year
void Date::setYear(int Year)
{
    year=Year;
}

//function to get month
int Date::getMonth() const
{
    return month;
}

//function to get day
int Date::getDay() const
{
    return day;
}

//function to get year
int Date::getYear() const
{
    return year;
}

//function to display date information
void Date::displayDate() const
{
    cout << "date information:";
    cout << this->getMonth() << "/" << this->getDay()<< "/" << this->getYear() << endl;
}
