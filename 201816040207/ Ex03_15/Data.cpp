#include<iostream>
#include<string>//导入库
#include"Data.h"//导入data.h

using namespace std;

Data::Data(int year, int month,int day)
{
    setData(year,month,day);//赋值
    judgeData();
}
void Data::setData(int year, int month,int day)
{
    yeardata = year;
    monthdata = month;
    daydata = day;
}
void Data::displayData()
{
    cout<<yeardata<<"/"<<monthdata<<"/"<<daydata<<endl;//打印结果
}
void Data::judgeData()//判断月份是否超出
{
    if(monthdata>12||monthdata<1)
    {
        monthdata = 1;
    }

}



