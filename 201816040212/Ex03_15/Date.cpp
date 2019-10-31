//
//  Invoice.cpp
//  ass3
//
//  Created by MacBook on 2019/10/31.
//  Copyright © 2019 MacBook. All rights reserved.
//
#include <iostream>
using namespace std;
#include "Date.h"

Date::Date(int yyy,int month,int day)
:year1(yyy),day(day)
{
    if(0<=month<=12)this->month=month;
    else this->month=1;
}
void Date::setyear(int x){
    year1=x;
}
int Date::getday(){
    return day;
}
void Date::setday(int x){
    day=x;
}
int Date::getyear(){
    return year1;
}
void Date::setmonth(int x){
    if(0<=x<=12)this->month=x;
    else this->month=1;
}
int Date::getmonth(){
    return month;
}
void Date::displayDate(){
    cout<<getyear()<<"/"<<getmonth()<<"/"<<getday()<<endl;
    }
