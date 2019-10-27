//Invoice.h
#include <string>
#include <iostream>
using namespace std;

class Invoice
{
public:
    explicit Invioce(string PartNumber,string ProductDescription,int Number,int Price);//initialization variable
    void setPartNumber(string PartNumber);//set an item number
    void setProductDescription(string ProductDescription);//set an item name
    void setNumber(int Number);//set a number of an item
    void setPrice(int Price);//set a price of an item
    string getPartNumber()const;//get an item number
    string getProductDescription()const;//get an item name
    int Invoice::getNumber()const;//get a number of an item
    int Invoice::getPrice()const;//get a price of an item
    int Invoice::getsumNP()const;//get invoice amount
    void Invoice::displayInvoice();//output invoice information
private:
    string partnumber;
    string productdescription;
    int number;
    int price;
};
