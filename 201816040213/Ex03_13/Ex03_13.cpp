#include <iostream>
#include "Invoice.h" // include definition of class Invoice
using namespace std;

int main()
{
    Invoice part1("01","wheel",100,2000); //Create and initialize part1
    Invoice part2( "02","engine",-1,8000); //Create and initialize part2
    //output part1 informations
    cout << "Part1 information :\n" <<"Number: "<<part1.getPartNumber()<<"\nDescribe: "<<part1.getPartDescribe()
         <<"\nSold: "<<part1.getPartSold()<<"\nPrice: "<<part1.getPartPrice()<< endl;
    //output part2 informations
    cout << "\nPart2 information :\n" <<"Number: "<<part2.getPartNumber()<<"\nDescribe: "<<part2.getPartDescribe()
         <<"\nSold: "<<part2.getPartSold()<<"\nPrice: "<<part2.getPartPrice()<< endl;
    //Calculate part1 invoice amount and output
    cout <<"\nPart1 invoice amount is: "<<part1.getInvoiceAmount();
    //Calculate part2 invoice amount and output
    cout <<"\nPart2 invoice amount is: "<<part2.getInvoiceAmount();
    return 0;
}
