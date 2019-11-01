#include <string>
using namespace std;
//declare class Invoice
class Invoice
{
public:
    Invoice(string,string,int,int);//declare structor
    void setNumber(string);//declare set and get functiongs
    void setDiscribe(string);
    void setSale(int);
    void setPrice(int);
    string getNumber();
    string getDiscribe();
    int getSale();
    int getPrice();
    int getInvoiceAmount();




private:
    string Number;
    string Discribe;
    int    Sale;
    int    Price;
};
