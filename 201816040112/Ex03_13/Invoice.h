
#include <string>
class Invoice
{

public:
    explicit Invoice(std::string,std::string,int,int);
    void setelnumber(std::string);
    void seteldescribe(std::string);
    void setelsales(int);
    void setelprices(int);
    std::string getelnumber() const;
    std::string geteldiecribe() const;
    int getelsales() const;
    int getelprices() const;

private:
    std::string elnumber,eldescribe;
    int elsales,elprices;


};

