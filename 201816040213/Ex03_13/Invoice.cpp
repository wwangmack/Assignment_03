// Invoice class definition.
#include <iostream>
#include "Invoice.h" // include definition of class Invoice
using namespace std;

Invoice::Invoice(string number, string describe, int sold, int price)
{
    // initializes part number, part describe, part sold and part price
    setPartNumber(number);
    setPartDescribe(describe);
    setPartSold(sold);
    setPartPrice(price);
} // end Invoice constructor

//function to set the part number
void Invoice::setPartNumber(string number)
{
    partNumber = number;
} // end function setPartNumber

//function to get the part number
string Invoice::getPartNumber() const
{
    return partNumber;
} // end function getPartNumber

//function to set the part describe
void Invoice::setPartDescribe(string describe)
{
    partDescribe = describe;
} // end function setPartDescribe

//function to get the part describe
string Invoice::getPartDescribe() const
{
    return partDescribe;
} // end function getPartDescribe

//function to set the part sold
void Invoice::setPartSold(int sold)
{
    if(sold<0)
        partSold = 0;
    else
        partSold = sold;
} // end function setPartSold

//function to get the part sold
int Invoice::getPartSold() const
{
    return partSold;
} // end function getPartSold

//function to set the part price
void Invoice::setPartPrice(int price)
{
    if(price<0)
        partPrice = 0;
    else
        partPrice = price;
} // end function setPartPrice

//function to get the part price
int Invoice::getPartPrice() const
{
    return partPrice;
} // end function getPartPrice

//function to get the invoice amount
int Invoice::getInvoiceAmount() const
{
    int Amount=partSold*partPrice;
    return Amount;
} // end function getInvoiceAmount
