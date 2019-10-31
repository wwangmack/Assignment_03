#include <string> // program uses C++ standard string class
using namespace std;

// Date class definition
class Date
{
public:
   Date(int,int,int);
   //Declare a constructor that has one parameter for each data member
   void setYearNumber(int );
   // method to set the Date's year
   int getYearNumber();
   // method to get the Date's year
   void setMonthNum(int );
   // method to set the Date's month
   int getMonthNum();
   // method to get the Date's month
   void setDayNu(int);
   // method to set the Date's day
   int getDayNu();
   // method to get the Date's day
   void displayDate();
   //display date
private:
    int yearNumber;
   // string data member for the Date's year
    int monthNum;
   //string data member for the Date's month
    int dayNu;
   //int data member for the Date's day
}; // end class Date
