//Date.h
//Definition of Date class

#ifndef DATE_H
#define DATE_H

class Date
{
public:
    explicit Date(int Month,int Day,int Year);  //constructor initialize Date information
    void setMonth(int Month);   //set month
    void setDay(int Day);       //set day
    void setYear(int Year);     //set year
    int getMonth() const;      //get month
    int getDay() const;        //get day
    int getYear() const;       //get year
    void displayDate() const;   //display date formal information
private:
    int month;
    int day;
    int year;
};
#endif // DATE_H
