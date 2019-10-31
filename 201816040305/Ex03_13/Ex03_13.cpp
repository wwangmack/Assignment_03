#include <iostream>
#include <string>
using namespace std;
//include the head File Invoice.h
#include "Invoice.h"

int main()
{
    //initialization
    Invoice invoice1("0001" , "Screwdriver" , 1 , 15) ;
    Invoice invoice2("0002" , "Screw" , 20 , 1) ;
    Invoice invoice3("0003" , "Pliers" , 2 , 20) ;
    Invoice invoice4("0004" , "Hammer" , 1 , 20) ;
    //Test Negative value
    Invoice invoice5("0005" , "Whatever" , -1 , -15) ;
    //output all datas
    cout << "PartNumber :"<<invoice1.getPartNumber()<<"          "<<"Part Discription: " <<invoice1.getPartDiscription() <<"          "<<"item being purchased : "<<invoice1.getItemBeingPurchased() <<"          "
        <<"price per item: "<<invoice1.getPricePerItem() <<"          "<<" Needs to pay: "<<invoice1.getInvoiceAmount()<<endl ;

    cout << "PartNumber :"<<invoice2.getPartNumber()<<"          "<<"Part Discription: " <<invoice2.getPartDiscription() <<"          "<<"item being purchased : "<<invoice2.getItemBeingPurchased() <<"          "
        <<"price per item: "<<invoice2.getPricePerItem() <<"          "<<" Needs to pay: "<<invoice2.getInvoiceAmount()<<endl ;

    cout << "PartNumber :"<<invoice3.getPartNumber()<<"          "<<"Part Discription: " <<invoice3.getPartDiscription()<<"          " <<"item being purchased : "<<invoice3.getItemBeingPurchased() <<"          "
        <<"price per item: "<<invoice3.getPricePerItem() <<"          "<<" Needs to pay: "<<invoice3.getInvoiceAmount()<<endl ;

    cout << "PartNumber :"<<invoice4.getPartNumber()<<"          "<<"Part Discription: " <<invoice4.getPartDiscription() <<"          "<<"item being purchased : "<<invoice4.getItemBeingPurchased() <<"          "
        <<"price per item: "<<invoice4.getPricePerItem() <<"          "<<" Needs to pay: "<<invoice4.getInvoiceAmount()<<endl ;

    cout << "PartNumber :"<<invoice5.getPartNumber()<<"          "<<"Part Discription: " <<invoice5.getPartDiscription() <<"          "<<"item being purchased : "<<invoice5.getItemBeingPurchased() <<"          "
        <<"price per item: "<<invoice5.getPricePerItem() <<"          "<<" Needs to pay: "<<invoice5.getInvoiceAmount()<<endl ;
} // end main
