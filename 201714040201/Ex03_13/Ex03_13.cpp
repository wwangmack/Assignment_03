//Ex03_13.cpp
#include <iostream>
#include "Invoice.h"//include definition of class Invoice

using namespace std;
//function main begins program execution
int main()
{
    //creat four Invoice objects;
    Invoice invoice1("NO.1","coke",3,10);
    Invoice invoice2("NO.2","sprite",3,10);
    Invoice invoice3("NO.3","fanta",4,20);
    Invoice invoice4("NO.4","juice",5,10);

    //output invoice information
    invoice1.displayInvoice();
    invoice2.displayInvoice();
    invoice3.displayInvoice();
    invoice4.displayInvoice();
}//end main
