
class Invoice
{
public:
   Invoice( string,string,int,int ); // constructor initializes balance
    void set_product_number(string);
    void set_product_describe(string);
    void set_product_count(int);
    void set_product_price(int);
    string get_product_number();
    string get_product_describe();
    int get_product_count();
    int get_product_price();
    int getInvoiceAmount();
private:
   string product_number;
   string product_describe;
   int product_count;
   int product_price;

};
