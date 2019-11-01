#include <string>

class Invoice
{
	public:
	    //声明构造函数，set get以及计算总额函数
		Invoice(std::string, std::string, int, int);
		void setPartNumber( std::string );
		std::string getPartNumber() const;
		void setPartDescribe( std::string );
		std::string getPartDescribe() const;
		void setProductSale( int );
		int getProductSale() const;
		void setProductPrice( int );
		int getProductPrice() const;
		void getInvoiceAmount();
	private:
	    //定义成员变量
		std::string partNumber;
		std::string partDescribe;
		int productSale;
		int productPrice;
};
