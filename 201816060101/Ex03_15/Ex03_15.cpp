#include "Date.h"
#include <iostream>
using namespace std;
int main() {
	//A right time
	Date a(11, 1, 2019);
	cout << "Now output a correct time: ";
	a.displayDate();

	cout << "Now output a wrong time: ";
	//A wrong time
	Date b(24, 1, 2019);
	b.displayDate();
	return 0;
}

/*
output:
Now output a correct time: 11/1/2019
Now output a wrong time: 1/1/2019

*/
