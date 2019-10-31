// Lab 1: Ex03_15.cpp
// Create and manipulate Date objects.
#include <iostream>
using namespace std;

// include definition of class Date from Date.h
#include "Date.h"

// function main begins program execution
int main()
{
    int year,month,day;//difinition the year,the month and the day
    cout<<"Please Input the Year: "<<" ";
    cin>>year;      //input the data of the year
    cout<<"Please Input the Month: "<<" ";
    cin>>month;     //input the data of the month
    cout<<"Please Input the Day: "<<" ";
    cin>>day;       //input the data of the day
    Date date(year,month,day); // create Date object
    cout<<"Output the date: "<<" ";
    date.displayDate();//output the date
}
