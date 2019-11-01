// Lab 1: Invoice.h
// Definition of Account class.

#include <iostream>

using namespace std;

class Invoice//创立个名为Invoice的类 
{
public:
    Invoice(string ,string ,int ,int );
    void setPartNumber(string partnumber);
    string getPartNumber();
    void setPartDescription(string partdescription);
    string getPartDescription();
    void setGoodsSold(int);
    int getGoodsSold();
    void setItemPrice(int);
    int getItemPrice();
    int getInvoiceAmount();
private:
    string partnumber;
    string partdescription;
    int goodssold;
    int itemprice;
};
