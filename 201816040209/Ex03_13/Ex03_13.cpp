#include <iostream>
using namespace std;
#include "Invoice.h"

int main()
{
    int price,number;
    Invoice invoice("2019","The invoice is about pandas",1,1);//initializes object

    cout<<"Please input the price of invoice"<<endl;//input the price of invoice
    cin>>price;
    invoice.setInvoicePrice(price);

    cout<<"\nPlease input the sale number of invoice"<<endl;//input the number of invoices sold
    cin>>number;
    invoice.setInvoiceNumber(number);

    cout<<"\nThe description of invoice is: "<<invoice.getInvoiceDescription()<<endl;//display messages
    cout<<"The invoice's part-number is: "<<invoice.getInvoicePartNumber()<<endl;
    cout<<"The invoice amount is: "<<invoice.getInvoiceAmount()<<endl;
}
