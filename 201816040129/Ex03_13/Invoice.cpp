// Lab 1: Invoice.cpp
// Member-function definitions for class Invoice.
#include <iostream>
using namespace std;

#include "Invoice.h"

// constructor initializes Number、Description、Amount and Price
Invoice::Invoice(string number,string description,int amount,int price)
{
   setNumber(number);// initializes Number
   setDescription(description);// initializes Description
   setAmount(amount);// initializes Amount
   setPrice(price);// initializes Price
}

// function to set the number
void Invoice::setNumber( string number1 )
{
    Number=number1;
}
// function to retrieve the number
string Invoice::getNumber()
{
   return Number;//return the data of the Number
}
// function to set the description
void Invoice::setDescription( string description1 )
{
    Description=description1;
}
// function to retrieve the description
string Invoice::getDescription()
{
   return Description;//return the data of the Description
}
// function to set the amount
void Invoice::setAmount( int amount1 )
{
    if(amount1<0)//the data is negative
        Amount=0;
    else
        Amount=amount1;
}
// function to retrieve the amount
int Invoice::getAmount()
{
   return Amount;//return the data of Amount
}
// function to set the price
void Invoice::setPrice( int price1 )
{
    if(price1<0)//the data is negative
        Price=0;
    Price=price1;
}
// function to retrieve the price
int Invoice::getPrice()
{
   return Price;//return the data of the Price
}

int Invoice::getInvoiceAmount()
{
    money=getAmount()*getPrice();//the money is equal to the product of sales quantity and unit price
    return money;//return the data of the money
}



