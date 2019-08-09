/*
Name: Alexis Rodriuguez
Date: Feberuary 25th, 2019
Instructor: G. Maryash
Assignment: Lab 4E

This program prints the top right half of a square.
We achieve this by using nested loops.



*/
 
#include <iostream>
using namespace std;

int main()
{
	int side_length,a,b,c;
	cout << "Input side length: " << endl;
	cin >> side_length;
	
	for(a = side_length; a > 0; a--){
		for(b = side_length; b > a; b--){
		cout << " ";
		}
	for(c = 0; c < a; c++){
	cout << "*";
	}
	cout << endl;
	}
	return 0;
}
	
