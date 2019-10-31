
#include <iostream>
#include <string>
#include <iomanip>
#include "Invoice.h"

using namespace std;

int main()
{
     Invoice invoice("100", "phone", 10, 20); //create an invoice use the constructor
                                              // and initialize the date member

     cout << "\nInvoice   " << endl // show invoice's message
          << setw(8) << "Id : " << setw(5) << invoice.getId() << endl
          << setw(8) << "Des : " << setw(5) << invoice.getDescription() << endl
          << setw(8) << "Count : " << setw(5) << invoice.getCount() << endl
          << setw(8) << "Price : " << setw(5) << invoice.getPrice() << endl
          << setw(8) << "All : " << setw(5) << invoice.getInvoiceAmount() << endl
          << endl;

     // try to change invoice's count and price to negtive
     /*this might show two errors when call them*/
     invoice.setCount(-1);
     invoice.setPrice(-22);

     // try to change invoice's count and price normally
     invoice.setCount(100);
     invoice.setPrice(5);

     // show invoice's message
     cout << "\nInvoice   " << endl
          << setw(8) << "Id : " << setw(5) << invoice.getId() << endl
          << setw(8) << "Des : " << setw(5) << invoice.getDescription() << endl
          << setw(8) << "Count : " << setw(5) << invoice.getCount() << endl
          << setw(8) << "Price : " << setw(5) << invoice.getPrice() << endl
          << setw(8) << "All : " << setw(5) << invoice.getInvoiceAmount() << endl
          << endl;
}