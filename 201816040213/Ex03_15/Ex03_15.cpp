#include <iostream>
#include "Date.h" // include definition of class Date
using namespace std;

int main()
{
    Date date1(10,28,2019); //Create and initialize date1
    cout << "The month of date1 is "<<date1.getMonth()<<endl;
    date1.displayDate();//output date1

    Date date2(13,28,2019); //Create and initialize date2
    cout << "\nThe month of date2 is "<<date2.getMonth()<<endl;
    date2.displayDate();//output date2
    return 0;
}
