// Assignment02 Ex03_15.cpp
// Create and manipulate two Date objects.

#include <iostream>

#include "Date.h" // include definition of class Date

using namespace std;

// function main begins program execution
int main()
{
    Date Date1;
    Date Date2(2019,11,11);
    /* Create two Date objects */

    Date1.displayDate();
    cout << "\n" << endl;
    Date2.displayDate();
    /* Output */

    return 0;
}// end main
