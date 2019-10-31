#include <iostream>
using namespace std;
#include "Invoice.h"
int main()
{
    Invoice invoice("a","b",5,6);//定义一个对象并初始化
    invoice.displayMessage();
    cout<<endl<<endl;
    string a,b;//定义两个字符串
    int c,d;//定义两个整型变量
    cout<<"输入新的零件号: ";
    getline(cin,a); //读取第一个字符串
    invoice.setInvoiceId(a);//把第一个字符串传递给对象的setInvoiceId函数
    cout<<"输入新的零件描述: ";
    getline(cin,b);//读取第二个字符串
    invoice.setInvoiceDescription(b);//把第二个字符串传递给对象的setInvoiceDescription函数
    cout<<"输入新的商品售出量 :";
    cin>>c;//读取这个整数
    invoice.setInvoiceSales(c);//把这个整数传递给对象的setInvoiceSales函数
    cout<<"输入新的商品单价: ";
    cin>>d;//读取这个整数
    invoice.setInvoicePrince(d);//把这个整数传递给对象的setInvoicePrince函数
     cout<<endl<<endl;
    invoice.displayMessage();//把结果输出
}
