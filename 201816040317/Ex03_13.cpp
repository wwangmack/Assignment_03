#include <iostream>
#include"Invoice.h"

using namespace std;

int main()
{
    Invoice pp("001","s201",50,1);
    int a,b;
    cout<<"输入售出量"<<":";
    cin>>a;
    //Invoice.setSalesVolume(a);
    cout<<endl;
    cout<<"输入单价"<<":";
    cout<<endl;
    cin>>b;
    //Invoice.setPrice(b);
    pp.getInvoiceAmount(a,b);
    cout<<pp.getInvoiceAmount(a,b);
    return 0;
}
