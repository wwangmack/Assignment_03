#include <string>
using namespace std;


class Invoice
{
public:
   Invoice(string,string,int,int);
   /* Declare a set method for the 零件号 */
   void setNum(string);
   /* Declare a get method for the 零件号 */
   string getNum();
   /* Declare a set method for the 描述 */
   void setDes(string);
   /* Declare a get method for the描述 */
   string getDes();
   /* Declare a set method for the售出数量 */
   void setQuantity(int);
   /* Declare a get method for the售出数量 */
   int getQuantity();
    /* Declare a set method for the单价 */
   void setPrice(int);
   /* Declare a get method for the单价 */
   int getPrice();
   /*发票额 */
   int GetInvoiceAmmount();
private:
   /* Declare a string data member for the 零件号 */
   string Num;
   /* Declare a string data member for the 描述 */
   string Des;
   /* Declare an int data member for the 售出数量 */
   int Quantity;
   /* Declare an int data member for the 售出数量 */
   int Price;
}; // end class Employee
