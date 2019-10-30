#include<string>

class Data
{
public://相关函数
    Data(int year,int month,int day);
    void setData(int year,int month,int day);
    void displayData();
    void judgeData();


private://定义私有变量
    int yeardata;
    int monthdata;
    int daydata;
};



