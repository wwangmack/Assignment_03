
#include <iostream>
using namespace std;

#include "invoice.h"

int main()
{
    Invoice product1("0001","this is a good product",10,20);
    cout<<product1.get_product_count()<<endl;
    cout<<product1.get_product_describe()<<endl;
    cout<<product1.get_product_number()<<endl;
    cout<<product1.get_product_price()<<endl;
    cout<<product1.getInvoiceAmount()<<endl;
}
