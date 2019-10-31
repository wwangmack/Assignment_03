


#include <string> // program uses C++ standard string class
using namespace std;

// Employee class definition
class Invoice
{
public:
   Invoice (string,string,int, int);
   void setpartNumber(string);
   void setpartdescription(string);
   void setpurchase(int) ;
   void setprice(int) ;
   string getpartNumber()const;
   string getpartdescription()const;
   int getpurchase () const ;
   int getprice () const ;
   int getInvoiceAmount() const ;
   void diaplay () ;
private:
   string partNumber;
   string partdescription;
   int purchase;
   int price ;
}; // end class Employee
