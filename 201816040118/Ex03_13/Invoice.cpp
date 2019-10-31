#include <iostream>
using namespace std;
#include "Invoice.h"
Invoice::Invoice(string id,string description,int sales,int price)//建立构造函数
{
    setInvoiceId(id);
    setInvoiceDescription(description);
    setInvoiceSales(sales);
    setInvoicePrince(price);            //初始化这4个变量
}
void Invoice::setInvoiceId(string Id)
 {
     InvoiceId=Id;               //把传递的Id赋值给InvoiceId
 }
string Invoice::getInvoiceId()
 {
     return InvoiceId;         //返回这个InvoiceId的值
 }
void Invoice::setInvoiceDescription(string Description)
{
      InvoiceDescription=Description;     //把传递的Description赋值给InvoiceDescription
}
string Invoice::getInvoiceDescription()
{
      return InvoiceDescription;    //返回这个InvoiceDescription的值
}
void Invoice::setInvoiceSales(int Sales)
{
    InvoiceSales=Sales;             //把传递的Sales赋值给 InvoiceSales
}
int Invoice::getInvoiceSales()
{
    return InvoiceSales;         //返回这个InvoiceSales的值
}
void Invoice::setInvoicePrince(int Price)
{
    InvoicePrince=Price;        //把传递的Price赋值给InvoicePrince
}
int Invoice::getInvoicePrince()
{
    return InvoicePrince;         //返回这个InvoicePrince的值
}
int Invoice::getInvoiceAmount()
{
    if(InvoiceSales<0)      //如果InvoiceSales小于0,把InvoiceSales置为0
    {
        InvoiceSales=0;
    }
    if(InvoicePrince<0)
    {
        InvoicePrince=0; //如果InvoicePrince小于0,把InvoicePrince置为0
    }
    return InvoicePrince*InvoiceSales;    //输出结果返回InvoicePrince和InvoiceSales的乘积
}
void Invoice::displayMessage()     //输出函数
{
    cout<<"零件号: "<<getInvoiceId()<<endl;
    cout<<"零件描述: "<<getInvoiceDescription()<<endl;
    cout<<"商品售出量: "<<getInvoiceSales()<<endl;
    cout<<"商品单价: "<<getInvoicePrince()<<endl;
    cout<<"发票额: "<<getInvoiceAmount()<<endl;
}
