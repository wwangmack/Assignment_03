#include<iostream>
#include"Invoice.h"

int main()
{
    //create three Invoice objects,include one normal data and two unusual datas
    Invoice commodity1("NO.101","Ball",10,10);
    Invoice commodity2("NO.102","Racket",10,-10);
    Invoice commodity3("NO.103","Cap",-10,10);

    //call function to display invoice information
    commodity1.displayInvoice();
    commodity2.displayInvoice();
    commodity3.displayInvoice();

    //if not use "this" pointer,direct output information
   /* cout << "Part number:" << commodity1.getPN() << endl;
    cout << "Part describe:" << commodity1.getPD() << endl;
    cout <<"Part sale number:" << commodity1.getNum() << endl;
    cout << "Part price:" << commodity1.getPrice() << endl;
    cout <<"Total part sales:" << commodity1.getInvoiceAmount(commodity1.getNum(),commodity1.getPrice()) << endl;

    cout << "Part number:" << commodity2.getPN() << endl;
    cout << "Part describe:" << commodity2.getPD() << endl;
    cout <<"Part sale number:" << commodity2.getNum() << endl;
    cout << "Part price:" << commodity2.getPrice() << endl;
    cout <<"Potal part sales:" << commodity2.getInvoiceAmount(commodity2.getNum(),commodity2.getPrice()) << endl;

    cout << "Part number:" << commodity3.getPN() << endl;
    cout << "Part describe:" << commodity3.getPD() << endl;
    cout <<"Part sale number:" << commodity3.getNum() << endl;
    cout << "Part price:" << commodity3.getPrice() << endl;
    cout <<"Total part sales:" << commodity3.getInvoiceAmount(commodity3.getNum(),commodity3.getPrice()) << endl;*/
}
