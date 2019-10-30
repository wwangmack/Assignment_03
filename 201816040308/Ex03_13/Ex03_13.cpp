#include <bits/stdc++.h>
using namespace std;

#include "Invoice.h"

int main()
{

   Invoice Invoice1("Bob","Jones",10,10);
   Invoice Invoice2("Susan","Baker",20,20);

   cout<<"Invoice 1: "<<Invoice1.getname1()<<' '<<Invoice1.getname2()<<" "<<Invoice1.getnumber()<<' '<<Invoice1.getprice()<<' '<<Invoice1.getInvoiceAmount()<<endl;
   cout<<"Invoice 2: "<<Invoice2.getname1()<<' '<<Invoice2.getname2()<<" "<<Invoice2.getnumber()<<' '<<Invoice2.getprice()<<' '<<Invoice2.getInvoiceAmount()<<endl<<endl;;

}


