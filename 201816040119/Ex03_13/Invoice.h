#include <string> // program uses C++ standard string class
using namespace std;
class Invoice
{
public:
    Invoice(string,string,int,int);//initalization function
    void setnumber(string);//initalization number
    string getnumber();//reciver number
    void setdescripe(string);//initalization deacripe
    string getdescripe();//reciver descripe
    void  setprice(int);//initalization orice
    int getprice();//reciver price
    void setsell(int);//initalization sell
    int  getsell();//reciver sell
    int getInvioceAmout();//all sellnount
    void display();//display all message
private:
    string Number;
    string Descripe;
    int Price;
    int Sell;
};
