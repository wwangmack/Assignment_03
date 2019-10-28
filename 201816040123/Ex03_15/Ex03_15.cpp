#include <iostream>
#include <iomanip>
#include "Date.h" // include definitions of class Date
using namespace std;

int main()
{
   Date d1( 15, 6,234 );
   Date d2( 2, 4, -2 );
   Date d3( 11, 14, 2004 );
   Date d4( 4, 34, 2004 );
   Date d5;// instantiate object d of class Date
   // output Date object d's value
   cout <<setw(5)<< "month" << " "<<'/'<<setw(5) << "day"<< " " << '/'<<setw(5) << "year"<< "\n" << endl;
      d1.displayDate(); // invokes function print
      d2.displayDate();
      d3.displayDate();
      d4.displayDate();
      d5.displayDate();
   cout << endl;
} // end main
