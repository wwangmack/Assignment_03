#include <iostream>
using namespace std;
#include "Date.h"

int main()
{
    int year,month,day;
    Date date(1,1,2019);//initialize object

    cout<<"Please input the month"<<endl;//change the month
    cin>>month;
    date.setMonth(month);

    cout<<"Please input the day"<<endl;//change the day
    cin>>day;
    date.setDay(day);

    cout<<"Please input the year"<<endl;//change the year
    cin>>year;
    date.setYear(year);

    date.displayDate();//display date

}
