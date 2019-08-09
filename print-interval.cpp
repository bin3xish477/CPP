/*
Name: Alexis Rodriguez 
Date: February 7th, 2019
instructor: G. Maryash
Assignment: Task 2B

This program asks the the user an input of integers L 
and U and prints out all integers in the range L<= i <U.


*/

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int L, i,U;
	cout << "Please enter L: ";
	cin >> L;
	cout << "Please enter U: ";
	cin >> U;
	for (i = L; i < U; i++){
	cout << L++ << " " << setw(2);
	}
	return 0;
}
	
	
