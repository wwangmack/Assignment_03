//Ex03_13:Invoice.cpp
//Invoice class member_fuction definitions.
#include <iostream>
using namespace std;
#include "Invoice.h"//Invoice class definition

//constructor number, description, sales volume and price
Invoice::Invoice(string number, string description, int salesVolume, int price)
{
    setNumber(number);
    setDescripion(description);
    setSalesVolume(salesVolume);
    setPrice(price);
}//end Invoice constructor

//fuction to set number
void Invoice::setNumber(string n)
{
    number = n;
}

//fuction retrieve number
string Invoice::getNumber()
{
    return number;
}

//fuction to set description
void Invoice::setDescripion(string d)
{
    description = d;
}

//fuction to retrieve description
string Invoice::getDescription()
{
    return description;
}

//fuction to set sales volume
void Invoice::setSalesVolume(int s)
{
    if(s < 0)
    {
        salesVolume = 0;
    }
    else
    {
        salesVolume = s;
    }
}

//fuction to retrieve sales volume
int Invoice::getSalesVolume()
{
    return salesVolume;
}

//fuction to set price
void Invoice::setPrice(int p)
{
    if(p < 0)
    {
        price = 0;
    }
    else
    {
        price = p;
    }
}

//fuction to retrieve price
int Invoice::getPrice()
{
    return price;
}
int Invoice::getInvoiceAmount()
{
    int a, b;
    a = getSalesVolume();
    b = getPrice();
    return a*b;
}
