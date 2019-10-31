#include<iostream>
#include<string>
using namespace std;
#include "Invoice.h" // Employee class definition
int main()
{
 string number,description;//零件号、零件描述
 int quantity,price;//售出量、单价
 Invoice Test(number,description,quantity,price);


 cout<<"请输入零件号:";
 getline(cin,number);
 cout<<"请输入零件描述:";
 getline(cin,description);
 cout<<"请输入商品售出量:";
 cin>>quantity;
 cout<<"请输入单价:";
 cin>>price;

 Test.setNum(number);
 Test.getNum();
 Test.setDes(description);
 Test.getDes();
 Test.setQuantity(quantity);
 Test.getQuantity();
 Test.setPrice(price);
 Test.getPrice();
 cout<<"发票额:"<<Test.GetInvoiceAmmount();
 return 0;
}
