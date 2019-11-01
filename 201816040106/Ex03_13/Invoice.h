#include <iostream>
using namespace std;
class Invoice//声明类
{
private://声明为私有成员变量
    string partNumber;//零件号
    string partDescription;//零件描述
    int saleNumber;//商品售出量
    int price;//商品单价

public:
    Invoice(string, string, int, int);//声明构造函数
    void setPartNumber(string);
    void setPartDescription(string);
    void setPrice(int);
    void setSaleNumber(int);//声明各个成员变量的set函数
    string getPartNumber();
    string getPartDescription();
    int getPrice();
    int getSaleNumber();
    int getInvoiceAmount();//声明各个成员变量的get函数
};
