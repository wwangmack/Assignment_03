
// Lab 1: Invoice.h
// Definition of Invoice class.

class Invoice
{
public:
   Invoice(string,string,int,int); // constructor initializes number、description、amount and price
   void setNumber(string);// function to set number
   string getNumber();// function to retrieve the number
   void setDescription(string);// function to set description
   string getDescription();// function to retrieve the description
   void setAmount(int);// function to set amount
   int getAmount();// function to retrieve the amount
   void setPrice(int);// function to set price
   int getPrice();// function to retrieve the price
   int getInvoiceAmount();

private:
    string Number;// number for this Invoice
    string Description;// description for this Invoice
    int Amount; // amount for this Invoice
    int Price;// Price for this Invoice
    int money;// money for this Invoice
}; // end class Invoice
