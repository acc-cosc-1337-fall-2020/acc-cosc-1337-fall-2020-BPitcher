//write includes statements
#include "loops.h"
#include <iostream>
//write using statements for cin and cout
using std::cin;
using std::cout;

/*
Use a do while loop to prompt the user for 
a number, call the factorial function, and display the number's
factorial.  Also, loop continues as long as user wants to.
*/
int main() 
{
	int num;
	cout<<"Please enter a positive integer (1-10): ";
	cin>>num;

	do
	{
		cin>>num;
		factorial(num);
		cout<<"\nPlease enter a positive integer between 1-10 to keep going: ";
		cin>>num;
	} while (num < 1 && num > 10);
	


	return 0;
}