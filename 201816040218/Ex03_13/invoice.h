#include <string>
using namespace std;

class Invoice
{
public:
    Invoice(string ,string ,int ,int );
    void setPartNumber(string);
    void setPartDescription(string);
    void setCommoditySold(int);
    void setCommodityPrice(int);
    string getPartNumber();
    string getPartDescription();
    int getCommoditySold();
    int getCommodityPrice();
    int getInvoiceAmount();
private:
    string PartNumber;
    string PartDescription;
    int CommoditySold;
    int CommodityPrice;

};
