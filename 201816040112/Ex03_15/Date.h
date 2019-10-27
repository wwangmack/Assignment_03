#include<string>
using namespace std;

class Date
{
public:
    explicit Date(int,int,int);
    void setelday(int);
    void setelmonth(int);
    void setelyear(int);
    int getelday() const;
    int getelmonth() const;
    int getelyear() const;
    void display();
private:
    int elday,elmonth,elyear;

};

