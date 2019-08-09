/*
Name: Alexis Rodriuguez
Date: Feberuary 25th, 2019
Instructor: G. Maryash
Assignment: Lab 4G

This program prints a checkerboard
using mulitple loops and if-else statement.



*/
 
#include <iostream>

using namespace std;

int main()
{
	int width,height,a,b;

	cout << "Enter width: " << endl;
	cin >> width;
	cout << "Enter height: " << endl;
	cin >> height;
	
	for(a = 0; a < height; a++){
		if (a%3 == 0 || a%2 == 0){
		cout << " ";
		}
		for(b = 0; b < width; b++){
		if(b%2== 0 || b%3 == 0){
		cout << "*";
		}
		else{
		cout << " ";
		}}
	cout << endl;
	}
	return 0;
}
