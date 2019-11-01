#include <iostream>
using namespace std;

// include definition of class GradeBook from GradeBook.h
#include "Invoice.h"

// function main begins program execution
int main()
{
   string part,descripe;
   int number,money;
   cout<<"write part:"; cin>>part;
   cout<<"write descripe:"; cin>>descripe;
   cout<<"write number:"; cin>>number;
   cout<<"write money:"; cin>>money;           //input information

   Invoice Invoice(part,descripe,number,money);     //Create four Invoice objects and assign them to Invoice variables

   Invoice.displayMessage();                      // Output information
} // end main
