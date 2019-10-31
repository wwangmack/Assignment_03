#include <string>
using namespace std;
class Invoice
{
public:
    explicit Invoice( string, string, int, int );  //constructor initializes part number, part describe, part sold and part price
    void setLingName( string ); //function to set the part number
    string getLingName( ); //function to get the part number
    void setLingXing( string ); //function to set the part describe
    string getLingXing( ); //function to get the part describe
    void setShangShou(int); //function to set the part sold
    int getShangShou( ); //function to get the part sold
    void setShangJian( int ); //function to set the part price
    int getShangJian( ); //function to get the part price
    int getInvoiceAmount( ); //function to get the invoice amount
private:
    string lingName; // number
    string lingXing; //describe
    int shangShou; //sold
    int shangJian; //price
};
