#include <string>

/*Date class definition*/
class Date
{
public:
    explicit Date(int,int,int);//constructor initialize month,day,year
    void setMonth(int);//sets the month
    void setDay(int);//sets the day
    void setYear(int);//sets the year
    int getMonth() const;//gets the month
    int getDay() const;//gets the day
    int getYear() const;//gets the year
    void displayDate() const;
private:
    int month;//month for this date
    int day;//day for this date
    int year;//year for this date
};
