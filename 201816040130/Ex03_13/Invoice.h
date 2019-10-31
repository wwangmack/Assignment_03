#include <string>
using namespace std;

class Invoice  //Declare the class of Invoice
{
public:
	Invoice(string sizes,string description,int sales, int price); //Declare the constructor

	void setPartSize(string);  //Declare methods
	string getPartSize();

	void setPartDescription(string);
	string getPartDescription();

	void setPartSales(int);
	int getPartSales();

	void setPartPrice(int);
	int getPartPrice();

	int getInvoiceAmount();
private:
	string partSize;  //Declare  the data members of the Invoice
	string partDescription;
	int partSales;
	int partPrice;
};
