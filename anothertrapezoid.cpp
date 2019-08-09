/*
Name: Alexis Rodriuguez
Date: Feberuary 25th, 2019
Instructor: G. Maryash
Assignment: Lab 4F

This program prints the top right half of a square.
We achieve this by using nested loops.



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
		
	if(height % 6 == 1){
	cout << "Imposible shape!" << endl;
	}
	else{
	for(a = 0; a < height; a++){
		for(b = 0; b < a; b++){ //as a grows by 1, b is forced to create spaces.
		cout << " ";
		}
		for(b = 0; b < width; b++){ //prints out the "*" according to the width, which is decremented by 2 through every loop. 
		cout << "*";
		}
	width-=2;
	cout << endl;
	}}

	return 0;
}

	
		
