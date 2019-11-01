//
//  Invoice.hpp
//  ass3
//
//  Created by MacBook on 2019/10/31.
//  Copyright © 2019 MacBook. All rights reserved.
//

#ifndef Invoice_hpp
#define Invoice_hpp

#include <stdio.h>
#include <iostream>
using namespace std;
class Invoice{
public:
    Invoice(string ,string ,int ,int );
    void setNumber(string );
    string getNumber();
    void setdescription(string );
    string getdescription();
    void setquantity(int );
    int getquantity();
    void setprice(int );
    int getprice();
    int getInvoiceAmount();
private:
    string number;
    string description;
    int quantity;
    int price;
};
#endif /* Invoice_hpp */
