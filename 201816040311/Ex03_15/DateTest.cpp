#include <iostream>
#include "Date.h"

using namespace std;

int main()
{
    //initialization data
    Date date(2019,10,27);
    int months;
    cout << "current time:";
    date.displayDate();
    cout << endl;
    //Enter the month that needs to be changed,and it over 12
    cout <<"Please enter your changes(month):";
    cin  >> months;
    date.setMonth(months);
    cout <<endl;
    cout << "current time:";
    date.displayDate();
    cout << endl;
    return 0;
}
