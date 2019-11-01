#include <iostream>
#include "Invoice.h"

using namespace std;

int main()
{
	string number, describe;
	int sale, price;
	cout << "请输入零件编号，零件描述，商品销售量以及商品单价：" << endl;
	cin >> number >> describe >> sale >> price;
	Invoice invoice(number, describe, sale, price);
	cout << "\n输出零件编号，零件描述，商品销售量以及商品单价：" << endl;
	cout << invoice.getPartNumber() << " " << invoice.getPartDescribe() << " "<< invoice.getProductSale()
	<< " " << invoice.getProductPrice() << endl;
	cout << "\n商品最后总价格：" ;
	invoice.getInvoiceAmount();//计算商品总额
    cout << endl;
}
