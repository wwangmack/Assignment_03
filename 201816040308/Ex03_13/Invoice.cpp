#include <bits/stdc++.h>
using namespace std;

#include "Invoice.h"

Invoice::Invoice(string xx,string yy,int zz,int aa)
{
    name1=xx;
    name2=yy;
    number=zz;
    price=aa;
}

void Invoice::setname1(string xx)
{
    name1=xx;
}

string Invoice::getname1()
{
    return name1;
}

void Invoice::setname2(string xx)
{
    name2=xx;
}

string Invoice::getname2()
{
    return name2;
}

void Invoice::setnumber(int xx)
{
    number=xx;
}

int Invoice::getnumber()
{
    return number;
}

void Invoice::setprice(int xx)
{
    price=xx;
}

int Invoice::getprice()
{
    return price;
}

int Invoice::getInvoiceAmount()
{
    if(price<=0||number<=0)
        return 0;
    return price*number;
}
