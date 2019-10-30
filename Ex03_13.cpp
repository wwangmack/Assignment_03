// Lab 1: Ex03_13.cpp
// Create and manipulate Invoice objects.
#include <iostream>
using namespace std;

// include definition of class Invoice from Invoice.h
#include "Invoice.h"

// function main begins program execution
int main()
{
   Invoice invoice("01","the useful thing",1000,10);// create Invoice object
   cout<<"the number: "<<invoice.getNumber()<<endl;//output the number
   cout<<"the description: "<<invoice.getDescription()<<endl;//output the description
   cout<<"the amount: "<<invoice.getAmount()<<endl;//output the amount
   cout<<"the price: "<<invoice.getPrice()<<endl;//output the price

   cout<<"the money:"<<invoice.getInvoiceAmount()<<endl;//output the money
}



