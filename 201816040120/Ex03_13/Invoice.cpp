#include <iostream>
using namespace std;

#include "Invoice.h"
Invoice :: Invoice( string partNumber, string partDescription, int partSales, int partPrice)
{
    setdeclareInvoice(partNumber, partDescription, partSales, partPrice);
} // inititalize Invoice
void Invoice ::setpartNumber( string number)
{
    partNumber = number;
}
string Invoice ::getpartNumber( )
{
    return partNumber;
}
void Invoice ::setpartDescription( string description)
{
    partDescription = description;
}
string Invoice ::getpartDescription ()
{
    return partDescription;
}
void Invoice ::setpartSales ( int sales)
{
    if (sales < 0 )
        partSales = 0;
    else
        partSales = sales;
}
int Invoice ::getpartSales ()
{

    return partSales;
}
void Invoice ::setpartPrice ( int price)
{
    if(price < 0)
        partPrice = 0;
    else
        partPrice = price;
}
int Invoice :: getpartPrice ()
{
    return partPrice;
}
void  Invoice:: setdeclareInvoice ( string partNumber, string partDescription, int partSales, int partPrice)
{
    setpartNumber(partNumber);
    setpartDescription(partDescription);
    setpartSales(partSales);
    setpartPrice(partPrice);
}//end
int Invoice :: getInvoiceAmount( int partSales, int partPrice)
{
    return partSales * partPrice;
}
