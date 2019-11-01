#include <string>
using namespace std;
class Invoice
{
public:
    Invoice(string,string,int,int);
    void setpartname(string);
    string getpartname();
    void setnumber(string);
    string getnumber();
        void setsell(int);
        int getsell();
        void setprice(int);
        int getprice();
        int InvoiceAmount();
private:
    string partname;
    string number;
    int sell;
    int price;

};
