#include <iostream>

using namespace std;
#include"Date.h"
int main()
{
    Date date1(7,3,1999);//initializes data
    cout<<"Display date:\n\n";//prompt
    date1.displayDate();//display message
    cout<<"Changing month to 10,day to 31,year to 2019\n";//prompt
    cout<<"display again\n\n";//prompt
    date1.setAll(10,31,2019);//change
    date1.displayDate();//display message
    return 0;
}
