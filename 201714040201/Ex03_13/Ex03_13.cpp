//Ex03_13.cpp
#include <iostream>
#include "Invoice.h"//include definition of class Invoice

using namespace std;
//function main begins program execution
int main()
{
    //creat four Invoice objects;
    Invoice invoice1("NO.1","coke",3,10);//NO.1 commodity
    Invoice invoice2("NO.2","sprite",3,10);//NO.2 commodity
    Invoice invoice3("NO.3","fanta",4,20);//NO.3 commodity
    Invoice invoice4("NO.4","juice",5,10);//NO.4 commodity

    //output invoice information
    invoice1.displayInvoice();//output the first item information
    cout<<endl;
    invoice2.displayInvoice();//output the second item information
    cout<<endl;
    invoice3.displayInvoice();//output the third item information
    cout<<endl;
    invoice4.displayInvoice();//output the fourth item information
    cout<<endl;
}//end main
