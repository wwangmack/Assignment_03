
#include <iostream>
#include <string>
#include <iomanip>
#include "Invoice.h"

using namespace std;

int main()
{
    Invoice invoice("100", "phone", 10, 20);
    cout << "\nInvoice   " << endl
         << setw(8) << "Id : " << setw(5) << invoice.getId() << endl
         << setw(8) << "Des : " << setw(5) << invoice.getDescription() << endl
         << setw(8) << "Count : " << setw(5) << invoice.getCount() << endl
         << setw(8) << "Price : " << setw(5) << invoice.getPrice() << endl
         << setw(8) << "All : " << setw(5) << invoice.getInvoiceAmount() << endl<<endl;;
    invoice.setCount(-1);
    invoice.setPrice(-22);

    invoice.setCount(100);
    invoice.setPrice(5);
    cout << "\nInvoice   " << endl
         << setw(8) << "Id : " << setw(5) << invoice.getId() << endl
         << setw(8) << "Des : " << setw(5) << invoice.getDescription() << endl
         << setw(8) << "Count : " << setw(5) << invoice.getCount() << endl
         << setw(8) << "Price : " << setw(5) << invoice.getPrice() << endl
         << setw(8) << "All : " << setw(5) << invoice.getInvoiceAmount() << endl<<endl;

}