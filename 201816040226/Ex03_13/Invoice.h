// Invoice class definition.

#include <string> // program uses C++ standard string class
using namespace std;

// Invoice class definition
class Invoice
{
public:
    Invoice( string, string,int,int);
   void setPartNumber( string ); // function to set the part number
   string getPartNumber(); // function to retrieve the part number
   string getPartDescription ();
   void setPartDescription( string );
   void setSoldQuantity( int );
   int getSoldQuantity();
   void setCommodityPrice( int );
   int getCommodityPrice();
   int getInvoiceAmount();
private:
    string partNumber;
    string partDescription;
    int soldQuantity;
    int commodityPrice;
};//end class Invoice
