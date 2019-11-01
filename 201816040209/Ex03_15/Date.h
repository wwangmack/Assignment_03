
#include <string> // program uses C++ standard string class
using namespace std;

class Date
{
public:
    Date(int,int,int);//constructor

    void setYear(int);//set functions
    void setMonth(int);
    void setDay(int);

    int getYear();//get functions
    int getMonth();
    int getDay();

    void displayDate();

private:
    int year;//data members
    int month;
    int day;

};
