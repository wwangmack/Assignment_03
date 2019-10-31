#include <iostream>
using namespace std;
class Date
{
public:
    explicit Date(int , int , int ); //constructor initializes month, day and year
    void setMonth(int ); //function to set the month
    int getMonth(); //function to get the month
    void setDay(int ); //function to set the day
    int getDay(); //function to get the day
    void setYear(int ); //function to set the year
    int getYear(); //function to get the year
    void displayDate(); //display the month ,day and year
private
     int year;//save the year
     int month;//save the month
     int day;//save the day
}
