#include <iostream>
#include<string>
#include "Date.h"//include definition of class Date
using namespace std;

int main()
{
    int mon,da,yea;
    da=27;
    yea=2019;
    cout<<"Please enter the month"<<endl;
    cin>>mon;
    Date ddate(mon,da,yea);//create an object and initial value
    ddate.setMonth(mon);
    ddate.setDay(da);
    ddate.setYear(yea);

    ddate.displayDate();
}
