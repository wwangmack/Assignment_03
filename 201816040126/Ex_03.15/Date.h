#include <string> // program uses C++ standard string class
using namespace std;

// Date class definition
class Date
{
public:
    Date(int , int , int );
    void setMonth( int );// function to set the month.
    int getMonth();// function to get the month
    void setDay( int );// function to set the day
    int getDay();// function to get the day
    void setYear( int  );// function to set the year
    int getYear();// function to get the year
    void displayDate();//function to display the date

private:
    int Month;
    int Day;
    int Year;
}; // end class date
