// Assignment02 Invoice.cpp
// Invoice class member-function definitions.

#include <iostream>
#include <string>

#include "Invoice.h"

using namespace std;

Invoice::Invoice(string TPN,string TPD,int TS,int TUP)
{
    setPartNumber(TPN);
    setPartDescription(TPD);
    setSales(TS);
    setUnitPrice(TUP);
}
void Invoice::setPartNumber(string PN)
{
    PartNumber=PN;
}
string Invoice::getPartNumber()const
{
    return PartNumber;
}
void Invoice::setPartDescription(string PD)
{
    PartDescription=PD;
}
string Invoice::getPartDescription()const
{
    return PartDescription;
}
void Invoice::setSales(int S)
{
    if(S>0)
        Sales=S;
    else
        Sales=0;
}
int Invoice::getSales()const
{
    return Sales;
}
void Invoice::setUnitPrice(int UP)
{
    if(UP>0)
        UnitPrice=UP;
    else
        UnitPrice=0;
}
int Invoice::getUnitPrice()const
{
    return UnitPrice;
}
int Invoice::getInvoiceAmount()const
{
    return getSales()*getUnitPrice();
}
