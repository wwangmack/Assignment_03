#include <string> // program uses C++ standard string class
using namespace std;
class Date
{
public:
    Date(int,int,int);//initalization function
    void SetYear(int);//initalization year
    int GetYear();//reciver year
    void SetMonth(int);//initalization month
    int GetMonth();//reciver month
    void  SetDay(int);//initalization day
    int GetDay();//reciver 
    void DisPlay();//display all message
private:
    int year;
    int month;
    int day;
};
