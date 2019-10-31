#include <iostream>
#include <string>
using namespace std;
//include the head File Date.h
#include "Date.h"

int main()
{
    //Initialization data
    Date date(11 , 1 , 2019);
    //Initialization Data and Test Error Value
    Date date1(19 , 1 , 2019);
    //display all messages
    date.DisplayDate() ;
    date1.DisplayDate() ;
} // end main
