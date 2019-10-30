// Lab 1: Date.h
// Definition of Date class.

class Date
{
public:
   Date(int,int,int); //constructor initializes year、month and day
   void setYear(int); //function to set the data of the year
   int getYear();// function to retrieve the data of the year
   void setMonth(int);//function to set the data of the month
   int getMonth();//function to retrieve the data of the month
   void setDay(int);//function to set the data of the day
   int getDay();//function to retrieve the data of the day
   void displayDate();// display the data
private:
   int Year;//difine year
   int Month;//difine month
   int Day;//difine day
};

