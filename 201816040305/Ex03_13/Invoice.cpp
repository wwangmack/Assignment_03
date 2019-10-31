    #include <iostream>
    using namespace std;
    //include the head File Invoice.h
    #include "Invoice.h"
    //Constructor
    Invoice::Invoice( string partnumber , string partdiscription , int item , int price)
    {
        setPartNumber(partnumber) ;
        setPartDiscription(partdiscription) ;
        setItemBeingPurchased(item) ;
        setPricePerItem(price) ;
    }
    //Set part number
    void Invoice::setPartNumber(string partnumber)
    {
        partNumber = partnumber;
    }
    //Get part number
    string Invoice::getPartNumber()
    {
        return partNumber ;
    }
    //Set part details
    void Invoice::setPartDiscription(string partdiscription)
    {
        partDiscription = partdiscription;
    }
    //Get part details
    string Invoice::getPartDiscription()
    {
        return partDiscription ;
    }
    //Set the number of parts purchased
    void Invoice::setItemBeingPurchased(int item)
    {
        if(item >= 0)
            itemBeingPurchased = item ;
        else
            itemBeingPurchased = 0 ;
    }
    //Get the number of parts purchased
    int Invoice::getItemBeingPurchased()
    {
        return itemBeingPurchased ;
    }
    //Set the unit price of the part
    void Invoice::setPricePerItem(int price)
    {
        if(price >= 0)
            pricePerItem = price ;
        else
            pricePerItem = 0 ;
    }
    //Get the unit price of the part
    int Invoice::getPricePerItem()
    {
        return pricePerItem ;
    }
    //Get the total price
    int Invoice::getInvoiceAmount()
    {
        InvoiceAmount = itemBeingPurchased * pricePerItem ;
        return InvoiceAmount ;
    }
