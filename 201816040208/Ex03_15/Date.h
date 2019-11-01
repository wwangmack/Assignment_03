class Date
{
public:
    explicit Date(int, int, int);
    void setDateMonth(int month);
    int getDateMonth();
    void setDateDay(int day);
    int getDateDay();
    void setDateYear(int year);
    int getDateYear();
    void displayMessage();

private:
    int dateMonth, dateDay, dateYear;
};
