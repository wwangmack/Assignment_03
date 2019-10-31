#include<string>
using namespace std;
class Date
{
public:
    Date (int,int , int);// constructor initializes data
    void setAll(int,int , int );//function to set all the data
    void setMonth(int);//function to set the month
    int getMonth(); // function to retrieve the month
    void setDay(int);//function to set the day
    int getDay(); // function to retrieve the day
    void setYear(int);//function to set the year
    int getYear(); // function to retrieve the year
    void displayDate();//display Invoice's message
private:
    int month;//Date's month
    int day;//Date's day
    int year;//Date's year
};
