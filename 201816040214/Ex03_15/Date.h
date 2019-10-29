class Date
{
public:
    //function and set ,get statement
    Date(int y, int m, int d);
    void setYear(int y);
    int getYear() const;
    void setMonth(int m);
    int getMonth() const;
    void setDay(int d);
    int getDay() const;
    void displayDate();
private:
    //define member
    int year;
    int month;
    int day;
};
