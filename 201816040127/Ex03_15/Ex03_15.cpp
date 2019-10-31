#include <iostream>
using namespace std;

#include "Date.h" // include definition of class Date

// function main begins program execution
int main()
{
    Date date(10,27,2019);
   // Create two Date objects and assign them to Date variables.
    cout<<"date: "<<date.getMonthNum()<<date.getDayNu()<<date.getYearNumber()<<endl;
    cout<<"\n";
    date.displayDate();
    //Output the monthNum, dayNu and yearNumber for each Date.
}


