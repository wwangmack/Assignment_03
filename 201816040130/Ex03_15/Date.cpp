#include <iostream>
using namespace std;

#include "Date.h"


Date::Date(int month,int day ,int year)  // Define the Date constructor.
{
    setDateYear(year);
    setDateMonth(month);
    setDateDay(day);
}



void Date::setDateYear(int year)  // Define function for the dateYear data member.
{
    dateYear = year;
}


int Date::getDateMonth()
{
    if(dateMonth<1 || dateMonth>12)
	dateMonth = 1;
    return dateMonth;
}


void Date::setDateDay(int day)  // Define function for the dateDay data member.
{
    dateDay = day;
}


int Date::getDateYear()
{
    return dateYear;
}


void Date::setDateMonth(int month)  // Define function for the dateMonth data member.
{
    dateMonth = month;

}


int Date::getDateDay()
{
	return dateDay;
}
