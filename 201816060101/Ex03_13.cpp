#include <iostream>
#include "Invoice.h"
using namespace std;

int main() {
	string PartNumber, PartDescription;	//建立临时变量
	int SalesVolume, UnitPrice;

	cout << "Please enter part number, part description, sales volume and unit price at one time(Space or line break between inputs).\n";
	cin >> PartNumber >> PartDescription >> SalesVolume >> UnitPrice;

	//用构造函数初始化类的成员
	cout << "\nThe first way:\n\n";
	Invoice inv1(PartNumber, PartDescription, SalesVolume, UnitPrice);

	//测试数据
	cout << "Please check the inputs...\n";
	cout << "The part number is: " << inv1.getPartNumber() << "\n";
	cout << "The part Description is: " << inv1.getPartDescription() << "\n";
	cout << "The sales volume is: " << inv1.getSalesVolume() << "\n";
	cout << "The unit price is: " << inv1.getUnitPrice() << "\n";
	cout << "The Invoice amount is: " << inv1.getInvoiceAmount() << "\n";
	return 0;
}
