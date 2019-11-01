#include<iostream>
using namespace std;
#include "Date.h" // Employee class definition
int main()
{
 Date Test(12,19,2000);

 cout<<Test.getMonth()<<"/"<<Test.getDay()<<"/"<<Test.getYear()<<endl;
 return 0;
}
