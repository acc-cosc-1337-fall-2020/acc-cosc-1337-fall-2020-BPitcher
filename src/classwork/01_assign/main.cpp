//Write the include statement for types.h here
#include<iostream>
#include "types.h"
//Write include for capturing input from keyboard and displaying output to screen
using std::cout;
using std::cin;


int main() 
{
	int num;
	cout<<"Enter a number to be multiplied: ";
	cin>>num;
	
	int result;
	result = multiply_numbers(num);
	cout<<num<<" times 5 = "<<result;

	int num1 = 4;
	result = multiply_numbers(num1);
	cout<<"\n4 times 5 = "<<result;
	return 0;
}

