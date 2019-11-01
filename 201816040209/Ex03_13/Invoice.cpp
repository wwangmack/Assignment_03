
#include <iostream>
#include <string>
#include "Invoice.h"

using namespace std;


// constructor initializes
Invoice::Invoice(string number,string description,int numbers,int price)
{

    setInvoicePartNumber(number); // initializes InvoicePartNumber
    setInvoiceDescription(description); // initializes InvoiceDescription
    setInvoiceNumber(numbers); // initializes InvoiceNumber
    setInvoicePrice(price); // initializes InvoicePrice
}

//set functions
void Invoice::setInvoicePartNumber(string number)
{
    invoicepartnumber = number;
}
void Invoice::setInvoiceDescription(string description)
{
    invoicedescription = description;
}
void Invoice::setInvoiceNumber(int numbers)
{
    if(numbers > 0)
        invoicenumber = numbers;
    else
    {
        cout<<"The number must be greater than 0\n"<<"Now the number is initialized to 0"<<endl;
        invoicenumber = 0;
    }
}
void Invoice::setInvoicePrice(int price)
{
    if(price > 0)
        invoiceprice = price;
    else
    {
        cout<<"The price must be greater than 0\n"<<"Now the price is initialized to 0"<<endl;
        invoiceprice = 0;
    }
}

//get functions
string Invoice::getInvoicePartNumber()
{
    return invoicepartnumber;
}
string Invoice::getInvoiceDescription()
{
    return invoicedescription;
}

int Invoice::getInvoiceNumber()
{
    return invoicenumber;
}
int Invoice::getInvoicePrice()
{
    return invoiceprice;
}

int Invoice::getInvoiceAmount()
{
    return invoiceprice * invoicenumber;
}

