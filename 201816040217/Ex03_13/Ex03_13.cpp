#include <iostream>
#include "invoice.h"
using namespace std;

int main()
{
    Invoice invoice_1("001","health",5,50),invoice_2("002","no",-2,-5);
    cout<<"Number: "<<invoice_1.getNumber()<<endl;
    cout<<"Expression: "<<invoice_1.getExpression()<<endl;
    cout<<"Sell: "<<invoice_1.getSell()<<endl;
    cout<<"Price: "<<invoice_1.getPrice()<<endl;
    cout<<"InvoiceAmount: "<<invoice_1.getInvoiceAmount()<<endl<<endl;
    cout<<"Number: "<<invoice_2.getNumber()<<endl;
    cout<<"Expression: "<<invoice_2.getExpression()<<endl;
    cout<<"Sell: "<<invoice_2.getSell()<<endl;
    cout<<"Price: "<<invoice_2.getPrice()<<endl;
    cout<<"InvoiceAmount: "<<invoice_2.getInvoiceAmount()<<endl;
    return 0;
}
