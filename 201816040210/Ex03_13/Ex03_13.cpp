
#include <iostream>
using namespace std;

#include "Invoice.h"
int main()
{
    Invoice a( "EB3-2","pen",50,3 );//a is an invoice
    Invoice b( "VC15-4","cellphone",1000,2400 );//b is an invoice

    //print invoice a and b
    cout <<"Invoice a:"<<"\n"<<a.getPartNumber()<<"   "<<a.getPartDescription()<<"   "<<a.getSellAmount()<<"   "
         <<a.getUnitPrice()<<"   "<<a.getInvoiceAmount()<<endl;
    cout <<"Invoice b:"<<"\n"<<b.getPartNumber()<<"   "<<b.getPartDescription()<<"   "<<b.getSellAmount()<<"   "
         <<b.getUnitPrice()<<"   "<<b.getInvoiceAmount()<<endl;

    //set a and b
    a.setPartNumber( "NEW888-666" );
    b.setPartDescription( "computer" );

    //print a and b after set
    cout <<"\nChange a.partnumber to NEW888-6"<<"\n"<<"Change b.partdescription to computer"<<"\n"<<endl;
    cout <<"Invoice a:"<<"\n"<<a.getPartNumber()<<"   "<<a.getPartDescription()<<"   "<<a.getSellAmount()<<"   "
         <<a.getUnitPrice()<<"   "<<a.getInvoiceAmount()<<endl;
    cout <<"Invoice b:"<<"\n"<<b.getPartNumber()<<"   "<<b.getPartDescription()<<"   "<<b.getSellAmount()<<"   "
         <<b.getUnitPrice()<<"   "<<b.getInvoiceAmount()<<endl;

    //set a and b
    a.setSellAmount( 3 );
    b.setUnitPrice( -20 );//error example

    //print a and b after set
    cout <<"\nChange a.sellamount to 3"<<"\n"<<"Change b.unitprice to -20"<<"\n"<<endl;
    cout <<"Invoice a:"<<"\n"<<a.getPartNumber()<<"   "<<a.getPartDescription()<<"   "<<a.getSellAmount()<<"   "
         <<a.getUnitPrice()<<"   "<<a.getInvoiceAmount()<<endl;
    cout <<"Invoice b:"<<"\n"<<b.getPartNumber()<<"   "<<b.getPartDescription()<<"   "<<b.getSellAmount()<<"   "
         <<b.getUnitPrice()<<"   "<<b.getInvoiceAmount()<<endl;
}
