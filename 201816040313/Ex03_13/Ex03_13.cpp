#include <iostream>
using namespace std;

#include "Invoice.h" // include definition of class Invoice
int main()
{
    Invoice invoiceSpecies(" "," ",0,0);//Create one Invoice objects and assign them to Invoice variables.
    invoiceSpecies.setinvoicepno("Q31205F32");
    invoiceSpecies.setinvoicepd("中空的棱柱");
    invoiceSpecies.setinvoicesv(50);
    invoiceSpecies.setinvoiceip(20);
    cout << "Part number is :" << invoiceSpecies.getinvoicepno() <<endl;
    cout << "Part description is :"<< invoiceSpecies.getinvoicepd() <<endl;
    cout << "The volume of goods sold is :" <<invoiceSpecies.getinvoicesv() <<endl;
    cout << "The unit price of the goods is :" <<invoiceSpecies.getinvoiceip() <<endl;
    cout << "Invoice amount is :" << invoiceSpecies.getInvoiceAmount(50,20) <<endl;//Output the part number,part description,Commodity output,item pricing and invoice amount for each Invoice.
}
