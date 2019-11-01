#include <iostream>
using namespace std; 
#include "Date.h"

Date::Date(int year,int month,int day)
{
	setYear(year);
	setMonth(month);
	setDay(day);
}
void Date::setYear( int y)
{
	year=y;
}
int Date::getYear()
{
	return year;
}
void Date::setMonth( int m)
{
	if(m>=1&&m<=12)
	{
		month=m;
	}
	else
	{
		month=1;
	}
}
int Date::getMonth()
{
	return month;
}
void Date::setDay( int d)
{
	day=d;
}
int Date::getDay()
{
	return day;
}
void Date::Display()
{
	cout<<getMonth()<<"/"<<getDay()<<"/"<<getYear()
		<<endl;
}
