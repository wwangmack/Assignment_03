#include <string>
using namespace std;


class Date
{
public:
   Date(int,int,int);
   /* Declare a set method for the 月 */
   void setMonth(int);
   /* Declare a get method for the 月 */
   int getMonth();
   /* Declare a set method for the 日 */
   void setDay(int);
   /* Declare a get method for the日 */
   int getDay();
   /* Declare a set method for the年 */
   void setYear(int);
   /* Declare a get method for the年 */
   int getYear();
private:
   /* Declare a  data member for the 月日年 */
   int Month;
   int Day;
   int Year;
}; // end class Employee
