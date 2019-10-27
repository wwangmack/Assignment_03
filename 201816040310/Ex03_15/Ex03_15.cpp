#include <iostream>
#include "Date.h"
using namespace std;

int main()
{
  
    Date d(12, 24, 2004);
    d.displayDate();
    d.setDate(13,2,2001);
    d.displayDate();
} 
