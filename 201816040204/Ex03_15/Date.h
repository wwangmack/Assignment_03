// Exercise 3.15 Solution: Date.h
#include <string>

using namespace std;

{
public:
    Date(int, int, int);
    void setMonth(int);
    void setDay(int);
    void setYear(int);
    int getMonth();
    int getDay();
    int getYear();
    int getdisplayDate();

private:
    int Month;
    int Day;
    int Year;
}
