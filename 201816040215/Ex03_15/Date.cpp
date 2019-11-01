// assignment 3: Date.h
// Date class member-function definitions.
#include <iostream>
using namespace std;

#include "Date.h" // Date class definition

Date::Date( int month, int day, int year )
{
    setMonth ( month );
    setDay ( day );
    setYear( year );
}
  /* Define the constructor. Assign each parameter value to the appropriate data
   member.*/
void Date::setMonth( int month )
{
   if(month>=0&&month<=12)
   Month = month;
   else
     Month = 1;
}/* Define a set function for the month data member. */
int Date::getMonth()
{
    return Month;
}/* Define a get function for the month data member. */
void Date::setDay( int day )
{
    Day = day;
}/* Define a set function for the day data member. */
int Date::getDay()
{
    return Day;
}/* Define a get function for the day data member. */
void Date::setYear( int year )
{
    Year = year;
}/* Define a set function for the year data member. */
int Date::getYear()
{
    return Year;
}/* Define a get function for the year data member. */
void Date::displayDate()
{
   cout << "/" ;
}/*add "/" after each data and display*/
