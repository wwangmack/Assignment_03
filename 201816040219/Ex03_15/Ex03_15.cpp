#include <iostream>
using namespace std;

#include "Date.h" // // include definition of class Date

// function main begins program execution
int main()
{
      /* Create three Date objects and assign them to Date variables. */
    Date Date1(2019,10,31);
    Date Date2(2019,13,11);
    cout<<"Print the first  test date:  ";
    Date1.displayDate();
    cout<<"Print the second test date:  ";
    Date2.displayDate();
} // end main

