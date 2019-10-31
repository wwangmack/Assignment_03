#include <iostream>
#include "Invoice.h"
using namespace std;
Invoice::Invoice(string number, string describe, int sold, int price)
{
    setLingName(number);
    setLingXing(describe);
    setShangShou(sold);
    setShangJian(price);
}
//function to set the part number
void Invoice::setLingName(string number)
{
    lingName=number;
}
//function to get the part number
string Invoice::getLingName()
{
    return lingName;
} // end function getPartNumber
//function to set the part describe
void Invoice::setLingXing(string describe)
{
    lingXing=describe;
}
//function to get the part describe
string Invoice::getLingXing()
{
    return lingXing;
}
//function to set the part sold
void Invoice::setShangShou(int sold)
{
    if(sold<0)
        shangShou= 0;
    else
        shangShou = sold;
}
//function to get the part sold
int Invoice::getShangShou()
{
    return shangShou;
}
//function to set the part price
void Invoice::setShangJian(int price)
{
    if(price<0)
        shangJian= 0;
    else
       shangJian = price;
}
//function to get the part price
int Invoice::getShangJian()
{
    return shangJian;
}
//function to get the invoice amount
int Invoice::getInvoiceAmount()
{
    int Amount=shangShou*shangJian;
    return Amount;
} // end function getInvoiceAmount
