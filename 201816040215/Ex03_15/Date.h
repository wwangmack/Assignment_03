// assignment 3: Date.h
// Date class definition.

#include <string> // program uses C++ standard string class
using namespace std;

// Date class definition
class Date
{
public:
   Date ( int, int, int );/* Declare a constructor that has one parameter for each data member */
   void setMonth( int );/* Declare a set method for the month */
   int getMonth();/* Declare a get method for the month*/
   void setDay( int );/* Declare a set method for the day*/
   int getDay();/* Declare a get method for the day*/
   void setYear( int );/* Declare a set method for the year*/
   int getYear();/* Declare a get method for the year*/
   void displayDate();
private:
   int Month;/* Declare a int data member which is the month */
   int Day;/* Declare a int data member which is the day*/
   int Year;/* Declare an int data member which is the year*/
}; // end class Date
