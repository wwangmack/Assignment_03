//
//  main.cpp
//  ass3
//
//  Created by MacBook on 2019/10/28.
//  Copyright © 2019 MacBook. All rights reserved.
//

#include <iostream>
using namespace std;
class Invoice{
public:
    Invoice(string number,string description,int quantity,int price)
    :number(number),description(description)
    {
        if(quantity>=0)this->quantity=quantity;
        else this->quantity=0;
        
        if(price>=0)this->price=price;
        else this->price=0;
    }
    void setNumber(string x){
        number=x;
    }
    string getNumber(){
        return number;
    }
    void setdescription(string x){
        description=x;
    }
    string getdescription(){
        return description;
    }
    void setquantity(int x){
        quantity=x;
    }
    int getquantity(){
        return quantity;
    }
    void setprice(int x){
        price=x;
    }
    int getprice(){
        return price;
    }
    int getInvoiceAmount(){
        return price*quantity;
    }
private:
    string number;
    string description;
    int quantity;
    int price;
};

int main(int argc, const char * argv[]) {
    // insert code here...
    Invoice myin("1","yyy",10,12);
    Invoice myin2("2","iii",-1,-2);
    
    cout<<myin.getInvoiceAmount()<<endl;
    cout<<myin2.getInvoiceAmount()<<endl;
}
