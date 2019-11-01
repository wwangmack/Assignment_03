// Lab 3: Data.cpp
// Create and manipulate two Employee objects.
#include <iostream>
using namespace std;

#include "Data.h" // include definition of class data

// function main begins program execution
int main()
{
    Data data(2,12,1999);
    cout<<"输出月日年"<<endl;
    cout<<data.getMonth()<<"/"<<data.getDay()<<"/"<<data.getYear()<<endl;//输出data

} // end main

