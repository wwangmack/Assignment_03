// Exercise 3.13 Solution: Ex03_13.cpp
#include <iostream>
#include"Invoice.cpp"
using namespace std;

int main()
{
    Invoice Invoice1("1", "HuoSai", 10000, 10);

   cout <<" ElementNumber: " << Invoice1.getElementNumber() << endl;
   cout <<" PartDescription: "<< Invoice1.getPartDescription() << endl;
   cout <<" GoodsSold: " << Invoice1.getGoodsSold() << endl;
   cout <<" ItemPricing: " << Invoice1.getItemPricing() << endl;
   cout <<" InvoiceAmount: " << Invoice1.getInvoiceAmount() << endl;
}
