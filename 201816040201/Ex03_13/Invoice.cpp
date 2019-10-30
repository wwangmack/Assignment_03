#include"Invoice.h"
#include<bits/stdc++.h>
using namespace std;
Invoice::Invoice(string first,string second,int one,int two)
{

    setevery(first,second,one,two);///初始化
}
void Invoice::setevery(string first,string second,int one,int two)
{
    setlingjianhao(first);///零件号
    setlingjianname(second);///零件名
    setnumber(one);///数量
    setmoney(two);///单价
}
void Invoice::setlingjianhao(string first)///修改零件号
{
    ljhao=first;
}
void Invoice::setlingjianname(string second)///修改零件名
{
    ljname=second;
}
void Invoice::setnumber(int one)///修改零件数
{

    if(one>=0)
    number=one;
    else
        number=0;

}
void Invoice::setmoney(int two)///修改单价
{
    if(two>=0)
    money=two;
    else
        money=0;

}
string Invoice::getlingjianhao()///输出零件号
{
    return ljhao;
}
string Invoice::getlingjianname()///输出零件名
{
    return ljname;
}
int Invoice::getnumber( )///输出数量
{
    return number;
}
int Invoice::getmoney( )///输出单价
{
    return money;
}
int Invoice::getinvoiceamount(int one,int two)///输出总额
{
    return one*two;
}
