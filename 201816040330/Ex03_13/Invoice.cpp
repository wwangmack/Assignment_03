#include <iostream>
#include "Invoice.h"

using namespace std;

Invoice::Invoice(string partnumber,string partdescription,int number,int price)
{
    setPartNumber(partnumber);//validate and store partnumber
    setPartdeScription(partdescription);//validate and store partdescription
    setNumber(number);//validate and store number
    setPrice(price);//validate and store price

}//end function Invoice


void Invoice::setPartNumber(string partnumber1)
{
    partnumber=partnumber1;
}//end function setPartNumber


string Invoice::getPartNumber()const
{
    return partnumber;
}//end function getPartNumber


void Invoice::setPartdeScription(string partdescription1)
{
    partdescription=partdescription1;
}//end function setPartdeScription


string Invoice:: getPartdeScription()const
{
    return partdescription;
}//end function getPartdeScription


void Invoice::setNumber(int number1)
{
    number=number1;
}//end function setNumber


int Invoice:: getNumber()const
{
    return number;
}//end function getNumber


void Invoice::setPrice(int price1)
{
    price=price1;
}//end function setPrice


int Invoice::getPrice()const
{
    return price;
}//end function getPrice


int Invoice::getInvoiceAmount(int number,int price)//adjust and test
{
    if(number<0)
    {
        number=0;
    }
    if(price<0)
    {
        price=0;
    }
    invoiceamount=number*price;

    return invoiceamount;
}//end function getInvoiceAmount
