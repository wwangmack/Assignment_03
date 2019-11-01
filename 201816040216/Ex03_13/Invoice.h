// Lab 3: Employee.h
// Employee class definition.

#include <string> // program uses C++ standard string class
using namespace std;

// Employee class definition
class Invoice
{
public:
   /* Declare a constructor that has one parameter for each data member */
   Invoice(string,string,int,int);
   /* Declare a set method for the employee's first name */
   void setpart(string);
   /* Declare a get method for the employee's first name */
   string getpart();
   /* Declare a set method for the employee's last name */
   void setdiscribe(string);
   /* Declare a get method for the employee's last name */
   string getdiscribe();
   /* Declare a set method for the employee's monthly salary */
   void setsellnumber(int);
   /* Declare a get method for the employee's monthly salary */
   int getsellnumber();

   void setmoney(int);

   int getmoney();

   void setchange(int,int);
   int getchange();
   void displaymessage();// display welcome message and instructor name
   void displaymessage1();
   int increasingmoney(int);
private:
   /* Declare a string data member for the employee's first name */
   string newpart;
   /* Declare a string data member for the employee's last name */
   string newdiscribe;
   /* Declare an int data member for the employee's monthly salary */
   int newsellnumber;

   int newmoney;

   int totalmoney;

}; // end class Invoice
