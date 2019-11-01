#include <iostream>
#include <string>
using namespace std;
#include "Invoice.h"

int main()
{
	Invoice invoice
		("2018","go in school year",9,2018);
	invoice.displayInvoice();
	cout << "\n" <<endl;
}
