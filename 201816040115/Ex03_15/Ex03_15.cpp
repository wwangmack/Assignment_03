//Ex03_15.cpp
//Create and manipulate Date objects
#include<iostream>
#include"Date.h"

int main()
{
    Date time1(12,9,1999);  //create a object including a normal month formal
    Date time2(13,1,2000);  //create a object including a unusual month formal

    //display each Date's information
    time1.displayDate();
    time2.displayDate();

}
