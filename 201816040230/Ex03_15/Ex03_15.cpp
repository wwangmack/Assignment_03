#include <iostream>
using namespace std;
#include "Date.h"
int main()
{
    Date Date(0,0,0);
    int month,day,year;
    cout<<"月:";
    cin>>month;//输入月
    cout<<"日:";
    cin>>day;//输入日
    cout<<"年:";
    cin>>year;//输入年
    Date.setMonth(month);//将输入的月存进月的set函数
    Date.setDay(day);//将输入的日存进日的set函数
    Date.setYear(year);//将输入的年存进年的set函数
    Date.displayDate();
}
