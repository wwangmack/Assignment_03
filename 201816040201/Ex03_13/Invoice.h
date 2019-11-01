#include<bits/stdc++.h>
using namespace std;
class Invoice
{
    public :
    Invoice(string ,string ,int=0 ,int=0 );///初始化
    void setlingjianhao(string );///set零件号
    void setlingjianname(string );///set零件名
    void setnumber(int );///set数量
    void setmoney(int );///set单价
    string getlingjianhao( );///get零件号
    string getlingjianname( );///get///零件名
    int getnumber( );///get数量
    int getmoney( );///get单价
    int getinvoiceamount(int ,int );///计算发票额
    void setevery(string,string ,int ,int);///初始化
    private:
        string ljhao;///零件号
        string ljname;///零件名
        int number;///数量
        int money;///单价
//
};
