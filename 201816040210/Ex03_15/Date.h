#ifndef DATE_H_INCLUDED
#define DATE_H_INCLUDED

class Date
{
public:
    Date( int=1,int=1,int=1 );//constructor function
    void setYear( int );//function to set year
    int getYear();//function to get year
    void setMonth( int );//function to set month
    int getMonth();//function to get month
    void setDay( int );//function to set day
    int getDay();//function to get day
    void displayDate();//function to display date
private:
    int Year;
    int Month;
    int Day;
};//end class

#endif // DATE_H_INCLUDED
