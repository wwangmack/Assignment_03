#ifndef INVOICE_H_INCLUDED
#define INVOICE_H_INCLUDED
#include<bits/stdc++.h>

using namespace std;

class Invoice
{
public:
    Invoice(string, string, int, int);
    void setNumber( string );
    string getNumber();
    void setExpression( string );
    string getExpression();
    void setSell( int );
    int getSell();
    void setPrice( int );
    int getPrice();
    int getInvoiceAmount();
private:
   string number;
   string expression;
   int sell;
   int price;
};

#endif // INVOICE_H_INCLUDED

