// Assignment02 Date.h
// Date class definition.

#ifndef DATE_H
#define DATE_H

using namespace std;

// Date class definition
class Date
{
public:
    Date(int = 0,int = 0,int = 0);/* Declare a constructor that has one parameter for each data member */
    void setYear(int);/* Declare a set method for the Date's year */
    int getYear()const;/* Declare a get method for the Date's month */
    void setMonth(int);
    int getMonth()const;
    void setDay(int);
    int getDay()const;
    void displayDate()const;
private:
    int Year;
    int Month;
    int Day;
};// end class Date

#endif // DATE_H
