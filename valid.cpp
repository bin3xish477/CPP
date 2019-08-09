/*
Name: Alexis Rodriguez
Date: February 6, 2019
instructor: G. Maryash
Assignment: Lab 2A

This program takes a number from 
1 to 99 and squares it.



*/

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
        int n;
	cout << "please enter an integer: ";
	cin >> n;
	while (true){
		if(0 < n and n < 100){
	break;
	}
	cout << "please re-enter: ";
	cin >> n;
	}
	cout << "Number squared is " << pow(n,2);
	return 0;
}
	
	
	

