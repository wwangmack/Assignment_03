
#include <string> // program uses C++ standard string class
using namespace std;

class Invoice
{
public:
    Invoice(string,string,int,int);//constructor

    void setInvoicePartNumber(string);//set functions
    void setInvoiceDescription(string);
    void setInvoiceNumber(int);
    void setInvoicePrice(int);

    string getInvoicePartNumber();//get functions
    string getInvoiceDescription();
    int getInvoiceNumber();
    int getInvoicePrice();

    int getInvoiceAmount();

private:
    string invoicepartnumber;//data member
    string invoicedescription;
    int invoicenumber;
    int invoiceprice;

};
