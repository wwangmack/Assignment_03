#include <iostream>
#include "Date.h"

using namespace std;

int main()
{
    //define year, month, day
    int year, month, day;
    //input year, month, day
    cin >> year >> month >> day;
    Date date(year, month, day);
    cout << "output year/month/day：" ;
    date.displayDate();
}
