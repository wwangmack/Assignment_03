//
//  main.cpp
//  ass3
//
//  Created by MacBook on 2019/10/28.
//  Copyright © 2019 MacBook. All rights reserved.
//

#include <iostream>
using namespace std;
class Invoice{
public:
    Invoice(int yyy,int month,int day)
    :year1(yyy),day(day)
    {
        if(0<=month<=12)this->month=month;
        else this->month=1;
    }
    void setyear(int x){
        year1=x;
    }
    int getday(){
        return day;
    }
    void setday(int x){
        day=x;
    }
    int getyear(){
        return year1;
    }
    void setmonth(int x){
        if(0<=x<=12)this->month=x;
        else this->month=1;
    }
    int getmonth(){
        return month;
    }
    void displayDate(){
        cout<<getyear()<<"/"<<getmonth()<<"/"<<getday()<<endl;
    }
private:
    int year1;
    int month;
    int day;
};

int main(int argc, const char * argv[]) {
    // insert code here...
    Invoice myin(2019,10,12);
    myin.displayDate();
}
