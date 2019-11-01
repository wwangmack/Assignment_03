
#include<iostream>
using namespace std;

#include "invoice.h"

Invoice::Invoice(string number, string description, int sold, int price)
{
    setPartNumber(number);
    setPartDescription(description);
    setCommoditySold(sold);
    setCommodityPrice(price);
}

void Invoice::setPartNumber(string number)
{
    PartNumber=number;
}
string Invoice::getPartNumber()
{
    return PartNumber;
}


void Invoice::setPartDescription(string description)
{
    PartDescription=description;
}
string Invoice::getPartDescription()
{
    return PartDescription;
}


void Invoice::setCommoditySold(int sold )
{
    if(sold>=0)
        CommoditySold=sold;
    else
        CommoditySold=0;
}
int Invoice::getCommoditySold()
{
    return CommoditySold;
}


void Invoice::setCommodityPrice(int price )
{
    if(price>=0)
        CommodityPrice=price;
    else
        CommodityPrice=0;
}
int Invoice::getCommodityPrice()
{
    return CommodityPrice;
}

int Invoice::getInvoiceAmount()
{
    return CommodityPrice*CommoditySold;
}
