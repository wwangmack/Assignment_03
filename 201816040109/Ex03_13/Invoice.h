#include <string>

using namespace std;

class Invoice {
public:
    Invoice(string number, string description, int sales, int price);

    void setPartNumber(string number);

    string getPartNumber();

    void setPartDescription(string description);

    string getPartDescription();

    void setProductSales(int sales);

    int getProductSales();

    void setCommodityPrice(int price);

    int getCommodityPrice();

    int getInvoiceAmount();

private:
    string partNumber;
    string partDescription;
    int productSales;
    int commodityPrice;
};
