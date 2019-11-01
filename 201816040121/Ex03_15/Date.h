//Ex03_15:Date.h
//Date class definition

#include <string>//
using namespace std;

//Date class defition
class Date
{
public:
    //constructor year, month, day
    Date(int, int, int);
    void setYear(int);//fuction to set year
    int getYear();//fuction to retrieve year
    void setMonth(int);//fuction to set month;
    int getMonth();//fuction to retrieve month
    void setDay(int);//fuction to set day
    int getDay();//fuction to retrieve day
    void displayDate();//fuction to display the date messages
private:
    int year;//year forthis Date
    int month;//month for this Date
    int day;//day for this Date
};//end class Date
