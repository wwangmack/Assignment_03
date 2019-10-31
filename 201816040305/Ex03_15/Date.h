#include <string>

class Date
{
public:
    //Declare functions
    Date(int , int , int) ;
    void setMounth(int);
    int getMounth();
    void setDay(int);
    int getDay();
    void setYear(int);
    int getYear();
    void DisplayDate();
private:// data member
    int Mounth ;
    int Day ;
    int Year ;
}; // end class Invoice

