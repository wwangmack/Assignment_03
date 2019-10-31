#include <iostream>
using namespace std;

// include definition of class Invoice from Invoice.h
#include "Invoice.h"

Invoice::Invoice( string part, string descripe,int number,int money)
{
   setPart(part);
   setDescripe( descripe);
   setNumber(number);
   setMoney(money);
   getInvoiceAmount(number,money);
} //end of  constructor


void Invoice::setPart( string name )               // function to set the part
{
   commPart = name;
}

void Invoice::setDescripe( string miao)           // function to set the descriope
{
    commDescripe=miao;
}
void Invoice::setNumber(int liang)              // function to set the number
{
    if(liang<=0)
        liang=0;
    commNumber=liang;
}

void Invoice::setMoney(int salary)             // function to set the money
{
    if(salary<=0)
        salary=0;
    commMoney=salary;

}
string Invoice::getPart()                   //function to retrieve the part
{

   return commPart;
}

string Invoice::getDescripe()               //function to retrieve the descripe
{
   return commDescripe;
}

int Invoice::getNumber()                   //function to retrieve the number
{
    return commNumber;
}

int Invoice::getMoney()               //function to retrieve the money
{
    return commMoney;
}

int  Invoice::getInvoiceAmount(int number, int money)
{
    commamount=number*money;
    return commamount;
}

void Invoice::displayMessage()
{
   cout << "Part: " << getPart() << endl;
   cout << "Descripe: " << getDescripe()<< endl;
   cout << "Number: "<<getNumber()<<endl;
   cout <<  "Money: "<<getMoney()<<endl;
   cout <<  "Amount: "<< commamount<<endl;
} // end function displayMessage
