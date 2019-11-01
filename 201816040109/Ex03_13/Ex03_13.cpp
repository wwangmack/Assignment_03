#include <iostream>
using namespace std;

#include "Invoice.h"
int main() {
    Invoice invoice1("ls001","螺丝",20,1);
    cout<<invoice1.getInvoiceAmount()<<endl;
    invoice1.setProductSales(invoice1.getProductSales()+10);
    cout<<invoice1.getInvoiceAmount()<<endl;
    Invoice invoice2("cz001","锤子",-20,30);
    cout<<invoice2.getInvoiceAmount()<<endl;
    return 0;
}
