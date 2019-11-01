#include <string> // program uses C++ standard string class
using namespace std;

// Invoice class definition
class Invoice
{
public:
   Invoice(string, string,int,int);
    //Declare a constructor that has one parameter for each data member

   void setPart( string ); // function to set the part
   string getPart();       // function to retrieve the part

   void setDescripe(string); // function to set descripe
   string getDescripe();    //function to retrieve descripe

   void setNumber(int);     // function to set the number
   int getNumber();           //function to retrieve descripe

   void setMoney(int);         // function to set the money
   int getMoney();             //function to retrieve the money

   int getInvoiceAmount(int, int);

   void displayMessage();
private:
   string commPart;
   string commDescripe;
   int commNumber;
   int commMoney;
   int commamount;
}; // end class Invoice
