#include <string> // program uses C++ standard string class
using namespace std;

// Date class definition
class Date
{
public:
   Date(int month,int day,int year);
   void setyear(int year);
   int getyear();
   void setmonth(int month);
   int getmonth();
   void setday(int day);
   int getday();
   void displayDate();
private:
 int yearr,monthh,dayy;
}; // end class Date
