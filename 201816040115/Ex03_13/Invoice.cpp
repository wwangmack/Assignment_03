// Invoice.cpp
// Member-function definitions for class Invoice.

#include<iostream>
#include"Invoice.h"     //include definition of class invoice

//
Invoice::Invoice(string pn,string pd,int Num,int Price)
{
    setPN(pn);
    setPD(pd);
    setNum(Num);
    setPrice(Price);
}

//function to set part number
void Invoice::setPN(string pn)
{
    PN=pn;
}

//function to set part describe
void Invoice::setPD(string pd)
{
    PD=pd;
}

//function to set part sale number
//make sure Num > 0
void Invoice::setNum(int Num)
{
    if(Num>0)
    {
        num=Num;
    }
    else
    {
        num=0;
        cout << this->getPN() << " num format error,have been defaulted 0 " << endl;    //tips which part number's num format error
    }

}

//function to set part price
//make sure Price > 0
void Invoice::setPrice(int Price)
{
    if(Price>0)
    {
        price=Price;
    }
    else
    {
        price=0;
        cout << this->getPN() << " price format error,have been defaulted 0 " << endl;  //tips which part number's price format error
    }
}

////function to get part number
string Invoice::getPN() const
{
    return PN;
}

//function to get part describe
string Invoice::getPD() const
{
    return PD;
}

//function to get part sale number
int Invoice::getNum() const
{
    return num;
}

//function to get part price
int Invoice::getPrice() const
{
    return price;
}

//function to get total sales
int Invoice::getInvoiceAmount(int Num,int Price) const
{
    return (Num*Price);
}

//function to display commodity invoice information
//I use this pointer after previewing.
void Invoice::displayInvoice() const
{
    cout << "PN :" << this->getPN() << endl;
    cout << "PD :" << this->getPD() << endl;
    cout << "part number :" << this->getNum() << endl;
    cout << "part price :" << this->getPrice() << endl;
    cout << "Invoice Amount :" << this->getInvoiceAmount(this->getNum(),this->getPrice()) << endl;
    cout << endl;
}

