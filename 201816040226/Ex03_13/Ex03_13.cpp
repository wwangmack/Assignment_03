#include <iostream>
using namespace std;

// include definition of class Invoice from Invoice.h
#include "Invoice.h"
int main()
{
    Invoice invoice("n01","e",1,1);
   // cout<<"PartNumber: "<<number<<"PartDescription: "<<description<<"SoldQuantity: "<<quantity<<"CommodityPrice: "<<price<<"InvoiceAmount: "<<amount<<endl;
    string number,description;
    int quantity,price;

    cout<<"PartNumber: ";getline(cin,number);cout<<endl;cout<<"PartDescription: ";getline(cin,description);cout<<endl;
    cout<<"SoldQuantity: ";cin>>quantity;cout<<endl;cout<<"CommodityPrice: ";cin>>price;cout<<endl;
    invoice.setPartNumber(number);
    invoice.setPartDescription(description);
    invoice.setSoldQuantity(quantity);
    invoice.setCommodityPrice(price);
    cout<<"InvoiceAmount: "<<invoice.getInvoiceAmount();cout<<endl;

}
