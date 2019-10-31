#include <string>

using namespace std;

class Invoice// Invoice class definition
{
public:
    Invoice(string,string,int,int);
    void setNumber(string);
    string getNumber();
    void setDescribe(string);
    string getDescribe();
    void setSalesVolume(int);
    int getSalesVolume();
    void setPrice(int);
    int getPrice();
    int getInvoiceAmount(int,int);
private:
    string number;
    string describe;
    int salesvolume;
    int price;
};//end  class Invoice
