#include <iostream>
#include<string>
using namespace std;
class Invoice
{
public :
    Invoice(string, string, int, int);
    void setcomponent_ID(string);
    void setcomponent_description(string);
    void setcomponent_salesvolume(int);
    void setcomponent_price(int);
    string getcomponent_ID();
    string getcomponent_description();
    int getcomponent_salesvolume();
    int getcomponent_price();
    int getInvoiceAmount();

private :
    string component_ID;
    string component_description;
    int    component_salesvolume;
    int    component_price;

};
