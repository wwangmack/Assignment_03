#include <iostream>
using namespace std;

// include definition of class Invoice from Invoice.h
#include "Invoice.h"

// function main begins program execution
int main()
{
    Invoice  Invoice1("C001","asd");
    Invoice  Invoice2("C002","fgh");
    Invoice1.setPrice(5);
    Invoice1.setSales(20);
    Invoice2.setPrice(3);
    Invoice2.setSales(55);
    cout<<Invoice1.getID()<<Invoice1.getDescription()<<":price is "<<Invoice1.getPrice()<<"sales is "<<Invoice1.getSales()<<endl;
    cout<<"The total profit of these is:"<<Invoice1.getInvoiceAmount()<<endl;
    cout<<endl;
    cout<<Invoice2.getID()<<Invoice2.getDescription()<<":price is "<<Invoice2.getPrice()<<"sales is "<<Invoice2.getSales()<<endl;
    cout<<"The total profit of these is:"<<Invoice2.getInvoiceAmount()<<endl;
    return 0;
} // end main
