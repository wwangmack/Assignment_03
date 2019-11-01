
#include <iostream>
using namespace std;
#include<string>

#include "Invoice.h"
int main()
{
    Invoice invoice("十五","round",20,10);
    cout<<"part name:"<<invoice.getpartname()<<endl;
     cout<<"number:"<<invoice.getnumber()<<endl;
      cout<<"sell:"<<invoice.getsell()<<endl;
     cout<<"price:"<<invoice.getprice()<<endl;
     cout<<"part name:  "<<invoice.getpartname()<< "   number:  "<<invoice.getnumber()  <<"   sell:  "<<invoice.getsell()<<"   price:  "<<invoice.getprice()<<"    income  "<<invoice.InvoiceAmount()<<endl;
}
