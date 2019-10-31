#include <iostream>
#include "Date.h"
using namespace std;
int main()
{
    Date date1(10,11,2000); //Create and initialize date1
    cout << "The month of date1 is \n"<<date1.getMonth()<<endl;
    date1.displayDate();//output date1
    Date date2(24,38,2000); //Create and initialize date2
    cout << "The month of date2 is "<<date2.getMonth()<<endl;
    date2.displayDate();//output date2
    return 0;
}
