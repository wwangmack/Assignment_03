#include<iostream>
#include"Invoice.h"
using namespace std;
Invoice::Invoice(string Nu,string De,int Sa,int Pr)//constructor initialize Invoice
{
    setNumber(Nu);
    setDescription(De);
    setSale(Sa);
    setPrice(Pr);
}

void Invoice::setNumber(string Nu)
{
    number=Nu;
}

void Invoice::setDescription(string De)
{
    description=De;
}

void Invoice::setSale(int Sa)//Verify the validity of the data with the set function
{
    if(Sa>0)
    {
        sale=Sa;
    }
    else
    {
        sale=0;
    }
}

void Invoice::setPrice(int Pr)
{
    if(Pr>0)
    {
        price=Pr;
    }
    else
    {
        price=0;
    }
}

string Invoice::getNumber() const
{
    return number;
}

string Invoice::getDescription() const
{
    return description;
}

int Invoice::getSale() const
{
    return sale;
}

int Invoice::getPrice() const
{
    return price;
}

int Invoice::getInvoiceAmount(int Sa,int Pr) const
{
    return Sa*Pr;
}

void Invoice::displayInvoice() const//Show the performance of the Invoice class
{
    cout<<"零件号："<<getNumber()<<endl;
    cout<<"零件描述："<<getDescription()<<endl;
    cout<<"商品售出量："<<getSale()<<"件"<<endl;
    cout<<"商品单价："<<getPrice()<<"元"<<endl;
    cout<<"发票额："<<getInvoiceAmount(getSale(),getPrice())<<"元"<<endl;
}
