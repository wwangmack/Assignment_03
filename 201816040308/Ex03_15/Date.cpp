#include <bits/stdc++.h>
using namespace std;

#include "Date.h"

Date::Date(int xx,int yy,int zz)
{
    year=xx;
    if(yy>=1&&yy<=12)
        month=yy;
    else
        month=1;
    day=zz;
}

void Date::setyear(int xx)
{
    year=xx;
}

int Date::getyear()
{
    return year;
}

void Date::setmonth(int xx)
{
    month=xx;
}

int Date::getmonth()
{
    return month;
}

void Date::setday(int xx)
{
    day=xx;
}

int Date::getday()
{
    return day;
}

int Date::displayDate()
{
    cout<<year<<'/'<<month<<'/'<<day<<endl;
}
