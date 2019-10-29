#include <iostream>
#include "Invoice.h"
using namespace std;
//构造Invoice函数
Invoice::Invoice(string number, string describe, int sale, int price)
	:partNumber(number),partDescribe(describe),productSale(sale),productPrice(price)
		{
		}
//set 和 get函数
void Invoice::setPartNumber( string number )
{
	partNumber = number;
}

string Invoice::getPartNumber() const
{
	return partNumber;
}

void Invoice::setPartDescribe( string describe)
{
	partDescribe = describe;
}

string Invoice::getPartDescribe() const
{
	return partDescribe;
}

void Invoice::setProductSale(int sale)
{
	productSale = sale;
}

int Invoice::getProductSale() const
{
	return productSale;
}

void Invoice::setProductPrice(int price)
{
	productPrice = price;
}

int Invoice::getProductPrice() const
{
	return productPrice;
}
//计算商品总额
void Invoice::getInvoiceAmount()
{
	if(getProductSale()<0)
	{
		setProductPrice(0);
	}
	if(getProductPrice()<0)
	{
		setProductPrice(0);
	}

	cout << getProductSale()*getProductPrice() << endl;
}
