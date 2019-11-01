#include "Date.h"
#include <iostream>

Date::Date(const int &month, const int &day, const int &year)
{
	//Constructor
	setMonth(month);
	setDay(day);
	setYear(year);
}

void Date::setMonth(const int &month)
{
	//Judge the validity of the month
	if (month < 1 || month > 12) this->month = 1;
	else this->month = month;
}

int Date::getMonth() const
{
	return month;
}

void Date::setDay(const int &day)
{
	this->day = day;
}

int Date::getDay() const
{
	return day;
}

void Date::setYear(const int &year)
{
	this->year = year;
}

int Date::getYear() const
{
	return year;
}

void Date::displayDate() const
{
	//displayDate
	cout << getMonth() << "/" << getDay() << "/" << getYear() << "\n";
}
