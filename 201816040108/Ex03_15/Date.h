#include<iostream>

using namespace std;

class Date
{
public:
    explicit Date(int ,int ,int );//constructor initialize Date
    void displayDate();
    void setmonth(int );
    void setday(int );
    void setyear(int );
    int getmonth();
    int getday();
    int getyear();
private:
    int month;
    int day;
    int year;
};
