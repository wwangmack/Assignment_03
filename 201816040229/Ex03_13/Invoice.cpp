#include<iostream>

using namespace std;

#include "Invoice.h"

Invoice::Invoice(string number,string description, int sale, int price)
{
    setProductNumber(number);//initializes product number
    setProductDescription(description);//initializes product description
    setProductSale(sale);//initializes product sale
    setProductPrice(price);//initializes product price

}

void Invoice::setProductNumber(string number)
{
    productNumber=number;
}//functions to set the product number
string Invoice::getProductNumber()
{
    return productNumber;
}//functions retrieve the product number
void Invoice::setProductDescription(string description)
{
    productDescription=description;

}//functions to set the product description
string Invoice::getProductDescription()
{
    return productDescription;
}//functions to retrieve product description
void Invoice::setProductSale(int sale)
{
    if(sale>0)
    {
        productSale=sale;
    }
    else
    {
        productSale=0;
    }

}//functions to set the product sale
int Invoice::getProductSale()
{
    return productSale;
}//functions to retrieve the product sale
void Invoice::setProductPrice(int price)
{
    if(price>0)
    {
       productPrice=price;
    }
    else
    {
        productPrice=0;
    }
}//functions to set the price
int Invoice::getProductPrice()
{
    return productPrice;
}//functions to retrieve the price
int Invoice::getInvoiceAmount()
{
    int invoiceAmount=productPrice*productSale;
    return invoiceAmount;
}//functions to get invoice amount
