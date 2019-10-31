
#include <iostream>

using namespace std;

#include "invoice.h"

 Invoice::Invoice(string number,string describe,int count_1,int price)
 {
    set_product_number(number);
    set_product_describe(describe);
    set_product_count(count_1);
    set_product_price(price);

 }
 void Invoice::set_product_count(int count_1)
 {
     if(count_1>0)
        product_count = count_1;
    else
        product_count = 0;
 }
void Invoice::set_product_describe(string describe)
 {
    product_describe = describe;
 }
 void Invoice::set_product_number(string number)
 {
    product_number = number;
 }
void Invoice::set_product_price(int price)
{
    if(price>0)
        product_price = price;
    else
        product_price = 0;
}
int Invoice::get_product_count()
{
    return product_count;
}
string Invoice::get_product_describe()
{
    return product_describe;
}
string Invoice::get_product_number()
{
    return product_number;
}
int Invoice::get_product_price()
{
    return product_price;
}
int Invoice::getInvoiceAmount()
{
    return product_count*product_price;
}
