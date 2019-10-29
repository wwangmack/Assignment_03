// Exercise 3.15 Solution: Date.h
#ifndef DATE_H
#define DATE_H

class Date
{
public:
   Date( int = 1, int = 1, int = 2000 ); // default constructor
   void setDate( int, int, int ); // set month, day, year
   void setMonth( int ); // set month
   void setDay( int ); // set day
   void setYear( int ); // set year
   int getMonth(); // get month
   int getDay(); // get day
   int getYear(); // get year
   void displayDate();
private:
   int month; // 1-12
   int day; // 1-31 (except February(leap year), April, June, Sept, Nov)
   int year; // 1900+
}; // end class Date

#endif
