//
//  Ex03_13.cpp
//  ass3
//
//  Created by MacBook on 2019/10/31.
//  Copyright © 2019 MacBook. All rights reserved.
//

#include <stdio.h>
#include "Invoice.hpp"
using namespace std;
int main(int argc, const char * argv[]) {
    // insert code here...
    Invoice myin("1","yyy",10,12);
    Invoice myin2("2","iii",-1,-2);
    
    cout<<myin.getInvoiceAmount()<<endl;
    cout<<myin2.getInvoiceAmount()<<endl;
}
