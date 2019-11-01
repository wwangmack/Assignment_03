#ifndef INVOICE_H_INCLUDED
#define INVOICE_H_INCLUDED


#include <string> // program uses C++ standard string class
using namespace std;

// Employee class definition
class Date
{
   public:
        /* Declare a constructor that has one parameter for each data member */
       Date(unsigned int,unsigned int,unsigned int);//end function Date

       void setmonth(unsigned int);

       unsigned int getmonth();

       void setday(unsigned int);

       unsigned int getday();

       void setyear(unsigned int);

       unsigned int getyear();

       void displaymessage();

   private:
        /* Declare a string data member for the Date's month */
        unsigned int Month;
        /* Declare a string data member for the Date's day*/
        unsigned int Day;
        /* Declare a string data member for the Date's year*/
        unsigned int Year;

};
#endif // INVOICE_H_INCLUDED
