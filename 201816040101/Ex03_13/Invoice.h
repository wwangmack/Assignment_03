#include <string>
using namespace std;
class Invoice
{
public:
    explicit Invoice(string name,string des,int a,int b);
    void setinvoice1(string name,string des,int a,int b);
    string getinvoice1()const;
    void displayMessage()const;
    int getInvoiceAmount(int a,int b);


private:
    string invoice1;
    string invoice2;
    int price;
    int number;
    int InvoiceAmount;
};
