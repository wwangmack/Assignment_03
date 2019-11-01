#ifndef DATE_H_INCLUDED
#define DATE_H_INCLUDED
#include <bits/stdc++.h>

using namespace std;

class Date
{
public:
    Date(int, int, int);
    void setMonth( int );
    int getMonth();
    void setDay( int );
    int getDay();
    void setYear( int );
    int getYear();
    void displayDate();
private:
    int month;
    int year;
    int day;
};


#endif // DATE_H_INCLUDED
