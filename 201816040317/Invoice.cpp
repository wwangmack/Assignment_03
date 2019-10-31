#include <iostream>
#include <string>
using namespace std;

#include"Invoice.h"// include definition of class Invoice from Invoice.h

Invoice::Invoice(string number,string describe,int volume,int price)
{
    setNumber(number);
    setDescribe(describe);
    setSalesVolume(volume);
    setPrice(price);
}

void Invoice::setNumber(string n)
{
    number=n;
}//end function setNumber

string Invoice::getNumber()
{
    return number;
}//end function getNumber

void Invoice::setDescribe(string d)
{
    describe=d;
}//end function setDescribe

string Invoice::getDescribe()
{
    return describe;
}//end function getDescribe

void Invoice::setSalesVolume(int v)
{
    salesvolume=v;
}//end function setSalesVolume

int Invoice::getSalesVolume()
{
    return salesvolume;
}//end function getSalesVolume;

void Invoice::setPrice(int p)
{
    price=p;
}//end function setPrice

int Invoice::getPrice()
{
    return price;
}

int Invoice::getInvoiceAmount(int a,int b)
{
    int amount;
    if(a<0)
    {
        a=0;
    }
    if(b<0)
    {
        b=0;
    }
    amount=a*b;
    return amount;
}
