#include <iostream>
using namespace std;

#include "Invoice.h"

Invoice::Invoice(string number , string description , int salenumber , int price)
{
    setNumber( number );
    setDescription( description );
    setSaleNumber( salenumber );
    setPrice( price );
}

void Invoice::setNumber( string number )//function to set number
{
    Number = number;
}

string Invoice::getNumber ()//function to get number
{
    return Number;
}

void Invoice::setDescription( string description )//function to set description
{
    Description = description;
}

string Invoice::getDescription ()//function to get description
{
    return Description;
}

void Invoice::setSaleNumber( int salenumber )//function to set sale number
{
    SaleNumber = salenumber;
}

int Invoice::getSaleNumber ()//function to get sale number
{
    if(SaleNumber > 0)
    return SaleNumber;
    if(SaleNumber <= 0)
        return 0;
}

void Invoice::setPrice( int price )//function to set price
{
    Price = price;
}

int Invoice::getPrice ()//function to get price
{
    if(Price > 0)
    return Price;
    if(Price <= 0)
        return 0;
}

void Invoice::getInvoiceAmount()//function to get invoice amount
{
    cout << "\n* * *The InvoiceAmount is: " << getSaleNumber()*getPrice() << endl;
}

void Invoice::displayMessage()//function to display message
{
    cout << "The Invoice's ID: " << getNumber() << endl;
    cout << "The Invoice's Description: " << getDescription() << endl;
    cout << "The Invoice's SaleNumber: " << getSaleNumber() << endl;
    cout << "The Invoice's Price: " << getPrice() << endl;

}
