#include <iostream>
#include "Date.h"
using namespace std;

int main()
{
  
    Date d(12, 24, 2004); // create a Date d use the constructor
    d.displayDate(); // show the date 
    d.setDate(13,2,2001); // change d to 13,2,2001
    d.displayDate(); // show the date changed
} 
