#include <iostream>

using namespace std;
#include "Employee.h"
int main()
{
    int a, b, c;
    cout <<"input the year, month and day:"<< endl;
    cin >> a >>b >>c;//输入年月日
    Employee employee(a, b, c);
    employee.setYear(a);//进行赋值
    employee.setMonth(b);
    employee.setDay(c);
    employee.displayDate();
    return 0;
}
