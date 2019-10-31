
#include <iostream>
using namespace std;

#include "Invoice.h"

Invoice::Invoice(int year1,int item, int pric)
{
     setyear(year1);
     setmonth(item);
     setday(pric) ;
}


void Invoice:: setyear(int year1)
{
    year=year1;
}
void Invoice::setmonth(int item)
{
    if (item>=0&&item<=12)
    {
         month=item;
    }
    else
    {
         month=1;
    }
}
void Invoice::setday(int pric)
{
   day=pric;
}


int Invoice::getyear() const
{
    return year;
}
int Invoice::getmonth() const
{
    return month;
}
int Invoice::getday() const
{
    return  day;
}
void Invoice::display()
{
    cout<<getyear()<<"/"<<getmonth()<<"/"<<getday()<<"/" ;
}
