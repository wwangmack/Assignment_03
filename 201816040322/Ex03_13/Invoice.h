// Assignment02 Invoice.h
// Invoice class definition.

#ifndef INVOICE_H
#define INVOICE_H

#include <string> // program uses C++ standard string class

using namespace std;

// Invoice class definition
class Invoice
{
public:
    Invoice(string = "",string = "",int = 0,int = 0);/* Declare a constructor that has one parameter for each data member */
    void setPartNumber(string);/* Declare a set method for the invoice's partnumber*/
    string getPartNumber()const;/* Declare a get method for the invoice's partnumber */
    void setPartDescription(string);
    string getPartDescription()const;
    void setSales(int);
    int getSales()const;
    void setUnitPrice(int);
    int getUnitPrice()const;
    int getInvoiceAmount()const;
private:
    string PartNumber;/* Declare a string data member for the invoice's partnumber */
    string PartDescription;
    int Sales;
    int UnitPrice;
};// end class Invoice

#endif // INVOICE_H
