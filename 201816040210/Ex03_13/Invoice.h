#ifndef INVOICE_H_INCLUDED
#define INVOICE_H_INCLUDED

#include <string.h>
using namespace std;

class Invoice
{
public:
    Invoice( string,string,int=0,int=0 );//constructor function
    void setPartNumber( string );//function to set part number
    string getPartNumber();//function to get part number
    void setPartDescription( string );//function to set part description
    string getPartDescription();//function to get part description
    void setSellAmount( int );//function to set sell amount
    int getSellAmount();//function to get sell amount
    void setUnitPrice( int );//function to set unit price
    int getUnitPrice();//function to get unit price
    int getInvoiceAmount( );//function to get invoice amount

private:
    string partNumber;
    string partDescription;
    int sellAmount;
    int unitPrice;
};//end class

#endif // INVOICE_H_INCLUDED
