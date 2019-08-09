/*
Name: ALexis Rodriguez
Date: February 1st, 2019
Instructor: G. Maryash
Assignment: Lab 1B

This program asks the user for the input of a year 
and month and prints the number of days on that month.


*/

#include <iostream>
using namespace std;

int main()
{
	int year, month;
	cout << "Enter year: " << endl;
	cin >> year;
	cout << "Enter month: " << endl;
	cin >> month;
	if (month % 2 != 0){
	cout << "31 days" << endl;
	}
	else{
	cout << "30 days" << endl;
	}
	return 0;
}
