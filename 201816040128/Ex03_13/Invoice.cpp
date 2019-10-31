#include <iostream>
#include "Invoice.h"
#include<string>
using namespace std;


    //定义构造函数进行传参数
    Invoice::Invoice(string num, string des, int amoun, int pric)
        : number(num), describe(des), amount(amoun), price(pric)
    {

    }
    void Invoice::setNumber(string num)
    {
        number=num;
    }
    string Invoice::getNumber() const
    {
        return number;
    }

    void Invoice::setDescibe(string des)
    {
        describe=des;
    }
    string Invoice::getDescibe() const
    {
        return describe;
    }

    void Invoice::setAmount(int amoun)
    {
        amount=amoun;
    }
    int Invoice::getAmount() const
    {
        return amount;
    }

     void Invoice::setPrice(int pric)
    {
        price=pric;
    }
    int Invoice::getPrice() const
    {
        return price;
    }

    int Invoice::getInvoiceAmount()
    {
        if(amount<0)
            amount=0;
        if(price<0)
            price=0;
        return amount * price;
    }



