#include <iostream>
using namespace std;

#include "Invoice.h" // include definition of class Invoice

 Invoice::Invoice(string id,string description)
 {
     setID(id);
     setDescription(description);

 }

 void Invoice::setID(string name)
 {
     id=name;
 }

 string Invoice::getID()
 {
     return id;
 }

 void Invoice::setDescription(string name)
 {
     description=name;
 }

 string Invoice::getDescription()
 {
     return description;
 }

 void Invoice::setPrice(int n)
 {
     if(n>0)
        price=n;
     else
        price=0;
 }

 int Invoice::getPrice()
 {
     return price;
 }

 void Invoice::setSales(int n)
 {
     if(n>0)
        sales=n;
     else
        sales=0;
 }

 int Invoice::getSales()
 {
     return sales;
 }

int Invoice::getInvoiceAmount()
{
    return sales*price;
}
