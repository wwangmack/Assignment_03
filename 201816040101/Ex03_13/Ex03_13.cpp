#include <iostream>
#include "Invoice.h"
using namespace std;

int main()
{
    int a=2,b=3;
    Invoice invoice("c++","hhh",a,b);
    cout<<"the value is "<<invoice.getInvoiceAmount(a,b)<<endl;

  return 0;
}
