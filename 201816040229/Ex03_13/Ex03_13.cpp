#include <iostream>

using namespace std;

#include "Invoice.h"

int main()
{
    Invoice invoice("01","clothes",10,100);//initialize number,description,sale,and price
    cout<<"product number"<<invoice.getProductNumber()<<endl;
    cout<<"product description"<<invoice.getProductDescription()<<endl;
    cout<<"product sale"<<invoice.getProductSale()<<endl;
    cout<<"product price"<<invoice.getProductPrice()<<endl;
    cout<<"product amount"<<invoice.getInvoiceAmount()<<endl;
    //output the product number ,description, sale, price, and amount
}
