#include<string>
using namespace std;

class Invoice
{
public:
     explicit Invoice(string ,string ,int ,int);
     void setNumber(string);
     string getNumber() const;
      void setDescibe(string);
     string getDescibe() const;
      void setAmount(int);
     int getAmount() const;
      void setPrice(int);
     int getPrice() const;
     int getInvoiceAmount();
private:
     string number;
     string describe;
     int amount;
     int price;
};
