
#include <string>

using namespace std;

class Invoice
{
public:
    Invoice(string, string, int, int);
    void setProductNumber(string);//functions to set the product number
    string getProductNumber();//functions to retrieve the product number
    void setProductDescription(string);//functions to set the product description
    string getProductDescription();//functions to retrieve the product description
    void setProductSale(int);//functions to set the product sale
    int getProductSale();//functions to retrieve the product sale
    void setProductPrice(int);//functions to set the product price
    int getProductPrice();//functions to retrieve the product price

    int getInvoiceAmount();//functions to get invoice amount
private:
    string productNumber;//product number for invoice
    string productDescription;//product description for invoice
    int productSale;//product sale for for invoice
    int productPrice;//product price for invoice
    int invoiceAmount;//invoice amount for invoice
};
