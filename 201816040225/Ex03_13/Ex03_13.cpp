// Lab 1: InvoiceTest.cpp
// Create and manipulate Invoice objects.
#include <iostream>
using namespace std;

// include definition of class Invoice.h
#include "Invoice.h"

// function main begins program execution
int main()
{
   Invoice toy(01,"play",30,25);//class specific content
cout<<toy.getNumber()<<" "<<toy.getDescribe()<<" "<<toy.getAmount()<<" "<<toy.getPrice()<<endl;//attain the content
toy.getInvoiceAmount();//calculate
cout<<"the total amount is: \n"<<endl;
cout<<toy.getNumber()<<" "<<toy.getDescribe()<<" "<<toy.getAmount()<<" "<<toy.getPrice()<<endl;//final matter


} // end main
