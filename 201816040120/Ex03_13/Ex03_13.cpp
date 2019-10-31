#include <iostream>
#include "Invoice.h"

using namespace std;

int main()
{
    Invoice invoice1("1");//Instantial object invoice1 of class Invoice
    string number , description;
    int sale , price ;//Definition of data members for Invoice
    cout << "Please enter the number of Invoice"<< endl;
    getline( cin ,number);
    invoice1.setpartNumber(number);
    cout << "Please enter the description of Invoice"<< endl;
    getline(cin, description);
    invoice1.setpartDescription(description);
    cout << "Please enter the sales of Invoice"<< endl;
    cin >> sale ;
    invoice1.setpartSales(sale);
    cout << "Please enter the price of Invoice"<< endl;
    cin >> price ;
    invoice1.setpartPrice(price);//Assign a value to the data member of the Invoice
    cout << "The information of Invoice is as follows :" <<endl;
    cout << invoice1.getpartNumber() <<endl << invoice1.getpartDescription() <<endl
        << invoice1.getpartSales()<<endl << invoice1.getpartPrice() <<endl <<
        invoice1.getInvoiceAmount(sale , price)<< endl;//enter the message of Invoice


    return 0;
}//end the main function
