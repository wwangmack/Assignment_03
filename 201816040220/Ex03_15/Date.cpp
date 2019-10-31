#include <iostream>
using namespace std;

// include definition of class GradeBook from Date.h
#include "Date.h"

// function main begins program execution
int main()
{
   // create a GradeBook object; pass a course name and instructor name
   int day,year,month;
   cout<<"write day:"; cin>>day;
   cout<<"write month:"; cin>>month;
   cout<<"write year:"; cin>>year;             //input

   Date Date(day,month,year);
   Date.displayDate();

} // end main
