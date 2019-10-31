#include <iostream>
#include "Date.h"
using namespace std;

int main()
{
    Date date1(10,30,2019);
    Date date2(99,1,2020);//Check data validity
    date1.displayDate();
    date2.displayDate();
    return 0;
}
