#include <string>

class Invoice
{
public:
   Invoice( string , string , int , int  ); // constructor initializes
   //Declare functions
    void setPartNumber(string);
    string getPartNumber();
    void setPartDiscription(string );
    string getPartDiscription();
    void setItemBeingPurchased(int );
    int getItemBeingPurchased();
    void setPricePerItem(int );
    int getPricePerItem();
    int getInvoiceAmount( );
private:// data member
    string partNumber;
    string partDiscription;
    int itemBeingPurchased;
    int pricePerItem;
    int InvoiceAmount ;
}; // end class Invoice

