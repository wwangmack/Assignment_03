#include <iostream>
#include <string>
#include "Invoice.h"

using namespace std;

Invoice::Invoice()
{

}

//constructor initializes Sales_volume,Unit_price,Part_Number,Part_description
Invoice::Invoice(int a,int b, string c, string d)
{
    setPart_description(d);
    setPart_Number(c);
    setSales_volume(a);
    setUnit_price(b);
}

//Multiply the unit by the unit price
int Invoice::getInvoiceAmount()
{
    return Sales_volume*Unit_price;
}

// function to retrieve the getPart_Number
string Invoice::getPart_Number()
{
    return Part_Number;
}

// function to retrieve the getPart_description
string Invoice::getPart_description()
{
    return Part_description;
}

// function to retrieve the getSales_volume
int Invoice::getSales_volume()
{
    return Sales_volume;
}

// function to retrieve the getUnit_price
int Invoice::getUnit_price()
{
    return Unit_price;
}

// function to set the setPart_Number
void Invoice::setPart_Number(string part)
{
    Part_Number=part;
}

// function to set the setPart_description
void Invoice::setPart_description(string part)
{
    Part_description=part;
}

// function to set the Sales_volume
void Invoice::setSales_volume(int sales)
{
    if(sales<0)
    {
        Sales_volume=0;
    }
    else
    {
        Sales_volume=sales;
    }

}

// function to set the setUnit_price
void Invoice::setUnit_price(int sales)
{
    if(sales<0)
    {
        Unit_price=0;
    }
    else
    {
        Unit_price=sales;
    }

}

//display part
void Invoice::displayPart()
{
    cout<<"Sales_volume:"<<getSales_volume()<<endl;
    cout<<"Unit_price:" <<getUnit_price()<<endl;
    cout<<"Part_Number:"<<getPart_Number()<<endl;
    cout<<"Part_description:"<<getPart_description()<<endl;
}
