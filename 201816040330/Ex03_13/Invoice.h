
#include<string>

using namespace std;
//Invoice class definition
class Invoice
{
public:
    explicit Invoice(string,string,int,int);
    void setPartNumber(string);//set the partnumber
    string getPartNumber()const;//get the partnumber
    void setPartdeScription(string);//set the partdescription
    string getPartdeScription()const;//get the partdescription
    void setNumber(int);//set the number
    int getNumber()const;//get the number
    void setPrice(int);//set the price
    int getPrice()const;//get the price
    int getInvoiceAmount(int,int);//get the result after adjust
private:
    string partnumber;
    string partdescription;
    int number;
    int price;
    int invoiceamount;
};
