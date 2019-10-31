#include <iostream>
#include<string>
#include "Invoice.h"//include definition of class Invoice
using namespace std;

int main()
{

    string name,description;
    int sale,account;

    cout<<"Please enter the part number : ";
    getline(cin,name);
    cout<<"Please enter a part description : ";
    getline(cin,description);
    cout<<"Please enter the amount of merchandise sold : ";
    cin>>sale;
    cout<<"Please enter the unit price of the product : ";
    cin>>account;

    Invoice invoice1(name,description,sale,account);//create an object and initial value
    invoice1.setPartNumber(name);
    invoice1.setPartDescription(description);
    invoice1.setCommoditySales(sale);
    invoice1.setCommodityPrice(account);
    invoice1.setInvoiceAmount(sale,account);

    cout<<invoice1.getPartNumber()<<endl
    <<invoice1.getPartDescription()<<endl
    <<invoice1.getCommoditySales()<<endl
    <<invoice1.getCommodityPrice()<<endl;
    cout<<"The invoice amount is : "<<invoice1.getInvoiceAmount()<<endl;
}
