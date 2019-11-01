#include<iostream>
#include<string>

#include"Invoice.h"//导入Invoice.h

using namespace std;

Invoice::Invoice(string number,string description,int sum,int price)//初始化函数
{
    setnumber(number);
    setdescription(description);
    setsum(sum);
    setprice(price);
}
void Invoice::setnumber(string number)//赋初始值number
{
    numberdata=number;

}
string Invoice::getnumber()//得到初始值number
{
    return numberdata;

}
void Invoice::setdescription(string description)//赋初始值description
{
    descriptiondata=description;

}
string Invoice::getdescription()//得到description
{

    return descriptiondata;
}
void Invoice::setsum(int sum)//初始化总数量
{
    sumdata=sum;
}
int Invoice::getsum()//得到总数量
{

    return sumdata;
}
void Invoice::setprice(int price)//初始化price
{
    pricedata=price;

}
int Invoice::getprice()//得到price
{

    return pricedata;

}
int Invoice::getInvoiceAmount(int buy)//售价与单价计算函数即销售计算函数
{
    if(buy<=0)
    {
        buy=0;

    }
    if(pricedata<=0)
    {
        pricedata=0;
    }

    return buy*pricedata;

}
