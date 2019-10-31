#include <iostream>
#include <string>
#include <iomanip>
#include "Invoice.h" // include definitions of class Date
using namespace std;

int main()
{
    Invoice i1("sd1","big",2,30);
    Invoice i2("sd2","small",-10,30);

    cout<<setw(10)<<"商品零件号"<<setw(15)<<"商品描述"<<setw(15)<<"商品售出量"<<setw(15)<<"商品单价"<<setw(15)<<"总销售额"<<"\n"<<endl;

    i1.display();
    i2.display();
    cout << endl;
}
