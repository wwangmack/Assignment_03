#include <iostream>
using namespace std;

#include "Date.h" // include definition of class date

// function main begins program execution
int main()
{
    int Month1,Month2;
    int Day1,Day2;
    int Year1,Year2;


    cout << "The date is: " << endl;
    cin >> Month1 >> Day1 >> Year1;

    cout << "\nThe date you just now wrote is: " << endl;
    Date date1( Month1 , Day1 , Year1);


    date1.displayDate();
    /* Output the month, day and year for each date. */


    cout << "\nif input the month with wrong month: " << endl;

    cout << "The date is: " << endl;
    cin >> Month2 >> Day2 >> Year2;

    cout << "\nThe date you just now wrote is: " << endl;
    Date date2( Month2 , Day2 , Year2);


    date2.displayDate();
    /* Output the month, day and year for each date again. */
} // end main
