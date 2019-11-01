// Date class definition.

#include <string> // program uses C++ standard string class
using namespace std;

// Date class definition
class Date
{
public:
    Date( int,int,int);
   void setMonth(int); // function to set the month
   int getMonth(); // function to retrieve the month
   int getDay ();
   void setDay( int );
   void setYear( int );
   int getYear();
   void displayDate();
private:
    int Month;//Declare a int data member for the month
    int Day;
    int Year;
};//end class Date
