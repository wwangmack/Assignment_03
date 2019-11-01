#include <iostream>
using namespace std;
#include "Invoice.h"

Invoice::Invoice( string number, string expression, int sell, int price )
{
    setNumber(number);
    setExpression(expression);
    setSell(sell);
    setPrice(price);
}
void Invoice::setNumber(string name)
{
    number = name;
}
string Invoice::getNumber()
{
    return number;
}
void Invoice::setExpression(string name)
{
    expression = name;
}
string Invoice::getExpression()
{
    return expression;
}
void Invoice::setSell(int name)
{
    if(name > 0)
        sell = name;
    else
        sell = 0;
}
int Invoice::getSell()
{
    return sell;
}
void Invoice::setPrice(int name)
{
    if(name > 0)
        price = name;
    else
        price = 0;
}
int Invoice::getPrice()
{
    return price;
}
int Invoice::getInvoiceAmount()
{
    return price*sell;
}
