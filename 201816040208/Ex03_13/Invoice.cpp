#include<iostream>
#include "Invoice.h"
using namespace std;

    Invoice:: Invoice( string name, string description, int sold, int price) //初始化数据
        : invoiceName(name), invoiceDescription(description), invoiceSold(sold), invoicePrice(price)
    {

    }

    void Invoice:: setInvoiceName (string name)   //设置名字
    {
        invoiceName = name;
    }

    string Invoice:: getInvoiceName()   //返回名字
    {
        return invoiceName;
    }

    void Invoice:: setInvoiceDescription(string description)  //设置描述
    {
        invoiceDescription = description;
    }

    string Invoice:: getInvoiceDescription()   //返回描述
    {
        return invoiceDescription;
    }

    void Invoice:: setInvoiceSold(int sold)   //设置数量
    {
        if(sold < 0)
            invoiceSold = 0;
        else
            invoiceSold = sold;
    }

    int Invoice:: getInvoiceSold()      //返回数量
    {
        return invoiceSold;
    }

    void Invoice:: setInvoicePrice(int price) //设置价格
    {
        if(price < 0)
            invoicePrice = 0;
        else
            invoicePrice = price;
    }

    int Invoice:: getInvoicePrice()     //返回价格
    {
        return invoicePrice;
    }

    int Invoice:: getInvoiceAmount() //返回发票额
    {
        return invoiceSold*invoicePrice;
    }

