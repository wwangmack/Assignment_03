#include <iostream>
#include"Invoice.h"
using namespace std;


int main()
{
    Invoice Invoice("","" , 0,0 );
    string number,discription;
    int sales,price;
   cout<<"零件号：";
    getline(cin,number);//输入零件号
    cout<<"零件描述：";
    getline(cin,discription);//输入零件描述
    cout<<"商品售出量：";
    cin>>sales;//输入售出量
    cout<<"商品单价：";
    cin>>price;//输入单价
    Invoice.setPartNumber(number);
    Invoice.setPartDescription(discription);
    Invoice.setCommoditySales(sales);
    Invoice.setCommodityPrice(price);
   Invoice.displayMessage();

}
