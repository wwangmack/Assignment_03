#include <iostream>
using namespace std;

#include "Invoice.h"

Invoice::Invoice( string Number, string Description, int Sell, int Price)
{
    setNumber( Number );
    setDescription( Description );
    setSell( Sell );
    setPrice( Price );
}
void Invoice::setNumber( string Number )
{
    number = Number;
}
void Invoice::setDescription( string Description )
{
    description = Description;
}
void Invoice::setSell( int Sell )
{
    if ( Sell < 0 )
    {
        Sell = 0;
    }
    sell = Sell;
}
void Invoice::setPrice( int Price )
{
    if ( Price < 0 )
    {
        Price = 0;
    }
    price = Price;
}
string Invoice::getNumber()
{
    return number;
}
string Invoice::getDescription()
{
    return description;
}
int Invoice::getSell()
{
    return sell;
}
int Invoice::getPrice()
{
    return price;
}
void Invoice::display()
{
    cout << getNumber()<<" " << getDescription() <<" "<< getSell() <<" "<< getPrice() <<" "<< endl;
}
int Invoice::getInvoiceAmount()
{
    money = sell * price;
    return money;
}



