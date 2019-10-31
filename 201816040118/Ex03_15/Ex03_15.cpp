#include<iostream>
using namespace std;
#include "Date.h"
int main()
{
    Date date(2019,10,31); //创建一个对象并初始化
    date.dispalyDate();    //输出
    cout<<endl<<endl;
    int a,b,c;             //定义3个变量
    cout<<"输入新的年份: "<<endl;
    cin>>a;                //读取这个年份
    date.setDateYear(a);   //将这个年份传递给setDateYear函数初始化
    cout<<"输入新的月份: "<<endl;
    cin>>b;                //读取这个月份
    date.setDateMonth(b);   //将这个月份传递给setDateMonth函数初始化
    cout<<"输入新的日期: "<<endl;
    cin>>c;               //读取这个日期
    date.setDateDay(c);       //将这个日期传递给setDateDay函数初始化
    cout<<endl<<endl;
    date.dispalyDate();       //输出
}
