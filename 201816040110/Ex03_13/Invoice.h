#include <string>
using namespace std;
class Invoice
{
public:
    explicit Invoice( string , string , int , int );
    void setNumber( string );
    void setDescription( string );
    void setSell( int );
    void setPrice( int );
    string getNumber();
    string getDescription();
    int getSell();
    int getPrice();
    int getInvoiceAmount();
    void display();
private:
    string number;
    string description;
    int sell;
    int price;
    int money;

};
