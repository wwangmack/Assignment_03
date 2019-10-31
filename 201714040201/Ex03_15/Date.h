//Date.h
class Date
{
public:
    Date(int ,int,int );//constructor date member initialization
    void setMonth(int);//function set date member of month
    void setDay(int Day);//function set date member of day
    void setYear(int Year);//function set date member of year
    int getMonth();//function get date member of month
    int getDay();//function get date member of day
    int getYear();//function get date member of year
    void disPlay();//output date information in format
private:
    int year;//save the year
    int month;//save the month
    int day;//save the day
};
