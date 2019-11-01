#include <iostream>
#include"Invoice.h"
using namespace std;

int main()
{
Invoice invoice1("1","test",100,20);//initializ the object
cout<<"the invoice amount is :"<<invoice1.getInvoiceAmount();
}
