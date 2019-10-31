#include <iostream>
#include "Invoice.h"
#include<string>
using namespace std;

int main()
{
    string number, describe;
    int amount, price;
    cout<<"please input the number of thing:   ";
    getline(cin,number);
    cout<<"please input the describe of thing:   ";
    getline(cin, describe);
    cout<<"please input the amount of thing:   ";
    cin>>amount;
    cout<<"please input the price of thing:   ";
    cin>>price;
    Invoice invoice(number,describe,amount,price);

     cout << invoice.getInvoiceAmount() << endl;
    return 0;
}
