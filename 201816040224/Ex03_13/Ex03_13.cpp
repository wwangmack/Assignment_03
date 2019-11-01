// Lab 1: Invoice.cpp
// Member-function definitions for class Invoice.
#include <iostream>
using namespace std;

#include "Invoice.h" // include definition of class Account

// Invoice constructor initializes data member balance

Invoice::Invoice(string partnumber,string partdescription,int goodssold,int itemprice)
{
    setPartNumber(partnumber);
    setPartDescription(partdescription);
    setGoodsSold(goodssold);
    setItemPrice(itemprice);
}
//Invoice::Invoice(string partnumber)
void Invoice::setPartNumber(string number)
{
    partnumber=number;
}
string Invoice::getPartNumber()
{
    //int partnumber;
    return partnumber;
}
void Invoice::setPartDescription(string de)
{
    partdescription=de;
}
string Invoice::getPartDescription()
{
    return partdescription;
}
void Invoice::setGoodsSold(int go)//输入go并加以判断 
{
    //int go;
    if(go<0)
    {
        go=0;
    }
    goodssold=go;
}
int Invoice::getGoodsSold()
{
    return goodssold;
}
void Invoice::setItemPrice(int it)//判断 
{
    //int it;
    if(it<0)
    {
        it=0;
    }
    itemprice=it;
}
int Invoice::getItemPrice()
{
    int itemprice;
    return itemprice;
}
int Invoice::getInvoiceAmount()
{
    int a;
return goodssold*itemprice ;
}
