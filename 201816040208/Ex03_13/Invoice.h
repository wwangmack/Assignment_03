#include<string>

class Invoice
{
public:
    explicit Invoice (std:: string, std:: string, int, int);
    void setInvoiceName (std:: string);
    std:: string getInvoiceName();
    void setInvoiceDescription(std:: string);
    std:: string getInvoiceDescription();
    void setInvoiceSold(int);
    int getInvoiceSold();
    void setInvoicePrice( int);
    int getInvoicePrice();
    int getInvoiceAmount();
private:
    std:: string invoiceName, invoiceDescription;
    int invoiceSold, invoicePrice;
};
