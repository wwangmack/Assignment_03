#include <string>

/*invoice class definition*/
class Invoice
{
public:
    explicit Invoice(std::string,std::string,int,int);//constructor initialize part number,part description,sales,price
    void setPartNumber(std::string);//sets the part name
    void setPartDescription(std::string);//sets the part description
    void setCommoditySales(int);//sets the commodity sales
    void setCommodityPrice(int);//sets the commodity price
    void setInvoiceAmount(int,int);//sets a invoice amount
    std::string getPartNumber() const;//gets the part number
    std::string getPartDescription() const;//gets the part description
    int getCommoditySales() const;//gets the commodity sales
    int getCommodityPrice() const;//gets the commodity price
    int getInvoiceAmount() const;//gets the invoice amount
private:
    std::string PartNumber;//part number for this invoice
    std::string PartDescription;//part description for this invoice
    int CommoditySales;//commodity sale for this invoice
    int CommodityPrice;//commodity price for this invoice
    int InvoiceAmount;//amount for this invoice
};
