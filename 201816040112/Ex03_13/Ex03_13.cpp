#include <iostream>
#include "headers.h"

using namespace std;

int main()
{
    Invoice myinvoice("16","to click something",10,15);
    cout<<"商品编号:"<<myinvoice.getelnumber()<<endl<<"商品描述:"<<myinvoice.geteldiecribe()<<endl
    <<"商品销量:"<<myinvoice.getelsales()<<endl<<"商品价格:"<<myinvoice.getelprices()<<endl;

    return 0;
}
