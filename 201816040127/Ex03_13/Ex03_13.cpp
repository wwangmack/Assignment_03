#include <iostream>
using namespace std;

#include "Invoice.h" // include definition of class Employee

// function main begins program execution
int main()
{
    int amount;
    int salesOffer,unitPrice;
    Invoice invoice("23456","big",50,20);
   // Create two Employee objects and assign them to Employee variables.
    cout<<"invoice:  "<<invoice.getPartNumber()<<" "<<invoice.getPartDescription()<<" "<<invoice.getSalesOffer()<<" "<<invoice.getUnitPrice()<<endl;
    //Output the first name, last name and salary for each Employee.
    cout<<"the amount is: "<<invoice.InvoiceAmount()<<endl;

} // end main


