#include <iostream>
#include"Invoice.h"
#include<string>
using namespace std;


int main()
{
    Invoice component1("00001","Halloween candy",100,1);
    Invoice component2("00002","Pumpkin Lantern",20,15);
    cout<<"This is your components:"<<endl<<endl;
    cout<<component1.getcomponent_ID()<<" "<<component1.getcomponent_description()<<" "<<component1.getcomponent_salesvolume()<<" "<<component1.getcomponent_price()<<" "<<"amount:"<<component1.getInvoiceAmount()<<endl;
    cout<<component2.getcomponent_ID()<<" "<<component2.getcomponent_description()<<" "<<component2.getcomponent_salesvolume()<<" "<<component2.getcomponent_price()<<" "<<"amount:"<<component2.getInvoiceAmount()<<endl;
    return 0;
}
