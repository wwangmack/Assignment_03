#include <iostream>
using namespace std;

#include "Invoice.h" // include definition of class Invoice

// function main begins program execution
int main()
{
    /* Create four Invoice objects and assign them to Invoice variables. */
    Invoice Invoice1("partNumber1","partDescription1",10,100);
    Invoice Invoice2("partNumber2","partDescription2",-1,100);
    cout<<"零件号："<<Invoice1.getpartNum()<<"\n"<<"零件描述："<<Invoice1.getpartDes()<<"\n"<<"商品售出量："<<Invoice1.getsellNum()<<"\n"<<"商品单价："<<Invoice1.getprice()<<endl;
    cout <<"The invoice amount is: "<<Invoice1.getInvoiceAmount()<<"\n\n"<<endl;
    cout<<"零件号："<<Invoice2.getpartNum()<<"\n"<<"零件描述："<<Invoice2.getpartDes()<<"\n"<<"商品售出量："<<Invoice2.getsellNum()<<"\n"<<"商品单价："<<Invoice2.getprice()<<endl;
    cout <<"The invoice amount is: "<<Invoice2.getInvoiceAmount()<<endl;

} // end main

