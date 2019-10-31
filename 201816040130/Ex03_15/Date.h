#include <string>
using namespace std;

// Date class definition
class Date
{
public:

   Date(int,int,int);  //Declare a constructor.
   void setDateYear(int);  //Declare methods
   int getDateYear();
   void setDateMonth(int);
   int getDateMonth();
   void setDateDay(int);
   int getDateDay();
private:
   int dateYear;   // Declare data members of the Date
   int dateMonth;
   int dateDay;
};
