#include<string>
using namespace std;
class Date
{
public:
    Date(int,int,int);   //声明一个具有3个形参的构造函数
    void setDateMonth(int); //为月份声明一个set函数
    int getDateMonth(); //为月份声明一个get函数
    void setDateYear(int);//为年份声明一个set函数
    int getDateYear(); //为年份声明一个get函数
    void setDateDay(int); //为日期声明一个set函数
    int getDateDay();    //为日期声明一个get函数
    void dispalyDate();//声明一个输出函数
private:
    int DateMonth;   //为月份声明一个数据成员
     int DateYear;    //为年份声明一个数据成员
     int DateDay;    //为日期声明一个数据成员
};
