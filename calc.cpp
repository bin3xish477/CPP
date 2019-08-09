/*

Name: Alexis Rodriguez 
Date: February 8th, 2019
instructor: G. Maryash
Assignment: project 1B



This program makes a simple calculator that can add and subtract integers, and will accept arbitrarily long mathematical formulas composed of symbols +, -, and non-negative integer numbers.



*/

#include <iostream>
#include <fstream>

using namespace std;

int main()
{
	int number, sum = 0;
	char pos_num = '+', neg_num;


	while (cin >> number)
	{ 			//takes numbers from file and redirects them 					charatcer by character into the program.
	cin >> neg_num;
	if (pos_num == '+')
	{
	sum += number;
	}
	else if (pos_num == '-')
	{
	sum -= number;
	}
	pos_num = neg_num;
	}
	cout << sum << endl;
	return 0;
}
	
	
