#include <string> // program uses C++ standard string class
using namespace std;

// Invoice class definition
class Invoice
{
public:
   Invoice(string,string,int,int);
   //Declare a constructor that has one parameter for each data member
   void setPartNumber(string);
   // method to set the Invoice's PartNumber
   string getPartNumber();
   // method to get the Invoice's PartNumber
   void setPartDescription(string);
   // method to set the Invoice's PartDescription
   string getPartDescription();
   // method to get the Invoice's PartDescription
   void setSalesOffer(int);
   // method to set the Invoice's SalesOffer
   int getSalesOffer();
   // method to get the Invoice's SalesOffer
   void setUnitPrice(int);
   // method to get the Invoice's UnitPrice
   int getUnitPrice();
   // method to get the Invoice's UnitPrice
   int InvoiceAmount();
   //method to get the Invoice's InvoiceAmount
private:
    string partNumber;//string data member for the Invoice's partNumber
    string partDescription;//string data member for the Invoice's partDescription
    int salesOffer;//int data member for the Invoice's salesOffer
    int unitPrice;//int data member for the Invoice's unitPrice
}; // end class Employee
