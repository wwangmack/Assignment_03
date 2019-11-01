#include <string> // program uses C++ standard string class
using namespace std;

class Invoice
{
public:
    Invoice( string , string , int , int);
    void setNumber( string );//function to set number
    string getNumber ();////function to get number
    void setDescription( string );//function to set description
    string getDescription ();//function to get description
    void setSaleNumber( int );//function to set sale number
    int getSaleNumber (); //function to get sale number
    void setPrice( int );//function to set price
    int getPrice ();//function to get price
    void getInvoiceAmount();//function to get invoice amount
    void displayMessage();//function to display message
private:
    string Number;
    string Description;
    int SaleNumber;
    int Price;
    int InvoiceAmunt;
};
