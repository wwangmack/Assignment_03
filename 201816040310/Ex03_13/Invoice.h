#include <string>

using namespace std;

class Invoice
{
public:
    Invoice(string, string, int, int); // constructor Invoice
    string getId(); // return Invoice's id 
    void setId(string); // set Invoice's id
    string getDescription(); // return the Invoice's description
    void setDescription(string); // set the Invoice's description
    int getCount(); // return this object's conunt 
    void setCount(int); // set this object's conut
    int getPrice(); //return price
    void setPrice(int); //set price

    int getInvoiceAmount(); // return the InvoiceAmount 

private:
    string id; // Invoice's id 
    string description; // Invoice's details
    int count; // the number of this invoice
    int price; // the prise of this invoice
};
