class Invoice
{
public:
     Invoice(string,string);
     void setID( string );         //输入零件号
     void setDescription( string);    //零件描述
     string getID();
     string getDescription();
     void setPrice( int );          //零件单价
     void setSales( int );          //销售量
     int getPrice();
     int getSales();
     int getInvoiceAmount();

private:
     string id;
     string description;
     int price;
     int sales;
};
