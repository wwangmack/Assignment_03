#include <iostream>
#include "Invoice.h"
using namespace std;

Invoice::Invoice(string number,string discribe,int sale,int price)//define structor
{
    setNumber(number);
    setDiscribe(discribe);
    setSale(sale);
    setPrice(price);
}

void Invoice::setNumber(string num)//definr set and get functions
{

    Number=num;


}

void Invoice::setDiscribe(string dis)
{

    Discribe=dis;


}

void Invoice::setSale(int sal)

{
    if(sal>=0)
    Sale=sal;
    else
        Sale=0;
}

void Invoice::setPrice(int pri)

{
    if(pri>=0)
    Price=pri;
    else
        Price=0;
}

string Invoice::getNumber()
{
    return Number;
}

string Invoice::getDiscribe()
{
    return Discribe;
}

int Invoice::getSale()
{
    return Sale;
}

int Invoice::getPrice()
{
    return Price;
}

int Invoice::getInvoiceAmount()
{
    return Price*Sale;
}
