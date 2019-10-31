
using namespace std;

class Date
{
public:
    explicit Date(int,int,int);
    void setYear(int);//set the year
    int getYear()const;//get the year
    void setMonth(int);
    int getMonth()const;
    void setDay(int);
    int getDay()const;
    void displayDate(int,int,int);//adjust and test
private:
    int year;
    int month;
    int day;

};
