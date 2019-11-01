// Lab 3: Employee.cpp
// Employee class member-function definitions.
#include <iostream>
using namespace std;

#include "Invoice.h" // Employee class definition
Invoice::Invoice(string a, string b, int c, int d)//创建含四个数据成员的对象，并进行初始化
{
   seta(a);
   setb(b);
   setc(c);
   setd(d);
}
void Invoice::seta(string a1)//对函数赋值
{
    a=a1;
}
string Invoice::geta()
{
    return a;
}
void Invoice::setb(string b1)
{
    b=b1;
}
string Invoice::getb()
{
    return b;
}
void Invoice::setc(int c1)
{
    if (c1<0)
    {
        c1=0;
    }
    c=c1;
}
int Invoice::getc()
{
    return c;
}
void Invoice::setd(int d1)
{
    if (d1<0)
    {
        d1=0;
    }
    d=d1;
}
int Invoice::getd()
{
    return d;
}
int Invoice::getInvoice()
{
    return c*d;
}
/* Define the constructor. Assign each parameter value to the appropriate data
   member. Write code that validates the value of salary to ensure that it is
   not negative. */

/* Define a set function for the first name data member. */

/* Define a get function for the first name data member. */

/* Define a set function for the last name data member. */

/* Define a get function for the last name data member. */

/* Define a set function for the monthly salary data member. Write code
   that validates the salary to ensure that it is not negative. */

/* Define a get function for the monthly salary data member. */
