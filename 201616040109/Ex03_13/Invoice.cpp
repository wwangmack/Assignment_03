// Exercise 3.13 Solution: Invoice.cpp
// Member-function definitions for class Invoice
#include "Invoice.h"// include definition of class Invoice

Invoice::Invoice(string number,string description,int quantity,int price)
{
    setPartNumber(number);
    setPartDescription(description);
    setPartQuantity(quantity);
    setPartPrice(price);
}
void Invoice::setPartNumber(string number)
{
    partNumber=number;
}
string Invoice::getPartNumber()
{
    return partNumber;
}
void Invoice::setPartDescription(string description)
{
    partDescription=description;
}
string Invoice::getPartDescription()
{
    return partDescription;
}
void Invoice::setPartQuantity(int quantity)
{
    partQuantity=quantity;
}
int Invoice::getPartQuantity()
{
    return partQuantity;
}
void Invoice::setPartPrice(int price)
{
    if(price<0)
    {
        partPrice=0;
    }
    else
    {
        partPrice=price;
    }
}
int Invoice::getPartPrice()
{
    return partPrice;
}
int Invoice::getInvoiceAmount()
{
    return (getPartQuantity()*getPartPrice());
}
