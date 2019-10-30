#include <iostream>
using namespace std;

#include "Invoice.h" // include definition of class Invoice

// function main begins program execution
int main()
{
    Invoice invoice1("A001" , "Erjiguan" , 20 , 5);

    cout << "Invoice Informations as follows:" << endl;
    invoice1.displayMessage();
    invoice1.getInvoiceAmount();

    cout << "\nIf change the salenumber to -20.\n" << endl;

    Invoice invoice2("A001" , "Erjiguan" , -20 , 5);

    cout << "Invoice Informations as follows:" << endl;
    invoice2.displayMessage();
    invoice2.getInvoiceAmount();

} // end main
