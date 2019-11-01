class Invoice
{
public:
	Invoice ( string,string,int,int);
	void setId( string );
	string getId();
	void setDiscrip( string );
	string getDiscrip();
	void setNumber( int );
	int getNumber();
	void setPrice( int );
	int getPrice();
	int getInvoiceAmount(int,int);
	void displayInvoice();
private:
	string Id;
	string Discrip;
	int Number;
	int Price;
};
