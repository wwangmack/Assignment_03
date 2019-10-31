
#include<iostream>
#include"Invoice.h"

int main()
{
    Invoice sample1("2018","tire",8,2018);//Initializes a class
    Invoice sample2("1604","light",-4,1604);
    Invoice sample3("0108","wheel",8,-108);
    sample1.displayInvoice();
    cout<<endl;
    sample2.displayInvoice();
    cout<<endl;
    sample3.displayInvoice();
    cout<<endl;
}
