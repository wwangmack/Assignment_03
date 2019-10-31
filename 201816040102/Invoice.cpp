#include <iostream>
#include <string>
using namespace std;
#include "Invoice.h"

Invoice::Invoice(string Id,string Discrip,int Number,int Price)
{
	setId(Id);
	setDiscrip(Discrip);
	setNumber(Number);
	setPrice(Price);
}
void Invoice::setId(string id) 
{
	Id=id;
}
string Invoice::getId()
{
	return Id;
}
void Invoice::setDiscrip(string discrip)
{
	Discrip=discrip;
}
string Invoice::getDiscrip()
{
	return Discrip;
}
void Invoice::setNumber(int number)
{
	if(number>=0)
	{
		Number=number;
	}
	else
	{
		Number=0;
	}
}
int Invoice::getNumber()
{
	return Number;
}
void Invoice::setPrice(int price)
{
	if(price>=0)
	{
		Price=price;
	}
	else
	{
		price=0;
	}
}
int Invoice::getPrice()
{
	return Price;
}
int Invoice::getInvoiceAmount(int number,int price)
{
	int a;
	a=number*price;
	return a;
}
void Invoice::displayInvoice() //Show the performance of the Invoice class
{
    cout<<"零件号："<<getId()<<endl;
    cout<<"零件描述："<<getDiscrip()<<endl;
    cout<<"商品售出量："<<getNumber()<<"件"<<endl;
    cout<<"商品单价："<<getPrice()<<"元"<<endl;
    cout<<"发票额："<<getInvoiceAmount(getNumber(),getPrice())<<"元"<<endl;
}
