using namespace std;
class Date//定义Date类
{
private:
    int month;
    int year;
    int day;//声明为私有成员变量

public:
    Date(int, int, int);
    void setMonth(int);
    int getMonth();
    void setDay(int);
    int getDay();
    void setYear(int);
    int getYear();//声明各个成员变量对应的set函数与get函数
    void displayDate();//声明展示函数
};
