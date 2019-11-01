using namespace std;


class Date
{
public:
    Date(int,int,int);
    void setYear(int);//functions to set year
    int getYear(int)//function to retrieve year
    void setMonth(int);//functions to set month
    int getMonth(); //functions to retrieve month
    void setDay(int);//functions to set day
    int getDay();// functions to retrieve day
    void displayDate();
private:
    int Year;//year for date
    int Month;//month for date
    int Day;//day for date
};
