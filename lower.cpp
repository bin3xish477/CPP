/*
Name: Alexis Rodriuguez
Date: Feberuary 25th, 2019
Instructor: G. Maryash
Assignment: Lab 4D

This program prints the bottom left half of a triangle.




*/
 
#include <iostream>
using namespace std;

int main()
{
	int side_length,i,j;
	cout << "Input side length: " << endl;
	cin >> side_length;
	
	for(i = 0; i < side_length; i++){ //loop defined by the variable side length.
		for(j = 0; j <= i; j++){ //as i increments, so does the number of stars being printed.
		cout << "*";
		}
	cout << endl;
//cout << endl; in the body of the first loop so that we get a new line every time the second loop is completed.
	}
	return 0;
}
		
	

