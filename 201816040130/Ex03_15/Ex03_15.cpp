#include <iostream>
using namespace std;

#include "Date.h" // include definition of class Date


int main()
{

    Date date1(10,31,2019);  //Create  a Date object and assign them to variables.
	cout << date1.getDateMonth() << "/" << date1.getDateDay() << "/" << date1.getDateYear() << endl;
}
