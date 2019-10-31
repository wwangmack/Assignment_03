
using namespace std;

class Date
{
public :
    explicit Date (int = 1 , int = 1 , int = 2000 );//define the date
    /* set function*/
    void setDate(int , int , int);
    void setDateYear( int );
    void setDateMonth( int );
    void setDateDay( int );
    /*get function*/
    int getDateYear();
    int getDateMonth();
    int getDateDay();
    /*declare display function*/
    void displayDate();
private :
    int year;
    int month;
    int day;
};//end date class
