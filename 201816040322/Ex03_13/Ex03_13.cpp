// Assignment02 Ex03_13.cpp
// Create and manipulate two Invoice objects.

#include <iostream>

#include "Invoice.h" // include definition of class Invoice

using namespace std;

// function main begins program execution
int main()
{
    Invoice invoiceBattery1;
    Invoice invoiceBattery2("0000001","battery",56,5);
    /* Create two Invoice objects */

    cout << "The commodity number is " << invoiceBattery1.getPartNumber()
    << "\nThe commodity description is " << invoiceBattery1.getPartDescription()
    << "\nThe commodity sales is " << invoiceBattery1.getSales()
    << "\nThe commodity price is " << invoiceBattery1.getUnitPrice()
    << "\nThe commodity invoice amount is " << invoiceBattery1.getInvoiceAmount()
    << "\n\n\n" << endl;
    /* Output */

    cout << "The commodity number is " << invoiceBattery2.getPartNumber()
    << "\nThe commodity description is " << invoiceBattery2.getPartDescription()
    << "\nThe commodity sales is " << invoiceBattery2.getSales()
    << "\nThe commodity price is " << invoiceBattery2.getUnitPrice()
    << "\nThe commodity invoice amount is " << invoiceBattery2.getInvoiceAmount()
    << endl;
    /* Output */

    return 0;
}// end main
