#include <iostream>
using namespace std;

#include"Invoice.h"

Invoice::Invoice(string num,string decripe,int pri,int sel)//initalization function
{
    setnumber(num);
    setdescripe(decripe);
    setprice(pri);
    setsell(sel);
}
void Invoice::setnumber(string num)//initalization number
{
    Number=num;
}
string Invoice::getnumber()//reciver number
{
    return Number;
}
void Invoice::setdescripe(string descripe)//initalization deacripe
{
    Descripe=descripe;
}
string Invoice::getdescripe()//reciver descripe
{
    return Descripe;
}
void Invoice::setprice(int pri)//initalization orice
{
    Price=pri;
}
int Invoice::getprice()//reciver price
{
    return Price;
}
void Invoice::setsell(int sel)//initalization sell
{
    Sell=sel;
}
int Invoice::getsell()//reciver sell
{
    return Sell;
}
int Invoice::getInvioceAmout()//all sellnount
{
    if(Sell<=0||Price<=0)
        return 0;
    else
        return Sell*Price;
}
void Invoice::display()//display all message
{
    cout<<getnumber()<<getdescripe()<<getprice()<<getsell();
    cout<<"The Amount is"<<getInvioceAmout()<<endl;
}
