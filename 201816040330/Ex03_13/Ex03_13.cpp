#include <iostream>
#include "Invoice.h"//include definition of class Invoice
using namespace std;

int main()
{

    Invoice invoice("h","l",99,0);
    cout<<"Your amount is:"<<invoice.getInvoiceAmount(9,9)<<endl;


    return 0;
}//end main
