#include<iostream>
#include"Date.cpp"
using namespace std;
int main()
{
    Date Date1(2000,7,1);
    Date Date2(2000,13,1);//实例化出两个对象
    Date1.displayDate();
    Date2.displayDate();//对两个对象进行展示输出
    return 0;
}
