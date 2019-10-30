

#include<string>

using namespace std;

class Invoice
{

public:
    Invoice( string number,string description,int sum,int price);//initialize some thing
    void setnumber(string number);//initialize number
    string getnumber();//get this number
    void setdescription(string description);
    string getdescription();
    void setsum(int sum);
    int getsum();
    void setprice(int price);
    int getprice();
    int getInvoiceAmount(int buy);
//私有变量定义
private:
    string numberdata;
    string descriptiondata;
    int sumdata;
    int pricedata;

};
