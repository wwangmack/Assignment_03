// Exercise 3.13 Solution: Invoice.h
#include<string>
using namespace std;
class Invoice
{
public:
    Invoice( string , string , int , int);//set partNumber,partDescription,partQuantity, partPrice;
    void setPartNumber( string );//set partNumber
    void setPartDescription( string );//set partDescription
    void setPartQuantity( int );//set partQuantity
    void setPartPrice( int );//set partPrice
    string getPartNumber();//get partNumber
    string getPartDescription();//get partDescription
    int getPartQuantity();//get partQuantity
    int getPartPrice();//get partPrice
    int getInvoiceAmount();//get InvoiceAmount
private:
    string partNumber;
    string partDescription;
    int partQuantity;
    int partPrice;
};
