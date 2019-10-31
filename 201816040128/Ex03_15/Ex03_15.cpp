#include <iostream>
#include "Date.h"
#include<string>
using namespace std;


int main()
{
    int month, day, year;
    cout<<"please enter month:   ";
    cin>>month;
    cout<<"please enter day:   ";
    cin>>day;
    cout<<"please enter year:   ";
    cin>>year;

    Date date(month,day,year);
    date.displayDate();
    return 0;
}
