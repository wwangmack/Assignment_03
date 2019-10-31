#include <iostream>
#include "Date.h"

using namespace std;

int main()
{
    Date date1,date2(1),date3(1,1),date4(1,1,1);// four types of Date objects
    cout <<"date1 = :";
    date1.displayDate();
    cout <<endl<<"date2 = :";
    date2.displayDate();
    cout <<endl<<"date3 = :";
    date3.displayDate();
    cout <<endl<<"date4 = :";
    date4.displayDate();
    cout <<endl;
    return 0;
}
