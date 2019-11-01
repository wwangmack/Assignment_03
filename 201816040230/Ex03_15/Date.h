
using namespace std;
class Date
{
public:
    Date(int,int,int);//定义构造函数
    void setMonth(int);//月的set函数
    int getMonth();//月的get函数
    void setDay(int);//日的set函数
    int getDay();//日的get函数
    void setYear(int);//年的set函数
    int getYear();//年的get函数
    void displayDate();//输出数据
private:
    int month;
    int day;
    int year;
};
