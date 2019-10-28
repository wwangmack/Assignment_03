#include <iostream>
#include"Invoice.h"
using namespace std;

int main()
{
    Invoice invoice("apple", "fruit", 10, 10);

    string name, description;
    int price, sold;

    cout << "Initial invoice name is: " << invoice.getInvoiceName() << endl;
    cout << "Initial invoice description is: " << invoice.getInvoiceDescription() << endl;
    cout << "Initial invoice sold is: " << invoice.getInvoiceSold() << endl;
    cout << "Initial invoice price is: " << invoice.getInvoicePrice() << endl;
    cout << "Initial invoice amount is: " << invoice.getInvoiceAmount() << endl << endl;
    cout << "Please enter the new sold: ";
    cin >> sold;

    cout << "Please enter the new price: ";
    cin >> price;

    invoice.setInvoicePrice(price);
    invoice.setInvoiceSold(sold);

    cout << endl << "New invoice sold is: " << invoice.getInvoiceSold() << endl;
    cout << "New invoice price is: " << invoice.getInvoicePrice() << endl;
    cout <<"New invoice amount is: " << invoice.getInvoiceAmount() << endl;

    return 0;
}
