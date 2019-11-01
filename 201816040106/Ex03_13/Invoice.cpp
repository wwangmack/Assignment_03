#include <iostream>
#include "Invoice.h"
Invoice::Invoice(string initialnumber, string initialDescription, int initialPrice, int initialSaleNumber)
{//构造函数
    setPartNumber(initialnumber);
    setPartDescription(initialDescription);
    setPrice(initialPrice);
    setSaleNumber(initialSaleNumber);
}
void Invoice::setPartNumber(string number)//零件号的set函数
{
    partNumber = number;
}
void Invoice::setPartDescription(string description)//零件描述的set函数
{
    partDescription = description;
}
void Invoice::setPrice(int Price)//商品单价的set函数
{
    if (Price < 0)
        price = 0;
    else
        price = Price;
}
void Invoice::setSaleNumber(int sale)//商品售出量的set函数
{
    if (sale < 0)
        saleNumber = 0;
    else
        saleNumber = sale;
}
string Invoice::getPartNumber()//零件号的get函数
{
    return partNumber;
}
string Invoice::getPartDescription()//零件描述的get函数
{
    return partDescription;
}
int Invoice::getPrice()//商品价格的get函数
{
    return price;
}
int Invoice::getSaleNumber()//商品售出量的get函数
{
    return saleNumber;
}
int Invoice::getInvoiceAmount(){//返回售出量与单价的乘积
    return saleNumber*price;
}
