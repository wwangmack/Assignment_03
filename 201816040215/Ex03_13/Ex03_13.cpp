// assignment 3: Invoice.cpp
//
#include <iostream>
using namespace std;

#include "Invoice.h" // Invoice class definition
int main()
{
   string partnumber,partdescription;//create two bojicts which define the part's number and description
   int marketquantities,unitprice;//create two bojicts which define the part's marketquantities and unitPrice
   cout << "The pat number is: ";//output the part's number
   cin >> partnumber;//input the part's number
   cout << "The pat description is: ";//output the part's description
   cin >> partdescription;//input the part's description
   cout << "The quantities of goods sold is: ";//output the part's marketquantities
   cin >> marketquantities;//input the part's marketquantities
   cout << "The goods' single price is: ";//output the part's single price
   cin >> unitprice;//input the part's single price
   Invoice invoice( partnumber, partdescription, marketquantities, unitprice);
   invoice.getinvoiceAmount();
   cout >> invoice.getPartNumber() >> invoice.getPartDescription() >> invoice.getMarketQuantities() >>
   invoice.getUnitPrice() >> invoice.getInvoiceAmount() ;
   /*call the constructor function and output the part' number,description,marketquantities,
   single price and amount.*/
}
