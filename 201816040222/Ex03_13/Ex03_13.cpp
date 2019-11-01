#include <iostream>
using namespace std;

#include "Invoice.h" // include definition of class Employee

// function main begins program execution
int main()
{
    int n1, n2;
    cout <<"请输入单价：";
    cin >> n1;
    cout << "请输入销量";
    cin >> n2;
    Invoice invoice("adsd","feter",n1, n2);
    invoice.setc(n1);//初始化数据
    invoice.setd(n2);
    cout << "单价为"<<invoice.getc()<<endl << "销量为:"<< invoice.getd() <<endl;
    cout <<"发票额为：" << invoice.getInvoice();//输出发票额
   /* Create two Employee objects and assign them to Employee variables. */

   /* Output the first name, last name and salary for each Employee. */

   /* Give each Employee a 10% raise. */

   /* Output the first name, last name and salary of each Employee again. */
} // end main

