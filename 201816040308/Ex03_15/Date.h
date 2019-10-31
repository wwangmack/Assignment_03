#include <bits/stdc++.h>
using namespace std;

class Date
{
public:
   Date(int,int,int);
   void setyear(int);
   int getyear();
   void setmonth(int);
   int getmonth();
   void setday(int);
   int getday();
   int displayDate();
private:
   int year;
   int month;
   int day;
};
