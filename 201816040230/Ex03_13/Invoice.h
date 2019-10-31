#include <string>
using namespace std;
class Invoice
{
    public:
    Invoice (string,string,int,int);//定义构造函数
    void setPartNumber(string);//零件号的set函数
    string getPartNumber();
    void setPartDescription(string);//零件描述的set函数
    string getPartDescription();
    void setCommoditySales(int);//商品售出量的set函数
    int getCommoditySales();
    void setCommodityPrice(int);//商品单价的set函数
    int getCommodityPrice();
    int getInvoiceAmount();//计算发票额
    void displayMessage();//输出
    private:
        string partNumber;
        string partDescription;
        int commoditySales;
        int commodityPrice;
};
