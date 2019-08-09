/*
Name: Alexis Rodriguez
Date: February 12th, 2019
Instructor: G. Maryash
Assignment: Project 1c

This program can evaluate multiple arithmetic expressions.


*/

#include <iostream>
#include <fstream>

using namespace std;

int main()
{
	int number, total = 0;
	char pos_num = '+', neg_num;
	
	while (cin >> number){ // stores the values from the input in number;
	cin >> neg_num;
	
		if (pos_num == '+')
		{
		total += number;
		}
		else if (pos_num == '-')
		{
		total-= number;
		}
		if (neg_num == ';')
		{

		cout << total << endl;
		total = 0;
		neg_num = '+';

		}
		pos_num = neg_num; // must set both characters equal to each other.	
		}
	return 0;
}
	
	
	
	
