#include <iostream>
using namespace std;

// include definition of class Date from Date.h
#include "Date.h"

// function main begins program execution
int main()
{
    Date Date1(2019,11,1);
    Date Date2(2000,11,28);
    cout<<"Year :"<<Date1.getYear()<<"  Month :"<<Date1.getMonth()<<"  Day :"<<Date1.getDay()<<endl;
    Date1.displayDate();
    cout<<endl;
    cout<<"Year :"<<Date2.getYear()<<"  Month :"<<Date2.getMonth()<<"  Day :"<<Date2.getDay()<<endl;
    Date1.displayDate();
} // end main
