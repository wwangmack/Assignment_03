#include <iostream>
#include "headers.h"
using namespace std;

Invoice::Invoice(string number,string describe,int sales,int prices):
    elnumber(number),eldescribe(describe),elsales(sales),elprices(prices)
{

}//初始化函数
void Invoice::setelnumber(string number)
{
    elnumber=number;
}
void Invoice::seteldescribe(string describe)
{
    eldescribe=describe;
}
void Invoice::setelsales(int sales)
{
    elsales=sales;
}
void Invoice::setelprices(int prices)
{
    elprices=prices;
}
string Invoice::getelnumber() const
{
    return elnumber;
}
string Invoice::geteldiecribe() const
{
    return eldescribe;
}
int Invoice::getelsales() const
{
    return elsales;
}
int Invoice::getelprices() const
{
    return elprices;
}
