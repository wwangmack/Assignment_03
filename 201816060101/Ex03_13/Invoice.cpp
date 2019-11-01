#include <iostream>
#include "Invoice.h"
using namespace std;

Invoice::Invoice(const string &PartNumber, const string &PartDescription, const int &SalesVolume, const int &UnitPrice) {
	setPartNumber(PartNumber);
	setPartDescription(PartDescription);
	setSalesVolume(SalesVolume);
	setUnitPrice(UnitPrice);
}	//构造函数

Invoice::Invoice() {}	//构造函数

void Invoice::setPartNumber(const string &_PartNumber) {	//零件号
	PartNumber = _PartNumber;
}

void Invoice::setPartDescription(const string &_PartDescription) {	//零件描述
	PartDescription = _PartDescription;
}

void Invoice::setSalesVolume(const int _SalesVolume) {	//售出量
	if (_SalesVolume < 0) SalesVolume = 0;
	else SalesVolume = _SalesVolume;
}

void Invoice::setUnitPrice(const int _UnitPrice) {	//单价
	if (_UnitPrice < 0) UnitPrice = 0;
	else UnitPrice = _UnitPrice;
}

string Invoice::getPartNumber() const {	//零件号
	return PartNumber;
}

string Invoice::getPartDescription() const {	//零件描述
	return PartDescription;
}

int Invoice::getSalesVolume() const {	//售出量
	return SalesVolume;
}

int Invoice::getUnitPrice() const {	//单价
	return UnitPrice;
}

int Invoice::getInvoiceAmount() const {	//发票额
	return getSalesVolume() * getUnitPrice();
}
