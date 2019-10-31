#include <iostream>
#include"Date.h"

using namespace std;

int main()
{
    Date X(0,0,0);
    int a,b,c;
    cin>>a>>b>>c;
    X.setYear(a);
    X.setMonth(b);
    X.setDay(c);
    X.displayDate(X.getYear(),X.getMonth(),X.getDay());
    return 0;
}
