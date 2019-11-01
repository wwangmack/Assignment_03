#include <iostream>

using namespace std;
#include"invoice.h"
int main()
{
    Invoice invoice("qwe", "qwe", 123, 1);
    Invoice INVOICE("asd", "asd", -1, -1);

    cout<< "commodity1:"<<endl;
    cout  <<invoice.getPartNumber()<<"\t" <<invoice.getPartDescription()  <<"\t"<<invoice.getCommoditySold() << "\t"<<invoice.getCommodityPrice()<<"\t"  <<invoice.getInvoiceAmount()<<endl;
    cout<< "commodity2:"<<endl;
    cout  <<INVOICE.getPartNumber()<<"\t" <<INVOICE.getPartDescription() << "\t"<<INVOICE.getCommoditySold()  <<"\t"<<INVOICE.getCommodityPrice()<<"\t"  <<INVOICE.getInvoiceAmount()<<endl;

    return 0;
}
