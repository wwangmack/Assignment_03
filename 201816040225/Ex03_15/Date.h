//define a Date class
using namespace std;
class Date//define a class of Date
{
public:

   Date(int,int,int);//class data style
    void setYear(int);//set a function of setyear
    int getYear();//set a function of getyear
    void setMonth(int);//set a function of setmonth
    int getMonth();//set a function of getmonth
    void setDay(int);//set a function of setday
    int getDay();//set a function of getday
    void displayDate(int,int,int);//set a function of displaydate


private://data members
    int Year;
    int Month;
    int Day;
};
