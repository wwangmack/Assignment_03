// Lab 1: Invoice.cpp
// Member-function definitions for class Invoice.
#include <iostream>
using namespace std;

#include "Invoice.h"
Invoice::Invoice(int number,string descripion,int amount,int price)
   :Number(number),Describe(descripion),Amount(amount),Price(price)
   {
   }
   void Invoice::setNumber(int  number)//function of setnumber
   {
       Number=number;
   }
   int Invoice::getNumber()//function of getnumber
   {
       return Number;
   }
   void Invoice::setDescribe(string description)//function of setdescribe
   {
       Describe=description;
   }
   string Invoice::getDescribe()//function of getdescribe
   {
       return Describe;
   }
   void Invoice::setAmount(int amount)//function of setamount
   {
       Amount=amount;
   }
   int Invoice::getAmount()//function of getamount
   {
       return Amount;
   }
   void Invoice::setPrice(int price)//function of setprice
   {
       Price=price;
   }
   int Invoice::getPrice()//function of getprice
   {
       return Price;
   }
   void Invoice::getInvoiceAmount()//function of gettotal
   {
       total=Price*Amount;
   }
