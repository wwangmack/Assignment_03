
#include <iostream>
using namespace std;
#include<string>

#include "Invoice.h"
int main()
{
    Date date(200,222,222);
    cout<<"  YEAR:  "<<date.getcyear()<<"  MOUTH:  "<<date.getcmouth()<<"  DAY:  "<<date.getcday()<<endl;
     cout<<date.displayDate()<<endl;
}
