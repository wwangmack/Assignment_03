#include <iostream>
#include "Invoice.h"
using namespace std;
int main()
{
    Invoice shang1("1","egg",100,2000);
    Invoice shang2("2","apple",-1,8000);
    //output shang1 informations
    cout << "shang1 information :\n" <<"Number:\n "<<shang1.getLingName()<<"Describe:\n "<<shang1.getLingXing()
         <<"Sold: \n"<<shang1.getShangShou()<<"Price: \n"<<shang1.getShangJian()<< endl;

    //output shang2 informations
    cout << "shang2 information :\/" <<"Number:\n "<<shang2.getLingName()<<"Describe:\n "<<shang2.getLingXing()
         <<"Sold: \n"<<shang2.getShangShou()<<"Price:\n "<<shang2.getShangJian()<< endl;

    //Calculate shang1 invoice amount and output
    cout <<"shang1:\n "<<shnag1.getInvoiceAmount();

    //Calculate shang2 invoice amount and output
    cout <<"shang2:\n"<<shang2.getInvoiceAmount();
    return 0;
}
