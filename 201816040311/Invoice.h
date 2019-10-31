#ifndef INVOICE_H_INCLUDED
#define INVOICE_H_INCLUDED

#include <string>

using namespace std;

class Invoice
{
private:
    int Sales_volume;//Sales_volume for the Invoice
    int Unit_price;//Unit_price for the Invoice
    string Part_Number;//Part_Number for the Invoice
    string Part_description;//Part_description for the Invoice
public:
    Invoice();
    //constructor initializes Sales_volume,Unit_price,Part_Number,Part_description
    Invoice(int,int,string,string);
    void setSales_volume(int);// function to set the Sales_volume
    void setUnit_price(int);// function to set the setUnit_price
    void setPart_Number(string);// function to set the setPart_Number
    void setPart_description(string);// function to set the setPart_description
    int getSales_volume();// function to retrieve the getSales_volume
    int getUnit_price();// function to retrieve the getUnit_price
    string getPart_Number();// function to retrieve the getPart_Number
    string getPart_description();// function to retrieve the getPart_description
    int getInvoiceAmount();//Multiply the unit by the unit price
    void displayPart();//display part
};

#endif // INVOICE_H_INCLUDED
