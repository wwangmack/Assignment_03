#include <iostream>
#include "Invoice.h"

using namespace std;

//constructor initializes invoice with string and int as argument
Invoice::Invoice(string Partstring,string description,int sale,int Partint)
:PartNumber(Partstring),PartDescription(description),CommoditySales(sale),CommodityPrice(Partint)
{
    //empty body
}//end this function

//function to set the number
void Invoice::setPartNumber(string Number)
{
    PartNumber = Number;
}//end this function

//function to set the description
void Invoice::setPartDescription(string Description)
{
    PartDescription = Description;
}//end this function

//function to set the sales
void Invoice::setCommoditySales(int Sales)
{
    CommoditySales = Sales;
}//end this function

//function to set the price
void Invoice::setCommodityPrice(int Price)
{
    CommodityPrice = Price;
}//end this function

//function to set the amount
void Invoice::setInvoiceAmount(int Sales,int Price)
{
    if (Sales < 0 || Price < 0)
        InvoiceAmount = 0;
    else
        InvoiceAmount = Sales * Price;
}//end this function

//function to get the number
string Invoice::getPartNumber() const
{
    return PartNumber;
}//end this function

//function to get the description
string Invoice::getPartDescription() const
{
    return PartDescription;
}//end this function

//function to get the sales
int Invoice::getCommoditySales() const
{
    return CommoditySales;
}//end this function

//function to get the price
int Invoice::getCommodityPrice() const
{
    return CommodityPrice;
}//end this function

//function to get the amount
int Invoice::getInvoiceAmount() const
{
    return InvoiceAmount;
}//end this function
