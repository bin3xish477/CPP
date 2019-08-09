/*
Name: ALexis Rodriguez
Date: February 1st, 2019
Instructor: G. Maryash
Assignment: Lab 1B

This program prints a leap year 
or a common year.


*/

#include <iostream>
using namespace std;

int main()
{
	int year;
	cout << "Enter a year number: " << endl;
	cin >> year;
	if (year % 4 != 0){
	cout << "The year given is a common year" << endl;
	}
	else if (year % 100 != 0){
	cout << "The year given is a leap year" << endl;
	}
	else if (year % 400 != 0){
	cout << "The year given is a common year" << endl;
	}
	else{
	cout << "It is a leap year" << endl;
	}
	return 0;
}
