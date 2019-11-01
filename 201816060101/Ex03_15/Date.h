//Date.h
using namespace std;
class Date {
public:
	Date(const int &month, const int &day, const int &year);	//Constructor
	void setMonth(const int &month);	//setMonth
	int getMonth() const;	//getMonth
	void setDay(const int &day);	//setDay
	int getDay() const;		//getDay
	void setYear(const int &year);	//setYear
	int getYear() const;	//getYear
	void displayDate() const;	//displayDate
private:
	//Date
	int month;
	int year;
	int day;
};
