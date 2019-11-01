#include <iostream>
using namespace std;

#include "Invoice.h"
int main()
{
    string n,d;
    int s,p;
    getline( cin , n );
    getline( cin , d );
    cin >>s>>p;
    Invoice invoice( n, d, s, p);
    invoice.display();
    cout<< invoice.getInvoiceAmount() <<endl;

}
