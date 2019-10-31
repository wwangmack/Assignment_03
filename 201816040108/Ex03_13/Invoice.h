#include <iostream>
#include<string>
using namespace std;
class Invoice
{
public :
    Invoice(string Nu,string De,int Sa,int Pr); //constructor initialize Invoice
    void setNumber(string Nu);
    void setSale(int Sa);
    void setDescription(string De);
    void setPrice(int Pr);
    string getNumber() const;
    int getSale() const;
    string getDescription() const;
    int getPrice() const;
    int getInvoiceAmount(int Pr,int Sale) const;
    void displayInvoice() const;
private:
    string number;
    string description;
    int sale;
    int price;
};
