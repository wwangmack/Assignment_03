#include <iostream>
using namespace std;

// include definition of class Date from Date.h
#include "Date.h"
int main()
{
    Date date(1,1,1); // Create a Date object

   int month,day,year;

    cin>>month>>day>>year;

    date.setMonth(month);//call function
    date.setDay(day);
    date.setYear(year);
    date.displayDate();
}
