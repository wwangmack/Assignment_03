#include <string> // program uses C++ standard string class
using namespace std;

// Invoice class definition
class Invoice
{
public:
    Invoice ( string, string, int, int );
    void setPartNumber( string );/* Declare a set method for the invoice's part number */
   string getPartNumber();/* Declare a get method for the invoice's part number*/
   void setPartDescription( string );/* Declare a set method for the invoice's part description */
   string getPartDescription();/* Declare a get method for the invoice's part description */
   void setMarketQuantities( int );/* Declare a set method for the invoice's market quantities */
   int getMarketQuantities();/* Declare a get method for the invoice's market quantities */
   void setUnitPrice( int );/* Declare a set method for the invoice's unit price */
   int getUnitPrice();/* Declare a get method for the invoice's unit price */
   int getInvoiceAmount();/* Declare a method for the invoice's amount */
private:
    string partNumber;/* Declare a string data member for the invoice's part number */
    string partDescription;/* Declare a string data member for the invoice's part description */
    int marketQuantities;/* Declare a int data member for the invoice's market quantities*/
    int unitPrice;/* Declare a int data member for the invoice's unit price*/
};
