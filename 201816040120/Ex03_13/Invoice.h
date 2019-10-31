#include <string> // program uses C++ standard string class
using namespace std;
class Invoice
{
public :
    explicit Invoice (string = "" , string  = "" , int = 0 , int =0 );//define the Invoice;
    /* Declare a constructor that has one parameter for each data member */
    void setdeclareInvoice ( string , string , int , int );  //set Invoice
    void setpartNumber( string );//declare a set method for the partNumber
    string getpartNumber()  ;
    void setpartDescription( string ); //declare a set method for the partDescription
    string getpartDescription ()  ;
    void setpartSales ( int ) ; //declare a set method for the partSales
    int getpartSales ()  ;
    void setpartPrice ( int ) ; //declare a set method for the partPrice
    int getpartPrice ()  ;
    int getInvoiceAmount( int partSales, int partPrice);
private :
    string partNumber;
    string partDescription;
    int partSales;
    int partPrice;
};//end class Invoice
