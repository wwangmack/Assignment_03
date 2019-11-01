#include <string> // program uses C++ standard string class
using namespace std;

// Date class definition
class Date
{
public:
   // constructor initializes course name and instructor name
   Date( int,int,int);

   void setDay( int);  // function to set the day
   int getDay(); // function to retrieve the day

   void setMonth(int); // function to set the month
   int getMonth(); // function to retrieve the month

   void setYear(int);  // function to set the year
   int getYear(); // function to retrieve the year

   void displayDate();
private:
   int day1,month1,year1;
}; // end class GradeBook
