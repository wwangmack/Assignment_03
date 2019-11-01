using namespace std;
class Employee
{
public://公有成员函数
    Employee(int , int , int);
    void setYear(int);
    int getYear();
    void setMonth(int);
    int getMonth();
    void setDay(int);
    int getDay();
    void displayDate();
private://私有数据成员
    int year;
    int month;
    int day;
};
