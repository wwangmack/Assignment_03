#include <iostream>
using namespace std;

#include "Invoice.h" // Invoice class definition
Invoice::Invoice(string partnumber,string partdescription,int salesoffer,int unitprice)//Define the constructor.
{
    setPartNumber(partnumber);
    setPartDescription(partdescription);
    setSalesOffer(salesoffer);//Assign each parameter value to the appropriate data member
    setUnitPrice(unitprice);
}
void Invoice::setPartNumber(string number)
{
    partNumber=number;
}
// function to set the PartNumber data member.
string Invoice::getPartNumber()
{
    return partNumber;
}
// function to get the PartNumber data member.
void Invoice::setPartDescription(string description)
{
    partDescription=description;
}
// function to set the PartDescription data member.
string Invoice::getPartDescription()
{
    return partDescription;
}
//function to get the PartDescription data member.
void Invoice::setSalesOffer(int offer)
{
    if(offer<0)
    {
       offer=0;
    }
    else{
        salesOffer=offer;
    }//validates the offer to ensure that it is not negative.
}

int Invoice::getSalesOffer()
{
    return salesOffer;
}//function to get the SalesOffer data member.

void Invoice::setUnitPrice(int price)
{
    if(price<0)
    {
       price=0;
    }
    else{
        unitPrice=price;
    }//validates the price to ensure that it is not negative.
}

int Invoice::getUnitPrice()
{
    return unitPrice;
}//function to get the UnitPrice data member.

int Invoice::InvoiceAmount()
{
    int amount;
    if(salesOffer!=0&&unitPrice!=0)
    {
        amount=salesOffer*unitPrice;
    }
    return amount;
}
// function to get the getInvoiceAmount to calculate the offer*price
