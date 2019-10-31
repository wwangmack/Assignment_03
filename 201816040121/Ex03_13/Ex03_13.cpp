//Ex03_13:InvoiceTest.cpp
#include <iostream>
#include "iomanip".h"
using namespace std;

#include "Invoice.h"

//fuction main begins progrom execution
int main()
{
    /*Creative a Invoice object*/
    Invoice invoice("A2220", "iPhone 11 Pro Max", 74000, 12699);

    //display message of the object
    cout << "invoice :\n" << "number: " << setw (11) << invoice.getNumber() << "\n" << "Description:  "
         << invoice.getDescription() << "\n" << "Sales Volume: " << invoice.getSalesVolume() << "\n"
         << "Price: " << setw(12) << invoice.getPrice() << "\n" << "Amount: " << setw(15) << invoice.getInvoiceAmount() << endl;

    return 0;
}//end main
