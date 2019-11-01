#include <string>
using namespace std;
class Invoice {
public:
	Invoice(const string &PartNumber, const string &PartDescription, const int &SalesVolume, const int &UnitPrice); //构造函数
	Invoice();	//构造函数
	void setPartNumber(const string &_PartNumber);	//set函数
	void setPartDescription(const string &_PartDescription);	 //set函数
	void setSalesVolume(const int _SalesVolume);	//set函数
	void setUnitPrice(const int _UnitPrice);	//set函数
	string getPartNumber() const;	//get函数
	string getPartDescription() const;	//get函数
	int getSalesVolume() const;	//get函数
	int getUnitPrice() const;	//get函数
	int getInvoiceAmount() const;	//求乘积函数
private :
	string PartNumber, PartDescription;	//类的成员；分别为零件号，零件描述，售出量和单价
	int SalesVolume, UnitPrice;
};
