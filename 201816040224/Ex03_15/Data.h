// Lab 3: Data.h
// Data class definition.

#include <string> // program uses C++ standard string class
using namespace std;

// Data class definition
class Data//创立一个名为data的类 
{
public:
    Data(int ,int ,int );

   void setMonth(int);

   int getMonth();

   void setDay(int);

   int getDay();

   void setYear(int);

    int getYear();

   int displayData();

private:
   int datamonth;

   int dataday;

   int datayear;

}; // end class data
