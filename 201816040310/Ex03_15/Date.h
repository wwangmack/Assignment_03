class Date
{
public:
    Date(int, int, int); // constructor
    void displayDate(); // show the Date
    void setDate(int, int, int); // set the Date
    void setMonth(int); // set Month
    void setDay(int); // set Day 
    void setYear(int); // set Year 
    int getMonth(); //  return Month
    int getDay(); // return Day
    int getYear(); // return Year

private:  // data member 
    int month;
    int day;
    int year;
};
