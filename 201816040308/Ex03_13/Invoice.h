#include <bits/stdc++.h>
using namespace std;

class Invoice
{
public:
   Invoice(string,string,int,int);
   void setname1(string);
   string getname1();
   void setname2(string);
   string getname2();
   void setnumber(int);
   int getnumber();
   void setprice(int);
   int getprice();
   int getInvoiceAmount();
private:
   string name1;
   string name2;
   int number;
   int price;
};
