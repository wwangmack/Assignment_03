#ifndef DATE_H_INCLUDED
#define DATE_H_INCLUDED

// class definition
class Date
{
private:
    int year;//year for the Date
    int month;//month for the Date
    int day;//day for the Date
public:
    Date();
    //constructor initializes year £¬month£¬day
    Date(int, int , int);
    void setYear(int);// function to set the year
    void setMonth(int);// function to set the month
    void setDay(int);// function to set the day
    int getYear();// function to retrieve the year
    int getMonth();// function to retrieve the month
    int getDay();// function to retrieve the day
    void displayDate();// display date
};


#endif // DATE_H_INCLUDED
