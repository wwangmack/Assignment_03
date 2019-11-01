#include <iostream>
#include "Invoice.h"
using namespace std;

int main()
{
    Invoice Screw("screw","industrial necessity",300,3);
    cout<<"display all message\n";
    Screw.displayMessage();
    Screw.SetCommodityPrice(5);
    cout<<"after changing retail price to 5,display again\n";
    Screw.displayMessage();
    Screw.setQuantitySold(200);
    cout<<"after changing mount sold to 200,display again\n";
    Screw.displayMessage();
    return 0;
}
