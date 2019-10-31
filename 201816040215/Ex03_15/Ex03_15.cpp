// assignment 3: Date.h
// Date class member-function definitions.
#include <iostream>
using namespace std;

#include "Date.h" // Employee class definition
int main()
{
    int month,day,year;/*define the month,day and year*/
    cin >> month >> day >> year ;/*input*/
    Date date( month, day, year );/*call the contructor function */
    cout << Date::getMonth() << date.displayDate() << Date::getDay() << date.displayDate() <<
    Date::getYear() << date.displayDate() ;/*output month,day and year*/
}
