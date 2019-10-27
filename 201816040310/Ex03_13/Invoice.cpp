#include <iostream>
#include <string>
#include "Invoice.h"

using namespace std;

Invoice::Invoice(string num, string des, int cnt, int pri) : id(num),
                                                             description(des)
{
    if (cnt < 0)
    {
        cout << "error count" << endl;
        count = 0;
    }
    else
        count = cnt;

    if (pri < 0)
    {
        cout << "error price" << endl;
        price = 0;
    }
    else
        price = pri;
}

string Invoice::getId()
{
    return id;
}
void Invoice::setId(string num)
{
    id = num;
}
string Invoice::getDescription()
{
    return description;
}
void Invoice::setDescription(string des)
{
    description = des;
}
int Invoice::getCount()
{
    return count;
}
void Invoice::setCount(int cnt)
{
    if (cnt < 0)
    {
        cout << "error count" << endl;
        count = 0;
    }
    else
        count = cnt;
}
int Invoice::getPrice()
{
    return price;
}
void Invoice::setPrice(int pri)
{
    if (pri < 0)
    {
        cout << "error price" << endl;
        price = 0;
    }
    else
        price = pri;
}

int Invoice::getInvoiceAmount()
{
    return getCount() * getPrice();
}