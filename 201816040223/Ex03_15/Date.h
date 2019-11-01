#include <string>
using namespace std;
class Date
{
public:
    Date(int,int,int);
        void setcyear(int);
    int getcyear();
    void setcmouth(int);
    int getcmouth();

        void setcday(int);
        int getcday();

      int displayDate();
private:
   int year;
    int mouth;
    int day;

};
