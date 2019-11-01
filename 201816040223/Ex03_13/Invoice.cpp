#include <iostream>
using namespace std;
#include "Invoice.h"
Invoice::Invoice(string apartname, string anumber,int asell,int aprice)
{
    setpartname(apartname);
    setnumber(anumber);
    setsell(asell);
    setprice(aprice);
}
void Invoice::setpartname(string apartname)
{
    partname=apartname;
}
string Invoice::getpartname()
{
    return partname;
}
void Invoice::setnumber(string anumber)
{
    number=anumber;
}
string Invoice::getnumber()
{
    return number;
}
void Invoice::setsell(int asell)
{
    sell=asell;
}
int Invoice::getsell()
{
    return sell;
}
void Invoice::setprice(int aprice)
{
    price=aprice;
}
int Invoice::getprice()
{
    return price;
}
int Invoice::InvoiceAmount()
{

   return price*sell;
}
