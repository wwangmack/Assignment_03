#include <string>
using namespace std;
class Invoice
{
public:
    Invoice(string,string,int,int);   //为每个数据成员声明一个具有一个参数的构造函数
    void setInvoiceId(string);     //为商品的零件号声明set函数
    string getInvoiceId();        //为商品的零件号声明get函数
    void setInvoiceDescription(string);   //为商品的描述声明set函数
    string getInvoiceDescription();       //为商品的描述声明get函数
    void setInvoiceSales(int);           //为商品的售出量声明set函数
    int getInvoiceSales();               //为商品的售出量声明get函数
    void setInvoicePrince(int);         //为商品的价格声明set函数
    int getInvoicePrince();             //为商品的价格声明get函数
    int getInvoiceAmount();             //声明一个计算发票额的函数
    void displayMessage();             //声明一个输出函数
private:
    string InvoiceId;           //为商品的零件号声明字符串型数据成员
    string InvoiceDescription;    //为商品的描述声明字符串型数据成员
    int InvoiceSales;            //为商品的售出量声明整型数据成员
    int InvoicePrince;         //为商品的价格声明整数型数据成员
};
