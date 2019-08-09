/*
Name: ALexi Rodriguez
Date: February 1st, 2019
Instructor: G. Maryash
Assignment: Lab 1B

This program prints the smallest value of the three values provided.


*/

#include <iostream>
using namespace std;

int main()
{
	int x, y, z;
    	cout << "Enter three numbers: " << endl;
	cin >> x >> y >> z;
	
	if(x < y and x < z){
	cout << "the smaller of the three is " << x << endl;
	}
	else if(y < x and y < z){
	cout << "the smaller of the three is " << y << endl;
	}
	else
	{
	cout << "the smaller of the three is " << z << endl;
	}
	return 0;
}

