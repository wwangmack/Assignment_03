#include <iostream>
using namespace std;
// Date class definition.
class Date
{
public:
    explicit Date(int , int , int ); //constructor initializes month, day and year
    void setMonth(int ); //function to set the month
    int getMonth() const; //function to get the month
    void setDay(int ); //function to set the day
    int getDay() const; //function to get the day
    void setYear(int ); //function to set the year
    int getYear() const; //function to get the year
    void displayDate() const; //display the month ,day and year
private:
    int Month; // month for this Date
    int Day; // day for this Date
    int Year; // year for this Date
};

