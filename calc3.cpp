/*
Name: Alexis Rodriguez
Date: February 18th, 2019
Instructor: G. Maryashh
Assignment: Project 1D

This program is a calculator for variables that should either added or substracted and or squared.


*/

#include <iostream>
#include <fstream>

using namespace std;

int main()
{
	int number, total = 0;
	char search_variable = '+', other_variable;
	
	
	while (cin >> number){ //store values from file into number
	
	cin >> other_variable; //store other characters in other_variable
	
	if (other_variable == '^')
	{
	number *= number; // if char is equal to '^' square the number
	cin >> other_variable;
	}
	
	if (search_variable == '+')
	{
	total += number;
	}
	else if (search_variable == '-')
	{
	total -= number;
	}

	if (other_variable == ';')
	{
	cout << total << endl;
	total = 0;
	other_variable = '+';
	}

	search_variable = other_variable;
	}
	return 0;
}
