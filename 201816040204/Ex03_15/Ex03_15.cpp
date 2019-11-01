// Exercise 3.15 Solution: Ex03_15.cpp
#include <iostream>
#include"Date.cpp"
using namespace std;

int main()
{
    Date Dare(11, 11, 2019);
    cout << Date.getMonth() <<endl;
    cout << Date.setDay() <<endl;
    cout << Date.getYear() <<endl;
    cout << Date.getdisplayDate() <<endl;
}
