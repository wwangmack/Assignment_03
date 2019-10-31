//
//  Invoice.cpp
//  ass3
//
//  Created by MacBook on 2019/10/31.
//  Copyright © 2019 MacBook. All rights reserved.
//

#include "Invoice.hpp"
#include <iostream>
using namespace std;
Invoice::Invoice(string number,string description,int quantity,int price)
:number(number),description(description)
{
    if(quantity>=0)this->quantity=quantity;
    else this->quantity=0;
    
    if(price>=0)this->price=price;
    else this->price=0;
}
void Invoice::setNumber(string x){
    number=x;
}
string Invoice::getNumber(){
    return number;
}
void Invoice::setdescription(string x){
    description=x;
}
string Invoice::getdescription(){
    return description;
}
void Invoice::setquantity(int x){
    quantity=x;
}
int Invoice::getquantity(){
    return quantity;
}
void Invoice::setprice(int x){
    price=x;
}
int Invoice::getprice(){
    return price;
}
int Invoice::getInvoiceAmount(){
    return getprice()*getquantity();
    }
