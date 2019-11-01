
#include <iostream>
using namespace std;

#include "Date.h"

int main()
{
    Date a( 2018,6,6 );//a is a Date
    Date b( 2019,13,21 );//b is a Date

    //print a and b by displayDate function
    cout<<"print by displayDate function :"<<endl;
    cout<<"Date a:"<<' ';
    a.displayDate();
    cout<<"Date b:"<<' ';
    b.displayDate();

    //print a and b by get function
    cout<<"print by get function :"<<endl;
    cout<<"Date a:"<<' '<<a.getMonth()<<"/"<<a.getDay()<<"/"<<a.getYear()<<endl;
    cout<<"Date b:"<<' '<<b.getMonth()<<"/"<<b.getDay()<<"/"<<b.getYear()<<endl;

    //set a and b
    a.setMonth( 15 );//error example
    b.setYear( 2017 );
    b.setMonth( 5 );
    b.setDay( 1 );

    //print a and b after set
    cout<<"\n\n"<<"Date a:"<<' ';
    a.displayDate();
    cout<<"Date b:"<<' ';
    b.displayDate();

}
