//Invoice.h
//Definition of Invoice class

#ifndef INVOICE_H
#define INVOICE_H

#include<string>

using namespace std;

class Invoice
{
public:
    explicit Invoice(string pn,string pd,int Num,int Price); //constructor initialize Invoice information
    void setPN(string pn);  //sets the part number
    void setPD(string pd);  //sets the part describe
    void setNum(int Num);   //sets the part sale number
    void setPrice(int Price);   //sets the part price
    string getPN() const;   //gets the part number
    string getPD() const;   //gets the part describe
    int getNum() const;     //gets the part sale number
    int getPrice() const;   //gets the part price
    int getInvoiceAmount(int Num,int Price) const;  //calculate invoice amount
    void displayInvoice() const;    //display a Invoice message
private:
    string PN;  //part number
    string PD;  //part describe
    int num;    //part sale number
    int price;  //part price
};//end class Invoice

#endif // INVOICE_H
