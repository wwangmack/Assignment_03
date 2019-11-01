#include <iostream>
#include "Date.h"
using namespace std;

int main()
{
    Date date_1(10,22,2019), date_2(15,22,2019);
    cout<<"Month: "<<date_1.getMonth()<<endl;
    cout<<"Day: "<<date_1.getDay()<<endl;
    cout<<"Year: "<<date_1.getYear()<<endl;
    date_1.displayDate();
    cout<<"\nMonth: "<<date_2.getMonth()<<endl;
    cout<<"Day: "<<date_2.getDay()<<endl;
    cout<<"Year: "<<date_2.getYear()<<endl;
    date_2.displayDate();
    return 0;
}
