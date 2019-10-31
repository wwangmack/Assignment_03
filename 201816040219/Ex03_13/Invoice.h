#include <string> // program uses C++ standard string class
using namespace std;

// Invoice class definition
class Invoice
{
public:
    /* Declare a constructor that has one parameter for each data member */
    Invoice(string partNum,string partDes,int sellNum,int price);
    void setpartNum(string partNum);
    string getpartNum();
    void setpartDes(string partDes);
    string getpartDes();
    void setsellNum(int sellNum);
    int getsellNum();
    void setprice(int price);
    int getprice();
    int getInvoiceAmount();
private:
    string partNumm;
    string partDess;
    int sellNumm;
    int pricee;
    int InvoiceDate;
}; // end class Invoice
