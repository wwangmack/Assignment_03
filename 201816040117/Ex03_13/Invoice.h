#include<string>
using namespace std;
class Invoice
{
public:
    Invoice (string , string ,int , int);// constructor initializes data
    void setAll(string , string ,int , int );//function to set all the data
    void setPartNumber(string);//function to set the partNumber
    string getPartNumber(); // function to retrieve the partNumber
    void setPartDescription(string);//function to set the partDescription
    string getPartDescription(); // function to retrieve the partDescription
    void setQuantitySold(int);//function to set the quantitySold
    int getQuantitySold(); // function to retrieve the quantitySold
    void SetCommodityPrice(int);//function to set the commodityPrice
    int getCommodityPrice(); // function to retrieve the commodityPrice
    int getInvoiceAmount(); // function to retrieve the commodityPrice*quantitySold
    void displayMessage();//display Invoice's message
private:
    string partNumber;//Invoice's part number
    string partDescription;//Invoice's part description
    int quantitySold;//Invoice's amount sold
    int commodityPrice;//Invoice's retail price
};
