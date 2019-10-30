//Invoice.h
#include <string>
//#include <iostream>
using namespace std;

class Invoice
{
public:
    Invoice(string ,string ,int ,int );//initialization variable
    void setPartNumber(string );//set an item number
    void setProductDescription(string );//set an item name
    void setNumber(int );//set a number of an item
    void setPrice(int );//set a price of an item
    string getPartNumber()const;//get an item number
    string getProductDescription()const;//get an item name
    int getNumber()const;//get a number of an item
    int getPrice()const;//get a price of an item
    int getsumNP()const;//get invoice amount
    void displayInvoice();//output invoice information
private:
    string partnumber;//item model
    string productdescription;//item name
    int number;//item number
    int price;//item price
};
