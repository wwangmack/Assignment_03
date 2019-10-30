#include<bits/stdc++.h>
#include"Invoice.h"

using namespace std;

int main()
{
    printf("零件");
     Invoice getone("007","螺丝",50,1);
     cout<<"零件信息："<<endl;
     cout<<"零件号： "<<getone.getlingjianhao()<<" 零件名： "<<getone.getlingjianname()<<" 零件数量： "<<getone.getnumber()<<" 零件单价： "<<getone.getmoney()<<endl;
     getone.setnumber(60);
     getone.setmoney(2);
      cout<<"零件修改信息："<<endl;
     cout<<"零件号： "<<getone.getlingjianhao()<<" 零件名： "<<getone.getlingjianname()<<" 零件数量： "<<getone.getnumber()<<" 零件单价： "<<getone.getmoney()<<endl;
     cout<<"总额:"<<getone.getinvoiceamount(60,2);

}
