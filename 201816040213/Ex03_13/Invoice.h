#include <string>
using namespace std;
//Invoice class definition.
class Invoice
{
public:
    explicit Invoice( string, string, int, int );  //constructor initializes part number, part describe, part sold and part price
    void setPartNumber( string ); //function to set the part number
    string getPartNumber( ) const; //function to get the part number
    void setPartDescribe( string ); //function to set the part describe
    string getPartDescribe( ) const; //function to get the part describe
    void setPartSold(int); //function to set the part sold
    int getPartSold( ) const; //function to get the part sold
    void setPartPrice( int ); //function to set the part price
    int getPartPrice( ) const; //function to get the part price
    int getInvoiceAmount( ) const; //function to get the invoice amount
private:
    string partNumber; // part number for this Invoice
    string partDescribe; // part describe for this Invoice
    int partSold; // part sold for this Invoice
    int partPrice; // part price for this Invoice
};
