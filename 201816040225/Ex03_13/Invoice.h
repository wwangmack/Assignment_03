// Lab 1: Invoice.h
// Definition of Invoice class.
#include<string>
using namespace std;
class Invoice
{
public:
    Invoice( int ,string ,int,int );
   void setNumber(int);//define a function to set Number
   int getNumber();//define a function to get Number
   void setDescribe(string);//define a function to setDescribe
   string getDescribe();//define a function to getDescribe
   void setAmount(int);//define a function to setAmount
   int getAmount();//define a function to getAmount
   void setPrice(int);//define a function to setPrice
   int getPrice();//define a function to get price
   void getInvoiceAmount();//define a function to count
private://data member
  int Number;
  string Describe;
  int Amount;
  int Price;
  int total;
};
