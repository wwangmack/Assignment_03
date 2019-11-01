// Lab 3: EmployeeTest.cpp
// Create and manipulate two Employee objects.
#include <iostream>
using namespace std;

#include "Invoice.h" // include definition of class Employee

// function main begins program execution
int main()
{
    int sellnumber,money;
    string part,discribe;
    cout <<"请输入商品名：";
    cin>>part;
    cout<<"请输入零件描述:";
    cin>>discribe;
    cout<<"请输入商品售出量:";
    cin>>sellnumber;
    cout<<"请输入商品单价:";
    cin>>money;


    Invoice invoice(part,discribe,sellnumber,money);
    invoice.setchange(sellnumber,money);

    cout<<"零件号："<<invoice.getpart()<<endl;
    cout<<"零件描述："<<invoice.getdiscribe()<<endl;
    cout<<"商品售出量："<<invoice.getsellnumber()<<endl;
    cout<<"商品单价："<<invoice.getmoney()<<endl;
    cout<<"发票额："<<invoice.getchange()<<endl;

} // end main


