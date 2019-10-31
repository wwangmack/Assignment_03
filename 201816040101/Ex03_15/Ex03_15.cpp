#include <iostream>
#include "Date.h"
using namespace std;

int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    Date date(a,b,c);
    date.getmonth();
    date.getday();
    date.getyear();
    date.displayDate();

  return 0;
}
