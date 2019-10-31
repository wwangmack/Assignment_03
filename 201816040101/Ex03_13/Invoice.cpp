#include <iostream>
#include "Invoice.h"
using namespace std;

Invoice::Invoice(string name,string des,int a,int b)
  :invoice1(name),invoice2(des),price(a),number(b)
{

}
void Invoice::setinvoice1(string name,string des,int a,int b)
{
    invoice1=name;
    invoice2=des;
    price=a;
    number=b;
}

string Invoice::getinvoice1()const
{
    return invoice1;
}

void Invoice::displayMessage()const
{
    cout<<"welcome to it"<<getinvoice1()<<endl;
}

int Invoice::getInvoiceAmount(int a,int b)
{
   if(a<0)
        a=0;
   if(b<0)
        b=0;
   InvoiceAmount=a*b;
   return InvoiceAmount;
}
