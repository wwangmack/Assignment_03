// Exercise 3.13 Solution: Ex03_13.cpp
// Test program for modified Invoice class.
#include <iostream>
// include definition of class GradeBook from Invoice.h
#include "Invoice.h"
using namespace std;

int main()
{
     // create a Invoice object;
    Invoice invoice("0001","螺丝钉",100,2);

    cout << "零件号：" << invoice.getPartNumber() << endl;
    cout << "零件描述：" << invoice.getPartDescription() << endl;
    cout << "商品售出量：" << invoice.getPartQuantity() << endl;
    cout << "商品单价：" << invoice.getPartPrice() << endl;
    cout << "发票额：" << invoice.getInvoiceAmount() << endl;
}
