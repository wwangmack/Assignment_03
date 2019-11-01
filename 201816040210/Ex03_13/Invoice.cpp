
#include <iostream>
using namespace std;

#include "Invoice.h"

//constructor initializes part number,part description,sell amount and unit price
Invoice::Invoice( string pn,string pd,int sa,int up )
{
    setPartNumber( pn );//initializes part number
    setPartDescription( pd );//initializes part description
    setSellAmount( sa );//initializes sell amount
    setUnitPrice( up );//initializes unit price
}//end constructor

//function to set part number
void Invoice::setPartNumber( string partN )
{
    partNumber = partN;//store the part number
}//end function

//function to get part number
string Invoice::getPartNumber()
{
    return partNumber;
}//end function

//function to set part description
void Invoice::setPartDescription( string partD )
{
    partDescription = partD;//store the part description
}//end function

//function to get part description
string Invoice::getPartDescription()
{
    return partDescription;
}//end function

//function to set sell amount
void Invoice::setSellAmount( int sellA )
{
    sellAmount = sellA;//store the sell amount
}//end function

//function to get sell amount
int Invoice::getSellAmount()
{
    return sellAmount;
}//end function

//function to set unit price
void Invoice::setUnitPrice( int unitP )
{
    if( unitP>0 )
    {
        unitPrice = unitP;//if the unit>0,store the unit price
    }
    else
        unitPrice = 0;//if the unit<0,the unit price=0
}//end function

//function to get unit price
int Invoice::getUnitPrice()
{
    return unitPrice;
}//end function

//function to get invoice amount
int Invoice::getInvoiceAmount()
{
    int t = unitPrice*sellAmount;
    if( t>0 )
    {
        return t;//if t>0,return t
    }
    else
        return 0;//if t<0,return 0
}//end function

