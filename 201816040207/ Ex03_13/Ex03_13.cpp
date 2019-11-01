
#include <iostream>
#include"Invoice.h"
using namespace std;

int main()
{
    Invoice invoice1("pencil007","you can write something by using it.",100,5);
    cout<<invoice1.getnumber()<<" "<<invoice1.getdescription()<<" "<<invoice1.getsum()<<" "<<invoice1.getprice()<<endl;
    cout<<"This thing's amount is "<<invoice1.getInvoiceAmount(10);

}
