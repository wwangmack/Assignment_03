
#include <iostream>
#include "Invoice.h"
#include <string>

using namespace std;

int main()
{
    Invoice accent;
    int salesVolum;
    int UnitPrice;
    //Part_description
    accent.setPart_description("This is a screw");
    //Part_Number
    accent.setPart_Number("1");
    //Sales_volume
    accent.setSales_volume(70);
    //Unit_price
    accent.setUnit_price(10);
    accent.displayPart();
    cout << endl;
    cout<<"Total price(InvoiceAmount):"<<accent.getInvoiceAmount();
    cout << endl;
    //Enter the Sales_volume that needs to be changed
    cout<<"Please enter your changes(Sales_volume):";
    cin >> salesVolum;
    accent.setSales_volume(salesVolum);
    cout<<endl;
    //Enter the Unit_price that needs to be changed
    cout<<"Please enter your changes(Unit_price):";
    cin >> UnitPrice;
    accent.setUnit_price(UnitPrice);
    cout<<endl;

    accent.displayPart();
    cout << endl;
    cout<<"Total price(InvoiceAmount):"<<accent.getInvoiceAmount();
    return 0;
}
