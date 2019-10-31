//Ex03_13:Invoice.h
//Invoice class definition.

#include <string>//program uses C++ standard string class
using namespace std;

//Invoice class definition
class Invoice
{
public:
    //constructor number, description, sales volume and price
    Invoice(string, string, int, int);
    void setNumber(string);//fuction to set the number
    string getNumber();//fuction to retrieve the number
    void setDescripion(string);//fuction to set the description
    string getDescription();//fuction to retrieve the description
    void setSalesVolume(int);//fuction to set the sales volume
    int getSalesVolume();//fuction to retrieve the sales volume
    void setPrice(int);//fuction to set the price
    int getPrice();//fuction to retrieve the price
    int getInvoiceAmount();//fuction to calculation the product between sales volume and price
private:
    string number;//number for this Invoice
    string description;//description for this Invoice
    int salesVolume;//sales volume for this Invoice
    int price;//price for this Invoice
};//end class Invoice
