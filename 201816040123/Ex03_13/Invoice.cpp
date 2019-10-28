#include <iostream>
#include <iomanip>
#include "Invoice.h" // include definition of class Date
using namespace std;

Invoice::Invoice( string a,string b,int c,int d)
{
    setlinJianHao(a);
    setmiaoShu(b);
    setshouChuLiang(c);
    setprice(d);
} // end Date constructor

void Invoice::setlinJianHao(string a)
{
    linJianHao=a;
} // end function setDate

void Invoice::setmiaoShu(string b)
{
     miaoShu=b;
}

void Invoice::setshouChuLiang(int c)
{
  if(c<0)
    shouChuLiang=0;
  else
    shouChuLiang=c;
} // end function getDay

void Invoice::setprice(int d)
{
   if(d<0)
    price=0;
  else
    price=d;
} // end function getDay

string Invoice::getlinJianHao()
{
    return linJianHao;
} // end function monthDays

string Invoice::getmiaoShu()
{
    return miaoShu;
} // end function monthDays

int Invoice::getshouChuLiang()
{
    return shouChuLiang;
} // end function monthDays

int Invoice::getprice()
{
    return price;
} // end function monthDays

int Invoice::getInvoiceAmount(int c,int d)
{
    return c*d;
}

void Invoice::display()
{
    cout<<setw(10)<<linJianHao<<setw(15)<<miaoShu<<setw(15)<<shouChuLiang<<setw(15)<<price<<setw(15)<<getInvoiceAmount(shouChuLiang,price)<<"\n"<<endl;
}
