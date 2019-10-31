#include <iostream>
using namespace std;

#include "Invoice.h"

int main()
{
    Invoice invoice("middle","book",20,30);   //Create  a Invoice object and assign them to variables.
    cout << "The invoice amount is: " << invoice.getInvoiceAmount() << endl;
}
