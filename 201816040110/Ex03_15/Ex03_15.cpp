#include <iostream>

using namespace std;
#include "Date.h"
int main()
{
    int m,d,y;
    cin >> m>>d>>y;
    Date date( m , d ,y);
    date.displayDate();

    return 0;
}
