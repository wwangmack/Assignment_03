#include <iostream>
using namespace std;

#include "Invoice.h"
Invoice::Invoice(string number,string descrip,int num,int price)
{
    setAll(number,descrip,num,price);//initializes data
}
void Invoice::setAll(string number,string descrip,int num,int price)
{
    setPartNumber(number);//set the partNumber
    setPartDescription(descrip);//set the partDescription
    setQuantitySold(num);//set the quantitySold
    SetCommodityPrice(price);//set the commodityPrice
}
void Invoice::setPartNumber(string type)
{
    partNumber=type;//store the partNumber
}
string Invoice::getPartNumber()
{
    return partNumber;
}
void Invoice::setPartDescription(string description)
{
    partDescription=description;//store the partDescription
}
string Invoice::getPartDescription()
{
    return partDescription;
}
void Invoice::setQuantitySold(int num)
{
    if(num<0)
        quantitySold=0;
    else
        quantitySold=num;//store the quantitySold
}
int Invoice::getQuantitySold()
{
    return quantitySold;
}
void Invoice::SetCommodityPrice(int num)
{
    if(num<0)
        commodityPrice=0;
    else
        commodityPrice=num;//store the commodityPrice
}
int Invoice::getCommodityPrice()
{
    return commodityPrice;
}
int Invoice::getInvoiceAmount()
{
    return commodityPrice*quantitySold;
}
void Invoice::displayMessage()
{
    cout<<"Type:"<<getPartNumber()<<"\n"<<"Description:"<<getPartDescription()
    <<"\n"<<"The amount sold:"<<getQuantitySold()<<"\n"<<"The retail price:"<<getCommodityPrice()
    <<"\n"<<"Invoice Amount:"<<getInvoiceAmount()<<"\n\n";//output all message
}
