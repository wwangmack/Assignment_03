#include <string>

using namespace std;

class Invoice
{
public:
    Invoice(string, string, int, int);
    string getId();
    void setId(string);
    string getDescription();
    void setDescription(string);
    int getCount();
    void setCount(int);
    int getPrice();
    void setPrice(int);

    int getInvoiceAmount();

private:
    string id;
    string description;
    int count;
    int price;
};
