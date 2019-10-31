
#include <string>
using namespace std;
class Date
{
public:
    explicit Date(int a,int b,int c);
    void setdate(int a,int b,int c);
    void displayDate()const;
    void setmonth(int a);
    void setday(int b);
    void setyear(int c);
    int getmonth();
    int getday()const;
    int getyear()const;


private:
    int month;
    int day;
    int year;
};
