/*
Name: Alexis Rodriuguez
Date: Feberuary 25th, 2019
Instructor: G. Maryash
Assignment: Lab 4C

This program creates a diagnol cross that is dependent
on the input stored in the varialble size, 
that is provided by the user.


*/

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int size, row, col;
	cout << "input size: " << endl;
	cin >> size;
	
	for(row = 0; row < size; row++){
		for(col = 0; col < size; col++){
	if(row == col || row+col+1 == size){ //as row changes the if statement determines whether a 							// star will be printed or a space.
		cout << "*";
		}
		else{
			cout << " ";
		}
	}
	cout <<endl;
	}
	return 0;
}
		
