// Invoice.cpp

#include<iostream>
#include"Invoice.h"     //include definition of class invoice

using namespace std;

Invioce::Invioce(string PartNumber,string ProductDescription,int Number,int Price)//initialization variable
{
    : partnumber(PartNumber);
    : productdescription(ProductDescription);
    : number(Number);
    : price(Price);
}
void Invoice::setPartNumber(string PartNumber)//set an item number
{
    partnumber=PartNumber;
}
void Invoice::setProductDescription(string ProductDescription)//set an item name
{
    productdescription=ProductDescription;
}
void Invoice::setNumber(int Number)//set a number of an item
{
    if(Number>=0)
      number=Number;
    else
        number=0;
}
void Invoice::setPrice(int Price)//set a price of an item
{
    if(Price>=0)
        price=Price;
    else
        price=0;
}
string Invoice::getPartNumber()const//get an item number
{
    return partnumber;
}
string Invoice::getProductDescription()const//get an item name
{
    return productdescription;
}
int Invoice::getNumber()const//get a number of an item
{
    return number;
}
int Invoice::getPrice() const//get a price of an item
{
    return price;
}
int Invoice::getsumNP()const//get invoice amount
{
    return number*price;
}
void Invoice::displayInvoice()//output invoice information
{
    cout<<getPartNumber()<<" "<<getProductDescription()<<" "<<getNumber()<<" "<<getPrice()<<" "<<getsumNP();
}
