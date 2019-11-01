#include <iostream>
#include"Invoice.cpp"
using namespace std;
int main()
{
    Invoice Invoice1("A01", "S", 10, 20);
    Invoice Invoice2("A02", "M", -1, 20);
    Invoice Invoice3("A03", "G", 10, -1);//实例化三个对象
    /*分别输出三个对象的成员变量以及商品价格与商品售出量*/
    cout<<"Invoice 1: "<<Invoice1.getPartNumber()<<" "<<Invoice1.getPartDescription()<<" "
    <<Invoice1.getPrice()<<" "<<Invoice1.getSaleNumber()<<" "<<Invoice1.getInvoiceAmount()<<endl;
    
    cout<<"Invoice 2: "<<Invoice2.getPartNumber()<<" "<<Invoice2.getPartDescription()<<" "
    <<Invoice2.getPrice()<<" "<<Invoice2.getSaleNumber()<<" "<<Invoice2.getInvoiceAmount()<<endl;
    
    cout<<"Invoice 3: "<<Invoice3.getPartNumber()<<" "<<Invoice3.getPartDescription()<<" "
    <<Invoice3.getPrice()<<" "<<Invoice3.getSaleNumber()<<" "<<Invoice3.getInvoiceAmount()<<endl;
    
    return 0;
}
