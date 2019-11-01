#include <iostream>
using namespace std;

#include "Invoice.h" // Employee class definition

/* Define the constructor. Assign each parameter value to the appropriate data
   member. Write code that validates the value of salary to ensure that it is
   not negative. */
   Invoice::Invoice(string number,string description,int quantity,int price)
   {
       setNum(number);
       setDes(description);
       setQuantity(quantity);
       setPrice(price);

   }
  //编号
  void Invoice::setNum(string number)
   {
      Num=number;
   }
   string Invoice::getNum()
   {
      return Num;
   }
   //描述
   void Invoice::setDes(string description)
   {
      Des=description;
   }
   string Invoice::getDes()
   {
      return Des;
   }
   //售出数量
   void Invoice::setQuantity(int q)
   {
    if(q>0)
     Quantity=q;
    else
     Quantity=0;
   }
   int Invoice::getQuantity()
   {
      return Quantity;
   }
   //单价
   void Invoice::setPrice(int p)
   {
   if(p>0)
    Price=p;
   else
    Price=0;
   }
   int Invoice::getPrice()
   {
      return Price;
   }
   //计算发票额
   int Invoice::GetInvoiceAmmount()
   {
      return Quantity*Price;
   }
