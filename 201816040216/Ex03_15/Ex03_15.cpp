#include <iostream>
using namespace std;

#include "Date.h" // include definition of class Date
int main()
{
   unsigned int month,day,year;
   cout<<"请输入月份；";
   cin>>month;
   cout<<"请输入日份：";
   cin>>day;
   cout<<"请输入年份：";
   cin>>year;
   Date date1(month,day,year);

   date1.displaymessage();

}
