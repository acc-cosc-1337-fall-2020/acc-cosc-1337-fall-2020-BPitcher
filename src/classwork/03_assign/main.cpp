//Write the include statement for decisions.h here
#include "decision.h"
#include <iostream>
//Write namespace using statements for cout and cin
using std::cout;
using std::cin;

int main() 
{
	int grade;
	cout<<"Please enter your grade to convert into a letter: ";
	cin>>grade;
	get_letter_grade_using_if(grade);
	get_letter_grade_using_switch(grade);
	return 0;
}

