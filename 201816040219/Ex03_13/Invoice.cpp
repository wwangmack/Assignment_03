#include <iostream>
using namespace std;

#include "Invoice.h" // Employee class definition

Invoice::Invoice(string partNum,string partDes,int sellNum,int price)
{
    //initializes some data
    setpartNum(partNum);
    setpartDes(partDes);
    setsellNum(sellNum);
    setprice(price);
}

/* Define a set function for the partNum data member. */
void Invoice::setpartNum(string partNum)
{
    partNumm=partNum;
}
/* Define a get function for the partNum data member. */
string Invoice::getpartNum()
{
    return partNumm;
}
/* Define a set function for the partDes data member. */
void Invoice::setpartDes(string partDes)
{
    partDess=partDes;
}
/* Define a get function for the partDes data member. */
string Invoice::getpartDes()
{
    return partDess;
}
/* Define a set function for the sellNum data member. */
void Invoice::setsellNum(int sellNum)
{
     if(sellNum<=0)
    {
        sellNumm=0;
    }
    else
     sellNumm=sellNum;
}
/* Define a get function for the sellNum data member. */
int Invoice::getsellNum()
{

    return sellNumm;
}
/* Define a set function for the price data member. */
void Invoice::setprice(int price)

{
    if(price<=0)
    {
        pricee=0;
    }
    else
     pricee=price;
}
/* Define a get function for the price data member. */
int Invoice::getprice()
{
    return pricee;
}
//Calculation of invoice amount
int Invoice::getInvoiceAmount()
{
    int InvoiceDate;
    return InvoiceDate=sellNumm*pricee;
}
