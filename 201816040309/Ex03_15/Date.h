
class Date
{
public:
   Date( int,int,int ); // constructor initializes balance
    void set_year(int);
    void set_month(int);
    void set_day(int);
    void displayDate();
    int get_year();
    int get_month();
    int get_day();
private:
   int month;
   int year;
   int day;
};
