// Lab 3: Employee.cpp
// Employee class member-function definitions.
#include <iostream>
using namespace std;

#include "Invoice.h" // Employee class definition
Invoice::Invoice(string part,string discribe,int sellnumber,int money)
{
    setpart(part);
    setdiscribe(discribe);
    setsellnumber(sellnumber);
    setmoney(money);
}
/* Define the constructor. Assign each parameter value to the appropriate data
   member. Write code that validates the value of salary to ensure that it is
   not negative. */

/* Define a set function for the first name data member. */
void Invoice::setpart(string part)
{
    newpart=part;
}//end function setEmployeename
/* Define a get function for the first name data member. */
string Invoice::getpart()
{
    return newpart;
}//end function getpart
/* Define a set function for the last name data member. */
void Invoice::setdiscribe(string discribe)
{
    newdiscribe=discribe;// store the Employee ming
/* Define a get function for the last name data member. */

}
string Invoice::getdiscribe()
{
    return newdiscribe;
}//end function getEmployeeming

void Invoice::setsellnumber(int sellnumber)
{
    newsellnumber=sellnumber;
}
int Invoice::getsellnumber()
{
    return newsellnumber;
}

void Invoice::setmoney(int money)
{
    newmoney=money;
}

int Invoice::getmoney()
{
    return newmoney;
}
void Invoice::setchange(int number,int money1)
{
    totalmoney=number*money1;
}
int Invoice::getchange()
{
    return totalmoney;
}


