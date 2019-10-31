#include <iostream>
using namespace std;
#include "Date.h"
int main()
{
    int year;
    int month;
    int day;
    Date myDate(int,int,int);//object
    cout<<"Please enter the year: \n"<<endl;//input data
    cin>>year;
    cout<<"Please enter the month: \n"<<endl;//input
    cin>>month;
    cout<<"Please enter the day: \n"<<endl;//input
    cin>>day;
    cout<<"show the time is:"<<" "<<myDate.displayDate()<<endl;//the output style
}
