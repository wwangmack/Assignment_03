
// Employee class member-function definitions.
#include <iostream>
using namespace std;

#include "Invoice.h"

Invoice::Invoice(string name,string dcs,int item, int pric)
{
     setpartNumber(name);
     setpartdescription(dcs);
     setpurchase(item) ;
     setprice(pric) ;
}


void Invoice::setpartNumber(string name)
{
    partNumber=name;
}
void Invoice::setpartdescription(string dcs)
{
    partdescription=dcs;
}
void Invoice::setpurchase(int item)
{
   purchase=item;
}
void Invoice::setprice(int pric)
{
   price=pric;
}
string Invoice::getpartNumber() const
{
    return partNumber;
}
string Invoice::getpartdescription() const
{
    return partdescription;
}
int Invoice::getpurchase() const
{
    return  purchase;
}
int Invoice::getprice() const
{
    return price;
}
int Invoice::getInvoiceAmount() const
{
    int a, b=0 ;
    a=purchase*price ;
    if (a>=0)
    {
        return a ;
    }
    else
    {
        return b ;
    }
}
void Invoice::diaplay()
{
    cout<<getpartNumber()<<" "<<getpartdescription()<<" "<<getpurchase()<<" "<<getprice()<<" "<<getInvoiceAmount()  ;
}
