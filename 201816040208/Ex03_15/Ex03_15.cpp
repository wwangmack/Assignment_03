#include <iostream>
#include"Date.h"
using namespace std;

int main()
{
    Date date(6, 29, 2000); //定义类并初始化
    int month, day, year;

    cout << "Initial message is: ";
    date.displayMessage();
    cout << endl;
    cout << "Please enter the new month: ";
    cin >> month;
    cout << "Please enter the new day: ";
    cin >> day;
    cout << "Please enter the new year: ";
    cin >> year;

    date.setDateDay(day);       //设定日
    date.setDateMonth(month);   //设定年
    date.setDateYear(year); //设定年

    cout << endl;
    cout << "The new message is: ";
    date.displayMessage();


    return 0;
}
