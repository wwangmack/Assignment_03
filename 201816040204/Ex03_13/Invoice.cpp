// Exercise 3.13 Solution: Invoice.cpp
#include <iostream>
#include<string>
#include "Invoice.h"
using namespace std;

Invoice::Invoice( string element, string part, int goods, int item)
{
    setElementNumber(element);
    setPartDescription(part);
    setGoodsSold(goods);
    setItemPricing(item);
}
void Invoice::setElementNumber( string element)
{
    elementNumber = element;
}
string Invoice::getElementNumber()
{
    return elementNumber;
}
void Invoice::setPartDescription(string part)
{
    partDescription = part;
}
string Invoice::getPartDescription()
{
    return partDescription;
}
void Invoice::setGoodsSold(int goods)
{
    if( goods < 0 )
    {
        goods = 0;
    }
    else

    {
          goodsSold = goods;
    }
}
int Invoice::getGoodsSold()
{
    return goodsSold;
}
void Invoice::setItemPricing(int item)
{
    if( item < 0)
    {
        item = 0;
    }
    else
    {
        itemPricing = item;
    }
}
int Invoice::getItemPricing()
{
    return itemPricing;
}
int Invoice::getInvoiceAmount()
{
    return (getGoodsSold()*getItemPricing());
}
