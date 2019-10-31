#include <iostream>
#include"Invoice.h"
#include<string>
using namespace std;

Invoice::Invoice(string id,string description,int salesvolume,int price)
{
    setcomponent_ID(id);
    setcomponent_description(description);
    setcomponent_salesvolume(salesvolume);
    setcomponent_price(price);
}

void Invoice::setcomponent_ID(string id)
{
    component_ID = id;
}

void Invoice::setcomponent_description(string description)
{
    component_description = description;
}

void Invoice::setcomponent_salesvolume(int salesvolume)
{
    if(salesvolume < 0)
        component_salesvolume = 0;
    else
        component_salesvolume = salesvolume;
}

void Invoice::setcomponent_price(int price)
{
    if(price < 0)
        component_price = 0;
    else
        component_price = price;
}

string Invoice::getcomponent_ID()
{
    return component_ID;
}

string Invoice::getcomponent_description()
{
    return component_description;
}

int Invoice::getcomponent_salesvolume()
{
    return component_salesvolume;
}

int Invoice::getcomponent_price()
{
    return component_price;
}

int Invoice::getInvoiceAmount()
{
    return  component_salesvolume*component_price;
}
