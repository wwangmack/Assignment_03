#include <iostream>
using namespace std;

// include definition of class Invoice from Invoice.h
#include "Invoice.h"
Invoice::Invoice(string number,string description,int quantity,int price)
{
    setPartNumber( number ); // initializes partNumber
    setPartDescription( description );
    setSoldQuantity( quantity );
    setCommodityPrice( price );
} // end Invoice constructor
// function to set the part number
void Invoice::setPartNumber( string number )
{
   partNumber = number; // store the part number
} // end function setPartNumber

// function to retrieve the part number
string Invoice::getPartNumber()
{
   return partNumber;
} // end function getPartNumber
void Invoice::setPartDescription( string description )
{
   partDescription = description; // store the part description
}
string Invoice::getPartDescription()
{
   return partDescription;
}
void Invoice::setSoldQuantity( int quantity )
{
   soldQuantity = quantity;
}
int Invoice::getSoldQuantity()
{
   return soldQuantity;
}
void Invoice::setCommodityPrice( int price )
{
   commodityPrice = price;
}
int Invoice::getCommodityPrice()
{
   return commodityPrice;
}
int Invoice::getInvoiceAmount( )
{
   if(soldQuantity<0||commodityPrice<0)
        return 0;

   else
        return soldQuantity*commodityPrice;


} // end function getInvoiceAmount
