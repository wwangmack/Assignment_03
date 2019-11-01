// Exercise 3.13 Solution: Invoice.h
#include<string>

using namespace std;

class Invoice //Definition of Invoice class
{

public:
    Invoice( string, string, int, int);

    void setElementNumber(string);//sets the element number

    void setPartDescription(string);//sets the part description

    void setGoodsSold(int);//sets the goods sold

    void setItemPricing(int);//sets the item pricing

    string getElementNumber();//gets the element number

    string getPartDescription();//gets the part description

    int getGoodsSold();//gets the Goods Sold

    int getItemPricing();//gets the Item Pricing

    int getInvoiceAmount();//gets the invoice amount

private:
    string elementNumber;

    string partDescription;

    int goodsSold;

    int itemPricing;
};
