/*
Name: Alexis Rodriguez 
Date: February 7th, 2019
instructor: G. Maryash
Assignment: Task 2c

This program creates an array of 10 integers,
 and provides the user with an interface to 
edit any of its elements.


*/

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int i,v;
	int myData[10];
	for (i = 0; i < 10; i++){
	myData[i] = 1;
	} 
	do {
	for (i = 0; i < 10; i++){
	cout << myData[i] << " ";
	}
	cout << "Input index: \n";
	cin >> i;
	cout << "Input value: \n";
	cin >> v;
	if (i >= 0 and i < 10){
	myData[i] = v;
	}
	
	}while (i >= 0 and i < 10);
	cout << "Index out of range. Exit.\n";
	return 0;
} 
