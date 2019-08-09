/*

Name: Alexis Rodriguez 
Date: February 7th, 2019
instructor: G. Maryash
Assignment: lab 2D
Date due: February 7th, 2019


This program keeps track of the previous numbers stored in an array to compute the outcome of the following value. The sum of following numbers computed as the the sum of two previous numbers.


*/

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	int fib[60];
	fib[0] = 0;
	fib[1] = 1;
	for (int i = 2; i < 60; i++) {
	fib[i] = fib[i - 1] + fib[i - 2]; // defines fib[i] for the following loop
	}
	for (int i = 0; i < 60; i++) { 
	cout << fib[i] << endl;
	}
	return 0;
}


