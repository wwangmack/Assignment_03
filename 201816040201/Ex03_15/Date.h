//#include<bits/bits/stdc++.h>
//using namespace std;
class Date
{
public:
    Date(int=1,int=1,int=1 );///初始化
    void setdate(int,int,int );///设定
   void setday(int );///修改日期
    void setmonth(int);///修改月份
    void setyear(int );///修改年份
    int getmonth();///显示月
    int getday();///显示日期
    int getyear();///显示年份
    void display();///显示
private:
    int day,month,year;///定义日，月，年

};
