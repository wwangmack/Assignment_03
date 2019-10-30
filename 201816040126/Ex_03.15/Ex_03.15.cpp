#include <iostream>
using namespace std;

#include "Date.h" // include definition of class date

// function main begins program execution
int main()
{
    Date date1( 04 , 03 , 2000);

    cout << "The date is: " << endl;
    date1.displayDate();
    /* Output the month, day and year for each date. */


    cout << "\nif input the month with wrong number,\nthe date will be: " << endl;

    Date date2( 13 , 03 , 2000);

    date2.displayDate();
   /* Output the month, day and year for each date again. */
} // end main


