#include <string> // program uses C++ standard string class
using namespace std;

// Invoice class definition
class Invoice
{
public:
   Invoice( string,string,int,int );//Declare a constructor that has one parameter for each data member
   void setlinJianHao( string );//Declare a set method for the Invoice
   string getlinJianHao();//Declare a get method for the Invoice
   void setmiaoShu( string );//Declare a set method for the Invoice
   string getmiaoShu();//Declare a get method for the Invoice
   void setshouChuLiang( int );//Declare a set method for the Invoice
   int getshouChuLiang();//Declare a get method for the Invoice
   void setprice( int );//Declare a set method for the Invoice
   int getprice();//Declare a get method for the Invoice
   int getInvoiceAmount(int,int);//Declare a get method for the Invoice
   void display();//display for the Invoice
private:
   string linJianHao; // 零件号 for this Invoice
   string miaoShu; // 商品描述 for this Invoice
   int shouChuLiang; // 商品售出量 for this Invoice
   int price;//商品单价 for this Invoice
}; // end class Invoice
