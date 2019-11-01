// assignment 3:  Invoice.cpp
// Invoice class member-function definitions.
#include <iostream>
using namespace std;

#include "Invoice.h" // Invoice class definition
Invoice::Invoice( string partnumber,string partdescription,int marketquantities,int unitprice )
{
    setPartNumber(partnumber);
    setPartDescription(partdescription);
    setMarketQuantities(marketquantities);
    setUnitPrice(unitprice);
    /* Define the constructor. Assign each parameter value to the appropriate data
   member.*/
}
void Invoice::setPartNumber( string partnumber )
{
    partNumber = partnumber;
}/* Define a set function for the part's number data member. */
string Invoice::getPartNumber()
{
    return partNumber;
}/* Define a get function for the part's number data member. */
void Invoice::setPartDescription( string partdescription )
{
    partDescription = partdescription;
}/* Define a set function for the part's description data member. */
string Invoice::getPartDescription()
{
    return partDescription;
}/* Define a get function for the part's description data member. */
void Invoice::setMarketQuantities( int marketquantities )
{
    marketQuantities = marketquantities;
}/* Define a set function for the part's marketquantities data member. */
int Invoice::getMarketQuantities()
{
    return marketQuantities;
}/* Define a get function for the part's marketquantities data member. */
void Invoice::setUnitPrice( int unitprice )
{
    unitPrice = unitprice;
}/* Define a set function for the part's single price data member. */
int Invoice::getUnitPrice()
{
    return unitPrice;
}/* Define a get function for the part's single price data member. */
int Invoice::getInvoiceAmount( int invoiceamount )
{
    int marketquantities,unitprice;
    if(marketquantities<0||unitprice==0)
        invoiceamount=0;
   return marketquantities*unitprice;
}/* Define a function for the part's amount*/
