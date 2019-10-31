#include <iostream>
using namespace std;

#include "Invoice.h"

Invoice::Invoice(string sizes,string description,int sales, int price) //Define the Invoice constructor.
{
    setPartSize(sizes);
    setPartDescription(description);
	setPartSales(sales);
	setPartPrice(price);
}
void Invoice::setPartSize(string sizes)  //Define function for the partSise data member
{
	partSize = sizes;
}

string Invoice::getPartSize()
{
	return partSize;
}

void Invoice::setPartDescription(string description)
{
	partDescription = description;
}

void Invoice::setPartSales(int sales)
{
	partSales = sales;
}

void Invoice::setPartPrice(int price)
{
	partPrice = price;
}

string Invoice::getPartDescription()
{
	return partDescription;
}

int Invoice::getPartSales()
{
	return partSales;
}

int Invoice::getPartPrice()
{
	return partPrice;
}

int Invoice::getInvoiceAmount()  //Define the function for the InvoiceAmount
{
    int invoiceAmount;
	invoiceAmount = partSales * partPrice;
	if (invoiceAmount < 0 || partPrice < 0)
		invoiceAmount = 0;
    return invoiceAmount;
}

