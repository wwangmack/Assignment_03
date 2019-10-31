#include <iostream>
#include <string>
#include "Invoice.h"

using namespace std;

// use the initialize list and set member function to the Constructor
Invoice::Invoice(string num, string des, int cnt, int pri) : id(num),
                                                             description(des)
{
    setCount(cnt);
    setPrice(pri);
}

// return this id
string Invoice::getId()
{
    return id;
}

// store this id
void Invoice::setId(string num)
{
    id = num;
}

//return thid description
string Invoice::getDescription()
{
    return description;
}

//store this description
void Invoice::setDescription(string des)
{
    description = des;
}

//return this count
int Invoice::getCount()
{
    return count;
}

//check and store this count
void Invoice::setCount(int cnt)
{
    if (cnt < 0) // ensure the count greater than zero
    {
        cout << "error count" << endl;
        count = 0;
    }
    else
        count = cnt;
}

//retutn price
int Invoice::getPrice()
{
    return price;
}

// check and store invoice's price
void Invoice::setPrice(int pri)
{
    if (pri < 0) // if arg pri less than zero ,show an error message
    {
        cout << "error price" << endl;
        price = 0;
    }
    else
        price = pri;
}

// return the Amount of this invoice
int Invoice::getInvoiceAmount()
{
    return getCount() * getPrice();
}