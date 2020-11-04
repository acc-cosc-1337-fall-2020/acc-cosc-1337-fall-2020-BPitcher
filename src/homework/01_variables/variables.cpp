#include "variables.h"

//example
int add_numbers(int num1, int num2)
{
	return num1 + num2;
}

//write code for multiply_numbers function here
//function returns product of num1 and num2

const double tax_rate = .0675;

double get_sales_tax_rate(double meal_amount)
{
	double sales_tax_rate;
	return sales_tax_rate = tax_rate*meal_amount;
}

double get_tip_amount(double meal_amount, double tip_rate)
{
	double tip_amount;
	return tip_amount = meal_amount*tip_rate; 
}
