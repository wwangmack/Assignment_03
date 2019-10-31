#include <iostream>
#include"Invoice.h"
using namespace std;
Invoice::Invoice (string number,string description,int sales,int price)//定义构造函数
{
    setPartNumber(number);
    setPartDescription(description);
    setCommoditySales(sales);
    setCommodityPrice(price);
}
 void Invoice::setPartNumber(string partnumber)//零件号set函数
 {
     partNumber=partnumber;
 }
string Invoice::getPartNumber()//零件号get函数
{
    return partNumber;
}
void Invoice::setPartDescription(string partdescription)//零件描述set函数
{
    partDescription=partdescription;
}
string Invoice::getPartDescription()//零件描述get函数
{
    return partDescription;
}
void Invoice::setCommoditySales(int commoditysales)//商品售出量set函数
{
    commoditySales=commoditysales;
}
int Invoice::getCommoditySales()//商品售出量get函数
{
    return commoditySales;
}
void Invoice::setCommodityPrice(int commodityprice)//商品单价set函数
{
    commodityPrice=commodityprice;
}
int Invoice::getCommodityPrice()//商品单价get函数
{
    return commodityPrice;
}
int Invoice::getInvoiceAmount()//计算发票额
{
    if(commodityPrice<=0||commoditySales<=0)
        return 0;
    return commodityPrice*commoditySales;
}
void Invoice::displayMessage()//输出
{
int amount;
    cout<<"零件号："<<getPartNumber()<<"  零件描述："<<getPartDescription()<<"  商品售出量："<<getCommoditySales()
    <<"  商品单价："<<getCommodityPrice()<<endl;

    cout<<"消费总计："<<getInvoiceAmount()<<endl;
}
