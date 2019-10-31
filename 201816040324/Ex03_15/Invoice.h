

#include <string> // program uses C++ standard string class
using namespace std;

// Employee class definition
class Invoice
{
public:
   Invoice (int,int, int);/* Declare a constructor that has one parameter for each data member */
   void setyear(int);
   void setmonth(int);
   void setday(int) ;
   int getyear()const;/* Declare a get method for the employee's first name */
   int getmonth()const;
   int getday () const ;
   void display () ;
private:
   int year ;
   int month;
   int day ;/* Declare an int data member for the employee's monthly salary */
}; // end class Employee
